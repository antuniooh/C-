x, y,z = input().split(" ")

A= int(x)
B = int(y)
C = int(z)

a = A
b = B
c = C

if a > b:
    temp = a
    a = b
    b = temp
if b > c:
    temp = b
    b = c
    c = temp

if a > b:
    temp = a
    a = b
    b = temp

print(a)
print(b)
print(c)
print("")
print(A)
print(B)
print(C)
