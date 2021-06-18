a,b = input().split(" ")

x = float(a)
y = float(b)

if x > 0.00 and y > 0.00:
    print("Q1")
elif x > 0.00 and y < 0.00:
    print("Q4")
elif x < 0.00 and y > 0.00:
    print("Q2")
elif x < 0.00 and y < 0.00:
    print("Q3")
elif x == 0.00 and y ==0.00:
    print("Origem")
elif x == 0.00 and y > 0.0:
    print("Eixo Y")
elif x == 0.00 and y < 0.00:
    print("Eixo Y")
elif x > 0.00 and y == 0.00:
    print("Eixo X")
elif x < 0.00 and y == 0.00:
    print("Eixo X")

