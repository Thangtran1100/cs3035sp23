#   findElement( ) : This function accepts an input string and an index value as input 
#   parameters. It returns the element at the specified index value within the input string. For 
#   example: findElement(string,0) returns T where string = “Teststring”. 
def findElement(inputString, index):
    return inputString[index]



#   concatString( ): This function accepts two strings as input and concatenates them using the 
#   ‘+’ operator. The ‘+’ operator works as shown in the example below: 
 
#   >>> str1 = "A sample string" 
#      >>> str2 = "...concatenated with another sample string" 
#      >>> str1 + str2 
#      'A sample string...concatenated with another sample string’
def concatString(inputString1, inputString2):
    return inputString1 + inputString2



#   divideString( ): This function accepts ONLY an input string and returns the first half of the 
#   input string.
def divideString(inputString):
    index = int(len(inputString)/2)
    return inputString[0:index]



#   findSubString(): This function accepts two strings as input and check if the inputString2
#   is in the inputString1 or not.
def findSubstring(inputString1, inputString2):
    if inputString1.find(inputString2) == -1:
        return False
    
    return True



#---Test Run---

#   Declare variables
inputString1 = "This is a test string" 
inputString2 = "...it tests your functions" 
inputString3 = "functions" 


#   Print out the result
print(findElement(inputString1, 0)) 
print(concatString(inputString1, inputString2)) 
print(divideString(inputString1)) 
print(findSubstring(inputString2, inputString3)) 
print(findSubstring(inputString1, inputString3)) 