a,b,c,d = input().split(" ")

n1 = float(a)
n2 = float(b)
n3 = float(c)
n4 = float(d)

media = (((n1 * 2) + (n2 *3) + (n3 *4) + (n4 * 1))/10);

if media >= 7.0:
    print("Media: %.1f" %media)
    print("Aluno aprovado.")
elif media < 5.0:
    print("Media: %.1f" %media)
    print("Aluno reprovado.")
elif media >= 5.0 and media < 7.0:
    exame = float(input(""))
    nova = ((exame + media)/2)

    print("Media: %.1f" %media)
    print("Aluno em exame.")
    print("Nota do exame: %.1f" %exame)

    if nova >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    
    print("Media final: %.1f" %nova)
