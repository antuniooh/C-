a,b,c = input().split(" ")

A = int(a)
B = int(b)
C = int(c)

MAIORAB = (A + B + abs(A-B))/2
MAIOR = (MAIORAB + C + abs(MAIORAB - C))/2

print("%d eh o maior" %MAIOR)
