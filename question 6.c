#include<stdio.h>
#include<conio.h>
int main()
{
 int year;
     printf("enter year to check leap year:");
     scanf("%d",&year);
    switch(year%100==0)
    {
     case 0:switch(year%4==0)
             {
                case 0:printf("it is not a leap year");
                       break;
                case 1:printf("it is a leap year");
                       break;
             }
                break;
     case 1: switch(year%400==0)
             {
              case 0:printf("it is not a leap year");
                     break;
              case 1:printf("it is a leap year");
                     break;
             }
    }
 return 0;
}
