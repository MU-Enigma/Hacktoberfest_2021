count = int(input())
element = input().split()
answer = []
for i in range(count):
	if i%2 == 0 and int(element[i])%2 == 0:
		answer.append(element[i])

if len(answer) == 0:
	print("None")
else:
	print(" ".join(answer))