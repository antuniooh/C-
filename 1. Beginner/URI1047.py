a, b, c,d = input().split(" ")

HI = int(a)
MI = int(b)
HF = int(c)
MF = int(d)

totalH = HF - HI

if totalH < 0:
    totalH = 24 + (HF - HI)

totalM = MF - MI

if totalM < 0:
    totalM = 60 + (MF - MI)
    totalH-=1

if HI == HF and MI == MF:
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(totalH,totalM))
