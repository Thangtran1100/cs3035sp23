#include <stdio.h>

int main() {
  printf("Enter your number: ");
  
  int userInput;
  scanf("%d", &userInput);

  if(userInput % 2 == 0)
  {
    printf("This is even number");
  }
  else
  {
    printf("This is odd number");
  }

  return 0;
}