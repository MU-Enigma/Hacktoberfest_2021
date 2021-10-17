n : int = int(input())
for i in range(n):
	s = input()
	flag = True
	for i in range(1,len(s)):
		if s[i] < s[i-1]:
			flag = False
			break
	if flag is False:
		print("false")
	else:
		print("true")


