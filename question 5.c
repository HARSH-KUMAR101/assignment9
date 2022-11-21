#include<stdio.h>
#include<conio.h>
int main()
{
 int var;
    printf("enter a num: ");
    scanf("%d",&var);
       switch(var)
       {
         case 1:printf("good");
                break;
         case 2:printf("better");
                break;
         case 3:printf("best");
                break;
         default:printf("invalid");
       }
return 0;
}
