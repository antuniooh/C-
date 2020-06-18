valor = int(input(""))

nota100 = valor/100
nota50 = (valor%100)/50
nota20 = ((valor%100)%50)/20
nota10 = (((valor%100)%50)%20)/10
nota5 = ((((valor%100)%50)%20)%10)/5
nota2 = (((((valor%100)%50)%20)%10)%5)/2
nota1 = (((((valor%100)%50)%20)%10)%5)%2

print("%d" %valor)
print("%d nota(s) de R$ 100,00" %nota100)
print("%d nota(s) de R$ 50,00" %nota50)
print("%d nota(s) de R$ 20,00" %nota20)
print("%d nota(s) de R$ 10,00" %nota10)
print("%d nota(s) de R$ 5,00" %nota5)
print("%d nota(s) de R$ 2,00" %nota2)
print("%d nota(s) de R$ 1,00" %nota1)
