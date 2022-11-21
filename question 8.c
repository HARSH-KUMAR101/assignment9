/*Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
      printf("enter a num:");
      scanf("%d",&num);
         switch(0)
         {
            case 0:if(num<0)
                   {
                     num=num+(num*(-2));
                     printf("your converted positive num is %d",num);
                       break;
                   }
            case 1:if(num>0)
                   {
                     num=num+(num*(-2));
                     printf("your converted negative num is %d",num);
                       break;
                   }
             default :printf("your num is not positive or nor negative!");
         }
 return 0;
}
