salario = float(input(""))
reajuste = 0.0
porcentagem = 0

#entre 0 - 400.00
if salario >= 0.00 and salario <= 400.00:
    reajuste = salario * 0.15
    porcentagem = 15
#entre 400.01 - 800.00
elif salario > 400.00 and salario <= 800.00:
    reajuste = salario * 0.12
    porcentagem = 12
#entre 800.01 - 1200.00
elif salario > 800.00 and salario <= 1200.00:
    reajuste = salario * 0.10
    porcentagem = 10
#entre 1200.01 - 2000.00
elif salario > 1200.00 and salario <= 2000.00:
    reajuste = salario * 0.07
    porcentagem = 7
#acima 2000.00
else:
    reajuste = salario * 0.04
    porcentagem = 4

novosal = (salario + reajuste)

print("Novo salario: %.2f" %novosal)
print("Reajuste ganho: %.2f" %reajuste)
print("Em percentual: " + str(porcentagem) + " %")
