def printa(n):
  for i in range(2*n):
    for j in range(2*n):
      if (i//2) % 2 == (j//2) % 2:
        print("#", end="")
      else:
        print(".", end="")
    print()

entrada = int(input())
for inexistente in range(entrada):
  entradasmenores = int(input())
  printa(entradasmenores)
    