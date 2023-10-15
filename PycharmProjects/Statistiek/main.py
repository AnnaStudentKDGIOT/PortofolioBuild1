import statistics


def mean(data):
    return statistics.mean(myList)


def median(data):
    return statistics.median(data)


def std(data):
    statistics.stdev(data)


myList = [1, 25, 23, 85, 45]

print(mean(myList))
print(median(myList))
print(std(myList))

