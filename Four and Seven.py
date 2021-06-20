def sol(s): 
	a, b = 0, 0
	while (s > 0): 
		if (s % 7 == 0):
			b += 1
			s -= 7
		elif (s % 4 == 0): 
			a += 1
			s -= 4
		else: 
			a += 1
			s -= 4

	ans = "" 
	if (s < 0): 
		ans = "-1"
		return ans 
	
	
	ans += "4" * a 
	ans += "7" * b 
	
	return ans 
s = int(input())
print(sol(s))
