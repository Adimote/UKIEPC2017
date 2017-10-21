import sys
data=  sys.stdin.read().splitlines()

word = data[0]

s = sorted(word)

for i in range(len(word)):
	if word[i] == s[i]:
		continue
	for j in range(i+1,len(word)):
		if s[j] == word[i]:
			# need to swap
			if s[i] < s[j]:
				print(j+1,i+1)
			else:
				print(i+1,j+1)
			s[i], s[j] = s[j], s[i]
			break
			

#print(s)