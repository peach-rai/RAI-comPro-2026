#include <stdio.h>
int main()
{
   
   int time, calculate, remender;

   printf("Enter total minutes: ");
   scanf("%d",&time);
   calculate = time/60;
   remender = time%60;
   printf("%d minutes is %d hours and %d minutes", time, calculate, remender);
   return 0;
}
