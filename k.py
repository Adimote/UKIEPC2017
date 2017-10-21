import sys

data = sys.stdin.read().splitlines()

N = int(data[0])
cranes = [tuple([int(x) for x in x.split(" ")][::-1]+[i]) for i, x in enumerate(data[1:N+1])]
M = int(data[N+1])
buildings = [[int(x), i, []] for i, x in enumerate(data[N+2].split(" "))]

found = 0

cranes = sorted(cranes)
buildings = sorted(buildings, reverse = True)

while found < M and len(cranes) > 0:
	for building in buildings:
		if building[0] <= 0:
			continue
		
		remove = -1
		
		for index, crane in enumerate(cranes):
			if crane[0] >= building[0]:
				building[2].append(crane)
				building[0] = crane[1]
				remove = index
				
				if building[0] <= 0:
					found += 1
				
				break
		
		if remove >= 0:
			cranes.pop(remove)

if found == M:
	unsorted = [0] * len(buildings)
	
	for building in buildings:
		unsorted[building[1]] = building[2]
	
	for u in unsorted:
		print(" ".join([str(x[2]+1) for x in u[::-1]]))
else:
	print("impossible")
