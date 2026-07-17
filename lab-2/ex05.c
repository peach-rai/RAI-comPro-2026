#include <stdio.h>
int main()
{
   char name[100],university[100];
   int age;
   float height;
   
   printf("Enter your full name:");
   scanf ("%[^\n]", name);
   printf("Enter your age:");
   scanf("%d",&age);
   printf("Enter your height:");
   scanf("%f",&height);
   printf("Enter your university:");
   scanf(" %s", university);
   printf("Hi ! Everyone. This is %s from %s. I am %d years old and my height is\n %0.1f cm tall", name,university, age, height);
}
