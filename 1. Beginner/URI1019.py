segundos = int(input(""))

horas = segundos/3600
minutos = (segundos%3600)/60
segundos = (segundos%60)

print("%d:%d:%d" %(horas,minutos,segundos))
