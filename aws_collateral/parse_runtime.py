#!/usr/bin/env python3

import json
import os
import sys 
import re
import os

n = len(sys.argv) 
print("Total arguments passed:", n) 
assert(n == 2)

app = sys.argv[1]

print('app =', app)
import glob

vpp_log_name = "v++_{0}.log".format(app)

os.system('rm -rf our_code')
os.system('rm -rf soda_code')
os.system('../aws_collateral/get_logs.sh {0}'.format(app))
directory = './'
for filename in glob.iglob(directory + '**/*', recursive=True):
  if filename.endswith(vpp_log_name):
    print('File:', filename)
    lines = open(filename, 'r').readlines()
    for l in lines:
      target = "^INFO\: \[v\+\+ 60-791\] Total elapsed time\: (\d+)h (\d+)m (\d+)s"
      #"INFO: [v++ 60-791] Total elapsed time:" # (\d+)h (\d+)m (\d+)s"
      x = re.match(target, l) 
      if x:
        print('Line: ', l)
        hrs = int(x.group(1))
        mins = int(x.group(2))
        secs = int(x.group(3))
        total_seconds = hrs*60*60 + mins*60 + secs
        print('Seconds in v++:', total_seconds)


    # latex_table = util.replace("%", "\\%")
    # latex_table = latex_table.replace("|", "&")
    # latex_table = latex_table.replace("[ ", "[")
    # latex_table = latex_table.replace("_", "u")
    # print(latex_table)
    # break

