import sys
import random

data = [line.split(" ") for line in sys.stdin.read().splitlines()]

Apos = [int(x) for x in data[0][0:3]]
Aend = [int(x) for x in data[0][3:6]]
Bpos = [int(x) for x in data[1][0:3]]
Bend = [int(x) for x in data[1][3:6]]

print("(", " ".join([str(x) for x in Apos]), ") (", " ".join([str(x) for x in Bpos]), ")", sep="")

while Apos != Aend or Bpos != Bend:
	Atar = Apos[:]
	Btar = Bpos[:]
	
	if Apos[0] != Aend[0]:
		Atar[0] += min(1, max(-1, Aend[0] - Apos[0]))
	elif Apos[1] != Aend[1]:
		Atar[1] += min(1, max(-1, Aend[1] - Apos[1]))
	elif Apos[2] != Aend[2]:
		Atar[2] += min(1, max(-1, Aend[2] - Apos[2]))
		
	if Bpos[1] != Bend[1]:
		Btar[1] += min(1, max(-1, Bend[1] - Bpos[1]))
	elif Bpos[2] != Bend[2]:
		Btar[2] += min(1, max(-1, Bend[2] - Bpos[2]))
	elif Bpos[0] != Bend[0]:
		Btar[0] += min(1, max(-1, Bend[0] - Bpos[0]))
	
	while Atar == Btar or (Atar == Bpos and Btar == Apos):
		if Atar == Btar:
				Btar = Bpos[:]
		
		if Atar == Bpos and Btar == Apos:
			rand = random.random()
			Atar = Apos[:]
			Btar = Bpos[:]
			
			if rand < 0.33:
				Atar[0] += 1
				Btar[0] -= 1
			elif rand > 0.66:
				Atar[1] += 1
				Btar[1] -= 1
			else:
				Atar[2] += 1
				Btar[2] -= 1
		
	Apos = Atar[:]
	Bpos = Btar[:]
	print("(", Apos[0], " ", Apos[1], " ", Apos[2], ") (", Bpos[0], " ", Bpos[1], " ", Bpos[2], ")", sep="")
