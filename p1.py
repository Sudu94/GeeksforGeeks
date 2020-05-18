start=3
gap=2
for i in range(4):
	for j in range(i+1):
		print(start-j)
	start=start+gap
	gap=gap+1
	print()
