#include <stdio.h>
int main()
{
   char name[1];
   int ID, PROSCORE;
   float PHYSCORE,CALSCORE,GPA;
   
   printf("Enter your name: ");
   scanf ("%s", name);
   printf("Enter your ID: ");
   scanf("%d",&ID);
   printf("Enter your Programming score: ");
   scanf("%d",&PROSCORE);
   printf("Enter your Physics score: ");
   scanf("%f",&PHYSCORE);
   printf("Enter your Calculus score: ");
   scanf("%f",&CALSCORE);
   
   GPA = (PROSCORE + PHYSCORE + CALSCORE)/3;
   
   printf("Hi %s(%d)! Your GPA is %.2f", name, ID, GPA);

   return 0;
}
