def evenOdd(userInput):
    if userInput % 2 == 0:
        print("This is even number")
    else:
        print("This is odd number")
        
        
userInput = int(input("Enter number you want to check: "))

evenOdd(userInput)