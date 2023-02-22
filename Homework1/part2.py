# Add function
def __add__(num1, num2, num3):
    return num1 + num2 + num3

# Subtract function
def __sub__(num1, num2, num3):
    return num3 - num2 - num1

# Division function
def __div__(num1, num2):
    if num2 == 0:
        return "ZeroDivisionError!!"
        
    return num1 / num2

# Multiply function
def __mult__(num1, num2):
    return num1*num2


# Inform user to enter values need to calculate
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))


# Print the result of the expression
print(__div__(__mult__(__add__(num1,num2,num3),num1), __mult__(__sub__(num1,num2,num3),num2)))