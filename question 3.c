/*Write a program which takes the day number of a week and displays a unique
greeting message for the day.*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
     printf("enter day as a num and get the greetings for the day:");
     scanf("%d",&n);
        switch(n)
        {
       case 1: printf("\nThis is your monday morning reminder that you can handle whatever this week throws at you!\n");
               break;
       case 2: printf("\nAppreciate all you have this Tuesday and you will find you may have a great day!\n");
               break;
       case 3: printf("\nWednesday is the half way to the weekend!\n");
               break;
       case 4: printf("\nThursday is how friday says \"\"hang on,you are almost there!\"\"\n");
               break;
       case 5: printf("\nMay today be the fridayest friday that ever existed!\n");
               break;
       case 6: printf("\nEnjoy the day with your loved ones!\n");
               break;
       case 7: printf("\nHappy sunday enjoy your day at fullest!\n");
               break;
       default :
               printf("\ninvalid input\n");

        }
  return 0;
}
