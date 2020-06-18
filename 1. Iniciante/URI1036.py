from math import sqrt

a,b,c = input().split(" ")

A = float(a)
B = float(b)
C = float(c)

delta = ((B*B) - 4*(A)*(C))


if A  == 0 or delta < 0:
    print("Impossivel calcular")
else:
    if delta > 0:
        R1 = (-B + (sqrt(delta))) / (2 * A)
        R2 = (-B - (sqrt(delta))) / (2 * A)

        print("R1 = %.5f" %R1)
        print("R2 = %.5f" %R2)
