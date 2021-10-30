t = int(input())
d = t // (24 * 60 * 60)
t = t % (24 * 60 * 60)
h = t // (60 * 60)
t = t % (60 * 60)
m = t // 60
t = t % 60
print('%d day, %d hr, %d min, %d sec' % (d, h, m, t))
