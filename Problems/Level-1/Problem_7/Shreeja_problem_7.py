t = int(input())
for i in range(t):
	s = input()
	print(''.join(sorted(set(s), key=s.index)))

