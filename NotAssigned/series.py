import time

result = 1
factorials = [0, 1]

def poly(num):
    if len(factorials) - 1 == num:
        return factorials[num]
    else: 
        factorials.append(num * poly(num-1))
        return factorials[num]

limit = 1000
x = int(input("Point to calculate e^x for: "))

for expo in range(1, (limit + 1)):
    result2 = result + (pow(x, expo) / (poly(expo)))

    if result2 == result:
        break
    else:
        result = result2
        print("Value at ", expo, " = ", result)
    time.sleep(0.1)
    