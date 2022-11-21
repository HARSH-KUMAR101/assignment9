/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int choice;
 int s1,s2,s3;
   while(choice<4)
   {
       printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
       printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
       printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
       printf("\n4. Exit");
         printf("\nenter your choice b/w 1 to 4 to perform selected task:");
         scanf("%d",&choice);
         if(choice>=1 && choice<=4){
            switch(choice)
            {
              case 1:printf("enter three sides of triangle:\n");
                      scanf("%d%d%d",&s1,&s2,&s3);
                     if(s1==s2 || s2==s3 || s3==s1){
                        printf("this is an isosceles triangle\n");
                               break;}
                     else{
                        printf("this is not an isosceles triangle\n");
                               break;}
              case 2:printf("enter hypotenuse of triangle:");
                      scanf("%d",&s1);
                     printf("enter base of triangle:");
                      scanf("%d",&s2);
                     printf("enter perpendicular of triangle:");
                      scanf("%d",&s3);
                       if((s1*s1)==(s2*s2)+(s3*s3)){
                          printf("this is an right angle triangle\n");
                                 break;}
                       else{
                          printf("this is not an right angle triangle\n");
                                 break;}

              case 3:printf("enter three sides of triangle:\n");
                      scanf("%d%d%d",&s1,&s2,&s3);
                       if(s1==s2 && s2==s3){
                         printf("this is an equilateral triangle!\n");
                                break;}
                       else{
                         printf("this is not an equilateral triangle!\n");
                                break;}
            }}
            else{
                printf("\nenter a valid number!\n");
                       break;}
   }
 return 0;
}
