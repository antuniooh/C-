x,y = input().split(" ")

A= float(x)
B = float(y)

if A % B == 0 or B % A == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
