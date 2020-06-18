x,y = input().split(" ")

HI = int(x)
HF = int(y)
total = 0

if HI > HF:
    for a in range(HI + 1, 25):
        total += 1

        if a == 24:
            for b in range(1, HF+1):
                total += 1
elif HI < HF:
    total = HF - HI
else:
    total = 24
print("O JOGO DUROU %d HORA(S)" %total)
