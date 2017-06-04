import sys
import itertools

n = int(raw_input().strip())

consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z']
vowels = ['a', 'e', 'i', 'o', 'u']


test4 = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z', 'a', 'e', 'i', 'o', 'u']
answer = set(itertools.product(test4, repeat=n))

for letters in answer:
    for j in xrange(len(letters)):
        flag = 1
        if j != len(letters) - 1:
            if letters[j] in vowels and letters[j+1] in vowels:
                flag = 0
                break
            if letters[j] in consonants and letters[j+1] in consonants:
                flag = 0
                break

    if flag:
        for j in letters:
            sys.stdout.write(j)
        print ""