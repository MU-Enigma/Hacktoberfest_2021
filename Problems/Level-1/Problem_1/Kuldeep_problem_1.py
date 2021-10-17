a = int(input())
for i in range(a):
	b = input()
	b = "".join(reversed(b))
	print(b.swapcase())
