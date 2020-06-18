x,y,z = input().split(" ")

A= float(x)
B = float(y)
C = float(z)

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

#tipos de triangulos
if c >= (b+a) :
    print("NAO FORMA TRIANGULO")
else:
    if (c*c) == (b*b) + (a*a):
        print("TRIANGULO RETANGULO")
    elif (c*c) > (b*b) + (a*a):
        print("TRIANGULO OBTUSANGULO")
    elif (c*c) < (b*b) + (a*a):
        print("TRIANGULO ACUTANGULO")

# em relação aos lados
if (a == b and b == c) or a == c and c == b:
    print("TRIANGULO EQUILATERO")
elif (a == b) or (b == c) or (c == a):
        print("TRIANGULO ISOSCELES")
