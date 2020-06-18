cod,qtd,valor = input().split(" ")

cod1 = int(cod)
qtd1 = int(qtd)
valor1 = float(valor)

cod,qtd,valor = input().split(" ")

cod2 = int(cod)
qtd2 = int(qtd)
valor2 = float(valor)

x = (qtd2*valor2) + (qtd1*valor1)

print("VALOR A PAGAR: R$ %.2f" %x)
