#include<stdio.h>
#include<conio.h>
int main()
{
  float unit,total;
     printf("enter unit as electricity consumption:");
     scanf("%f",&unit);
        switch(1)
        {
          case 1:if(unit<=50)
                    {
                     total=unit*0.5;
                       break;
                    }
          case 2:if(unit<=150)
                    {
                     total=(50*0.5)+((unit-50)*0.75);
                       break;
                    }
          case 3:if(unit<=250)
                    {
                     total=(50*0.5)+(100*0.75)+((unit-150)*1.2);
                       break;
                    }
          case 4:if(unit>250)
                  {
                     total=(50*0.5)+(100*0.75)+(100*1.2)+((unit-250)*1.50);
                       break;
                  }
        }
                total=total+(total*20/100);
         printf("total amount is %.2f",total);
 return 0;
}
