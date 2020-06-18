while True:
  try:
    s = input('')
    M=0
    m=0
    n=0
    C=1
    for x in s:
        c = ord(x)
        if c >=65 and c <=90:
            M=1#tem maiuscula
        if c >=97 and c <=122:
            m=1#tem minusuca
        if c >=48 and c <=57:
            n=1#tem numero
        if c >=0 and c <=47 or c >=58 and c <= 64 or c >=123 and c <=255:
            C=0#tem caractere especial
    #tamanho ideal de caracteres
    if len(s) >= 6 and len(s) <= 32 and M==1 and m==1 and n==1 and C==1:
        print("Senha valida.")
    else:
        print("Senha invalida.")
  except EOFError:
    break


        
                   
