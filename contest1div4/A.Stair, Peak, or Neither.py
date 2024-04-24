entrada = int(input())
count = 0
lista = list()
while count != entrada:
    count = count + 1
    entrada2 = input()
    num1, num2, num3 = entrada2.split()
    if (num1 < num2 < num3):
        print("STAIR")
    elif (num1 < num2 > num3):
        print("PEAK")
    else:
        print("NONE")
    
    