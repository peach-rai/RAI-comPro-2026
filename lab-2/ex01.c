#include <stdio.h>
int main()
{
   
   int unit;
   float point;
   char charater;
   printf("Please enter an interger value: ");
   scanf ("%d", &unit);
   printf("You entered: %d\n", unit);

   printf("Please enter a float value: ");
   scanf("%f",&point);
   printf("You entered: %0.1f\n", point);

   printf("Please enter a character: ");
   scanf(" %c", &charater);
   printf("You entered: %c\n", charater);

   
   return 0;
}
