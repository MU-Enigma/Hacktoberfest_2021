day=0
sec=0
minutes=0
sec=int(input("Enter Seconds:"))
day = sec // (24 * 3600)
sec = sec % (24 * 3600)
hour = sec // 3600
sec %= 3600
minutes = sec // 60
sec %= 60
seconds = sec
print(day,"days", hour, "hours",minutes, "minutes",seconds, "seconds")