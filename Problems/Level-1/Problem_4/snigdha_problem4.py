total_secs= int(input(""))

secs = (total_secs % 60);
mins = (total_secs % 3600) / 60;
hrs = (total_secs % 86400) / 3600;
days = (total_secs % (86400 * 30)) / 86400;
print(int(days),"day,",int(hrs),"hr,",int(mins),"min,",int(secs),"sec")