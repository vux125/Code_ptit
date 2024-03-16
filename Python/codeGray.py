def sinh(a,n,b):
	k = 0
	for i in range(n-1,-1,-1):
		if a[i] == 0: 
			k = i
			break
	for i in range(k,n):
		if a[i] == 0:
			a[i]=1
		else :
			a[i] = 0
	for i in range(0,n):
		b[i] = a[i]		
	for i in range(n-2,-1,-1):
		if b[i] == 1:
			b[i+1] = 1 - b[i+1]
	check = 1
	for i in range(0,n):
		if a[i] == 0:
			check = 0
			break
	if check ==  0 :
		return 1
	else :
		return 0

def inputt(b,n):
	for i in range (0,n):
		print(b[i],end="")
	print(end = " ")

value = int(input())
while value > 0 :
	n = int(input())
	a = []
	b = []
	for i in range(0, n):
		a.append(0)
		b.append(0)
	check = 1
	while check == 1:
		inputt(b,n)
		# inputt(a,n)
		check = sinh(a,n,b)
	inputt(b,n)
	print()
	value = value-1

