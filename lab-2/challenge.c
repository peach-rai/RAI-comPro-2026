#include <stdio.h>
int main()
{
   int num1, num2,num3, sum,max,min;
   float average;
   printf("Enter numbers: ");
   scanf("%d", &num1);
   printf("Enter numbers: ");
   scanf("%d", &num2);
   printf("Enter numbers: ");
   scanf("%d",&num3);
   if (num1 > num2 && num1 > num3)
   {
      max = num1;
   }
   else if (num2 > num1 && num2 > num3)
   {
      max = num2;
   }
   else if (num3 > num1 && num3 > num2)
   {
      max = num3;
   }
   if (num1 < num2 && num1 < num3)
   {
      min = num1;
   }
   else if (num2 < num1 && num2 < num3)
   {
      min = num2;
   }
   else if (num3 < num1 && num3 < num2)
   {
      min = num3;
   }
   sum = num1 + num2 + num3;
   average = sum / 3;
   printf("Results:\n");
   printf(" Minimum: %d\n Maximum: %d\n Sum: %d\n Average: %0.2f\n", min, max, sum, average);
   return 0;
}
