/*Write a program which takes the month number as an input and display number of
days in that month.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
   printf("enter a num:");
   scanf("%d",&num);
      switch(num)
      {
        case 1: printf("THIS MONTH IS JANUARY OF 31 DAYS");
                break;
        case 2: printf("THIS MONTH IS FEBRUARY OF 28/29 DAYS");
                break;
        case 3: printf("THIS MONTH IS MARCH OF 31 DAYS");
                break;
        case 4: printf("THIS MONTH IS APRIL OF 30 DAYS");
                break;
        case 5: printf("THIS MONTH IS MAY OF 31 DAYS");
                break;
        case 6: printf("THIS MONTH IS JUNE OF 30 DAYS");
                break;
        case 7: printf("THIS MONTH IS JULY OF 31 DAYS");
                break;
        case 8: printf("THIS MONTH IS AUGUST OF 31 DAYS");
                break;
        case 9: printf("THIS MONTH IS SEPTEMBER OF 30 DAYS");
                break;
        case 10: printf("THIS MONTH IS OCTOBER OF 31 DAYS");
                break;
        case 11: printf("THIS MONTH IS NOVEMBER OF 30 DAYS");
                break;
        case 12: printf("THIS MONTH IS DECEMBER OF 31 DAYS");
                break;
        default : printf("invalid number");
      }
 return 0;
}
