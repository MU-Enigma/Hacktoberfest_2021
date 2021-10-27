'''Kanishk Problem 4 solution
# Problem 4

Write a Program to convert seconds to day, hour, minutes and seconds.
'''
sec= int(input("Enter Seconds: "))
days=0
hours=0
minutes=0
while sec >= 60:
    if sec>=86400:
        days = sec//86400
        sec = sec- (days*86400)
    
    else:
        pass
    
    if sec >= 3600:
        hours = sec//3600
        sec = sec - (hours*3600)
    else:
        pass
    
    if sec >= 60:
        minutes = sec//60
        sec = sec - (minutes*60)
    else:
        pass
    break
    
print(days, "Day(s);", hours, "Hour(s);", minutes, "Min(s);", sec, "Second(s)")

    


