while True:
    A,B = input("").split(" ")
    A = int(A)
    B = int(B)

    if A == 0 and B ==0:
        break
    else:
        C = A + B
        C = str(C)

        C = C.replace("0","")

        print(C)


