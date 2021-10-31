t=int(input())
d=int(t//86400)
h=int((t%86400)//3600)
m=int((t%3600)//60)
s=int(t%60)
print(d,"day",",",h,"hr",",",m,"min",",",s,"sec")

