num = 0
positivo = 0

for x in range (0,6):
    num = float(input(""))

    if num > 0:
        positivo += 1
    else:
        positivo +=0
        
print("%d valores positivos" %positivo)
