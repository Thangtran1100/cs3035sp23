def __conversion__(lowerInput):
    fahrenheit = lowerInput * 9/5 + 32
    return fahrenheit

lowerInput = int(input("Please enter the lower bound: "))
upperInput = int(input("Please enter the upper bound: "))

print("Celcius    Fahrenheit")
for lowerInput in range(lowerInput,upperInput+1):
    # fahrenheit = lowerInput * 9/5 + 32
    fahrenheit = __conversion__(lowerInput)
    print(f"{lowerInput:<10} {fahrenheit:<0.1f}")
    lowerInput+=1
    