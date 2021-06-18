s = input("")

#tirar os espaços
#s = s.replace(" ","")

tamanho = len(s)

if tamanho <= 140:
    print("TWEET")
else:
    print("MUTE")

