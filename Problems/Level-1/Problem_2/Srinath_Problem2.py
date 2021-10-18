n = input()
a = input().split()
l = [a[i] for i in range(len(a)) if i % 2 == 0 and int(a[i]) % 2 == 0]
if len(l) == 0:
	print('None')
else:
	for i in l:
		print(i, end=' ')
