#include <stdio.h>

int main() {
    // Write C code here 
   int age;
   char name[20];
   printf("Enetr your name...... :");
   scanf("%s",&name);
   printf("Enetr your age :");
   scanf("%d",&age);
   
   if(age>= 18){ printf("hi %s you are eligble for vote",name);}
   if(age<18)
   { printf("sorry %s you are not eligble for vote",name);}

    return 0;
}
