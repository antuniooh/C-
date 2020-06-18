N = int(input(""))

for x in range(0, N):
    X = input("")
    tamanho = len(X)
    total = 0

    for a in range(0, tamanho):
        if X[a] == "1":
            total+=2
        elif X[a] == "2":
            total+=5
        elif X[a] == "3":
            total+=5
        elif X[a] == "4":
            total+=4
        elif X[a] == "5":
            total+=5
        elif X[a] == "6":
            total+=6
        elif X[a] == "7":
            total+=3
        elif X[a] == "8":
            total+=7
        elif X[a] == "9":
            total+=6
        elif X[a] == "0":
            total+=6
        else:
            print("Valor invalido")

    print("%d leds" %total)



