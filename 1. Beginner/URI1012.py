a,b,c = input().split(" ")

A = float(a)
B = float(b)
C = float(c)

triangulo = (A*C)/2
circulo = (C*C)*3.14159
trapezio = ((A + B)* C)/2
quadrado = B*B
retangulo = A*B

print("TRIANGULO: %.3f" %triangulo)
print("CIRCULO: %.3f" %circulo)
print("TRAPEZIO: %.3f" %trapezio)
print("QUADRADO: %.3f" %quadrado)
print("RETANGULO: %.3f" %retangulo)
