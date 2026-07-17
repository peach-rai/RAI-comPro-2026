#include <stdio.h>
int main()
{
   char name[10],gender,education[40];
   int age, weight;
   float height;
   
   printf("Enter your name: ");
   scanf ("%s", name);
   printf("Enter your age: ");
   scanf("%d",&age);
   printf("Enter your height:");
   scanf("%f",&height);
   printf("Enter your weight: ");
   scanf("%d", &weight);
   printf("Enter your gender: ");
   scanf(" %c", &gender);
   printf("Enter your Education Qualification: ");
   scanf(" %[^\n]", education);
   
   printf("name: %s\n Age: %d\n Gender: %c\n Height: %0.1f\n Weight: %d\n Education: %s\n"
    ,name,age,gender,height,weight,education);

   return 0;
}
