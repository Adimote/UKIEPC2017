import sys
data=  sys.stdin.read().splitlines()

p = [(int(x),i) for i,x in enumerate(data[1].split(' '))]
c = [int(x) for x in data[2].split(' ')]
s = [int(x) for x in data[3].split(' ')]
b = zip(s,c,range(len(s)))

p = sorted(p, reverse=True)
b = sorted(b)

results = [0] * len(p)
for i,(pe,pi) in enumerate(p):
	found = False
	for j,bu in enumerate(b):
		if bu:
			if bu[1] >= pe:
				results[pi] = bu[2]+1
				found = True
				b[j] = None
				break
	if not found:
		print("impossible")
		exit()
print(" ".join([str(x) for x in results]))
