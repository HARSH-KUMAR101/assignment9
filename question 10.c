/*C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a,b,c,D;
  float x,y;
      printf("enter coefficient of x^2: ");
      scanf("%d",&a);
      printf("enter coefficient of x: ");
      scanf("%d",&b);
      printf("enter constant term: ");
      scanf("%d",&c);
      D=b*b-4*a*c;;

        switch(0)
        {
          case 0: if(D<0){
                    printf("both roots are imaginary");
                       break;}
          case 1:if(D>0){
                    printf("roots are real and distinct\n");
                    x=(-b+sqrt(D))/(2*a);
                    y=(-b-sqrt(D))/(2*a);
                    printf("\nroots are %.2f and %.2f",x,y);
                     break;
                }
          default:printf("both roots are equal!\n");
                    x=-b/(2.0*a);
                    printf("roots is %.2f",x);

        }
}
