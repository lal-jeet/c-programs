#include <stdio.h>

int main() {
    // Write C code here
  char num;
  printf("Enter number or a charecter : ");
  scanf("%c",&num);
  
  if(num >= 'A' && num <= 'z')
  { printf("Alphabet");}
  
  else if(num >= '0' && num <= '9')
  {printf("number");}
  
  else
  printf("special charecter");

    return 0;
}
