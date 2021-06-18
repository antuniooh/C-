x, y,z = input().split(" ")

A= float(x)
B = float(y)
C = float(z)

#não é triguanulo
if A>=B+C or B>=C+A or C>=A+B:
    area = (((A + B) * C) / 2)
    print("Area = %.1f" %area)
else:
    perimetro = ((A) + (B) + (C))
    print("Perimetro = %.1f" %perimetro)
