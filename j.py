import sys
data=  sys.stdin.read().splitlines()

lut = {0:2,
1:1,
2:0.5,
4:0.25,
8:1/8,
16:1/16}
total = 0
inp = [int(x) for x in data[1].split(' ')]
for i in inp:
	total += lut[i]
	
print(total) 	