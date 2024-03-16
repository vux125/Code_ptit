value = int(input())
while value > 0 :
	n = input()
	for i in range(len(n)-1):
		if n[i] == '1':
			if n[i+1] == '1':
				n[i+1].append('0')
			else :
				n[i+1].append('1')
	print(n)