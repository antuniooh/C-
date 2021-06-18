salario = float(input(""))
x =0

if salario <= 2000.0:
    print("Isento")
elif salario <= 3000.0:
    x = (salario - 2000.0)*0.08
    print("R$ %.2f" %x)
elif salario <= 4500.0:
    x = (salario - 3000.0)*0.18 + (1000*0.08)
    print("R$ %.2f" %x)
else:
    x = (salario - 4500)*0.28 + (1500*0.18) + (1000*0.08)
    print("R$ %.2f" %x)
