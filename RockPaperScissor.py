import string
import random
countA=0
countB=0
m = 'Rock'
n = 'Paper'
o = 'Scissor'
choice = ['Rock','Paper','Scissor']
a = random.choice(choice)
b = random.choice(choice)
print(a)
print(b)
if a and b == m:
    pass
if a and b == n:
    pass
if a and b == o:
    pass
if a == m and b == n:
    print("Person B : Gotcha!")
    countB += 1
if a == m and b == o:
    print("Person A : Gotcha!!")
    countA += 1
if a == n and b == o:
    print("Person B : Gotcha!!")
    countB += 1
if a == n and b == m:
    print("Person A : Gotcha!!")
    countA += 1
if a == o and b == m:
    print("Person A : Gotcha!!")
    countA += 1
if a == o and b == n:
    print("Person B : Gotcha!!")
    countB += 1
print("\nPerson A got",countA)
print("Person B got",countB)

