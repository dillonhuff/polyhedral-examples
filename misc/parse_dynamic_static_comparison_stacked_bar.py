import re
import matplotlib.pyplot as plt
from matplotlib import cm
import numpy as np
from matplotlib import colors
from matplotlib.ticker import PercentFormatter
from cycler import cycler

plt.style.use('seaborn-pastel')
f = open('./tables/dynamic_static_comparison.tex').readlines()

def intersperse(lst, item):
    result = [item] * (len(lst) * 2 - 1)
    result[0::2] = lst
    return result

def is_float(s):
    try:
        float(s)
        return True
    except ValueError:
        return False

def table_op(table_lines, func):
    res = ''
    for l in table_lines:
        rm = "(.*)\\\\\\\\"
        m = re.match(rm, l)
        if m:
            try:
                values = m[1].split('&')
                values = func(values)
                res += ' & '.join(values) + ' \\\\' + '\n'
            except:
                res += l
        else:
            res += l
    return res

def sum_double_entry(values):
    rm = "\s*(\d+)\s+(\d+)\s*"
    m = re.match(rm, values[5])
    if m:
        v = values
        values[5] = str(float(m[1]) + float(m[2]))
    return values

def entry_to_int(values):
    # print(values)
    try:
        values[5] = int(float(values[5]))
    except:
        return values
    return values

bvalues = []
lutasmem = []
ff = []
bram = []

labels = []
def extract_lut(values):
    rm = "(.*)\[(.*)\\\%\]"
    fvalues = []

    i = 0;
    labels.append(values[0].strip() + ' ' + values[1].strip() + ' ' + values[2].strip())
    for v in values:
        if i < 3:
            fvalues.append(v)
        # LUT
        elif i == 3:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            fvalues.append(m[1])
            bvalues.append(float(m[1]))
        # LUTASMEM 
        elif i == 4:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            lutasmem.append(float(m[2]))
        # FF
        elif i == 5:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            ff.append(float(m[2]))
        # BRAM 
        elif i == 5:
            m = re.match(rm, v)
            print(v, 'matches, now false')
            print('Group0:', m[0])
            print('Group1:', m[1])
            print('Group2:', m[2])
            bram.append(float(m[2]))
        i += 1

    return fvalues

res = table_op(f, extract_lut)
print(res)

major_labels = labels # ['app'] * len(lutasmem)
print('major labels:', major_labels)
print('lutasmem    :', lutasmem)

x = np.arange(len(major_labels))  # the label locations
# ['Blur 1', 'Blur 16', 'Blur 32', 'SBL 1', 'SBL 16', 'SBL 32', 'CP 1', 'CP 16', 'CP 32', 'Jac 1', 'Jac 16', 'Jac 32']

# labels = ['G1', 'G2', 'G3', 'G4', 'G5']
men_means = [20, 35, 30, 35, 27]
women_means = [25, 32, 34, 20, 25]
width = 0.35       # the width of the bars: can also be len(x) sequence

fig, ax = plt.subplots()

# ax.bar(labels, men_means, width, label='Men')
# ax.bar(labels, women_means, width, bottom=men_means,
       # label='Women')

ax.bar(x, lutasmem) #, width, label='LUTAsMem')
# ax.bar(labels, women_means, width, bottom=men_means,
       # label='Women')
ax.set_xticks(x)
ax.set_xticklabels(major_labels)

# ax.set_ylabel('Scores')
# ax.set_title('Scores by group and gender')
ax.legend()

plt.show()

# policies = []
# arch_labels = []
# for i in range(4):
    # policies.append([])
    # arch_labels.append([])

# for i in range(len(bvalues)):
    # elem = bvalues[i]
    # policies[i % 4].append(elem)
    # # arch_labels[i % 4].append(labels[i])


# categories = policies

# fig, ax = plt.subplots(1, 1, sharey=True, tight_layout=True, figsize=(12, 6))

# width = 1.0
# margin = 0.2
# inter_bar_margin = 0.05
# bar_width = (width - margin - inter_bar_margin*(len(categories) - 1))/4.0


# use_offset = len(categories) % 2 == 1
# x = np.arange(len(categories[0]))  # the label locations

# ax.grid(axis='y')
# bar_cycle = (cycler('edgecolor', 'k')*cycler('zorder', [10]))
# styles = bar_cycle()
# offset = bar_width / 2.0 if use_offset else 0.0

# # compute max position
# max_pos = -bar_width - offset - inter_bar_margin*3.0
# for i in range(len(categories) - 1):
    # max_pos += bar_width
    # max_pos += inter_bar_margin


# minor_labels = ['SODA', 'CWS', 'CWD32', 'CWDsmall']

# pos = max_pos
# rects = []
# for i in range(len(categories)):
    # rects.append(ax.bar(x - pos, categories[i], bar_width, **next(styles), label=minor_labels[i])) #arch_labels[i]))
    # pos -= bar_width
    # pos -= inter_bar_margin

# major_labels = ['Blur 1', 'Blur 16', 'Blur 32', 'SBL 1', 'SBL 16', 'SBL 32', 'CP 1', 'CP 16', 'CP 32', 'Jac 1', 'Jac 16', 'Jac 32']
# ax.set_xticks(x)
# ax.set_xticklabels(major_labels)

# ax.legend()

# plt.show()
# fig.savefig('clockwork_fifo_lut_utilizations.eps', format='eps')





