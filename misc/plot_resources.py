import matplotlib
import matplotlib.pyplot as plt
import numpy as np

ylabels = ['LUT', 'FF', 'BRAM', 'DSP', 'Execution Time (msec)']
labels = ['MP', 'GP', 'SEF']
men_means = [20, 34, 30]
women_means = [25, 32, 34]

x = np.arange(len(labels))  # the label locations
width = 0.35  # the width of the bars

fig = plt.figure()
# fig, ax = plt.subplots()

for i in range(0, 5):
    ax = fig.add_subplot(5, 1, i + 1)
    rects1 = ax.bar(x - width/2, men_means, width, label='Opt')
    rects2 = ax.bar(x + width/2, women_means, width, label='No-opt')

    # Add some text for labels, title and custom x-axis tick labels, etc.
    ax.set_ylabel(ylabels[i])
    # ax.set_title('Scores by group and gender')
    ax.set_xticks(x)
    ax.set_xticklabels(labels)
    # ax.legend()
# fig.legend()

# def autolabel(rects):
    # """Attach a text label above each bar in *rects*, displaying its height."""
    # for rect in rects:
        # height = rect.get_height()
        # ax.annotate('{}'.format(height),
                    # xy=(rect.get_x() + rect.get_width() / 2, height),
                    # xytext=(0, 3),  # 3 points vertical offset
                    # textcoords="offset points",
                    # ha='center', va='bottom')


# autolabel(rects1)
# autolabel(rects2)

fig.tight_layout()

plt.show()
