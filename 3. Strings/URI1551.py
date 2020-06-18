alfa = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
total = 0

#entrada de valores
n = int(input(""))
for x in range(0,n):
    
    s = input("")
    
    #tirar os espaços e transformar em uma única str
    s = s.replace(","," ")
    s = s.replace(" ","")

    for x in alfa:
        if x in s:
            total+=1

    if total == 26:
        print("frase completa")
    elif total >= 13 and total < 26:
        print("frase quase completa")
    else:
        print("frase mal elaborada")

    total = 0

