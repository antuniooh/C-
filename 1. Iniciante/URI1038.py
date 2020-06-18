a,b = input().split(" ")

cod = int(a)
qtd = int(b)

valor =0.0

if cod ==1:
    valor = 4.00 * qtd
elif cod ==2:
    valor = 4.50 * qtd
elif (cod ==3):
    valor = 5.00 * qtd
elif (cod ==4):
    valor = 2.00 * qtd
elif (cod ==5) :
    valor = 1.50 * qtd
else:
    print("valores inválidos")
print("Total: R$ %.2f"%valor)
