N = int(input(""))

for x in range(0, N):
    if N > 0:
        s = input("")

        s = s.split() #separar

        if s[0] == s[1]:
            print("empate")
        else:
            if s[0] == "tesoura":
                if s[1] == "papel" or s[1] =="lagarto":
                    print("rajesh")
                elif s[1] == "pedra" or s[1]=="spock":
                    print("sheldon")
            elif s[0] == "papel":
                if s[1] == "pedra" or s[1] =="spock":
                    print("rajesh")
                elif s[1] == "tesoura" or s[1]=="lagarto":
                    print("sheldon")
            elif s[0] == "pedra":
                if s[1] == "lagarto" or s[1] =="tesoura":
                    print("rajesh")
                elif s[1] == "spock" or s[1]=="papel":
                    print("sheldon")
            elif s[0] == "lagarto":
                if s[1] == "spock" or s[1] =="papel":
                    print("rajesh")
                elif s[1] == "pedra" or s[1]=="tesoura":
                    print("sheldon")
            elif s[0] == "spock":
                if s[1] == "tesoura" or s[1] =="pedra":
                    print("rajesh")
                elif s[1] == "lagarto" or s[1]=="papel":
                    print("sheldon")
            else:
                print("invalido")


