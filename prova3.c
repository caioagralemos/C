litros = float(input())
tipo = input()

if tipo == 'A':
    if litros <= 20:
        print("R$",'{:.2f}'.format((litros*1.9)*0.97))
    elif litros > 20:
        print("R$",'{:.2f}'.format((litros*1.9)*0.95))
elif tipo == 'G':
    if litros <= 20:
        print("R$",'{:.2f}'.format((litros*2.5)*0.96))
    elif litros > 20:
        print("R$",'{:.2f}'.format((litros*2.5)*0.94))
elif tipo == 'D':
    if litros <= 25:
        print("R$",'{:.2f}'.format(litros*1.66))
    elif litros > 25:
        print("R$",'{:.2f}'.format((litros*1.66)*0.96))