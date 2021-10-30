# Problem 4

T = float(input(""))
day = T // (24 * 3600)
T = T % (24 * 3600)
hr = T // 3600
T %= 3600
min = T // 60
T%= 60
sec = T
print(" %d day,%d hr , %d min ,%d sec" % (day, hr, min, sec))
