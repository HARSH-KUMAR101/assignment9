/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int n,a,b;
  float x,y;

     while(n<5)
     {    printf("SELECT NUM AS NUM FOR OPERATION TO BE PERFORMED\n");
          printf("1 addition\n");
          printf("2 subtraction\n");
          printf("3 multiplication\n");
          printf("4 division\n");
          printf("5 exit\n");
            printf("enter your choice:");
            scanf("%d",&n);

         switch(n)
         {
           case 1: printf("fill the data for addition:\n");
                   printf("enter two num");
                   scanf("%d%d",&a,&b);
                   printf("addition of %d and %d is %d\n",a,b,a+b);
                   break;

           case 2: printf("fill the data for subtraction:\n");
                   printf("enter two num:");
                   scanf("%d%d",&a,&b);
                   printf("Ans is %d\n ",a-b);
                   break;

           case 3: printf("fill the data for multiplication:\n");
                   printf("enter two num:");
                   scanf("%d%d",&a,&b);
                   printf("Ans is %d\n",a*b);
                   break;

           case 4: printf("fill the data for division:");
                   printf("enter two num:");
                   scanf("%f%f",&x,&y);
                   printf("Ans is %.2f\n",x/y);
                   break;

         }
     }
return 0;
}
