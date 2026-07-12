#include <stdio.h>
void Addition(float a,float b)
{
    float c=a+b;
    printf("the sum of %.2f and %.2f is %.2f",a,b,c);
    return;
}
void Subtraction(float a,float b)
{
    float c=a-b;
    printf("the removal of %.2f from %.2f is %.2f",b,a,c);
    return;
}
void Multiply(float a,float b)
{
    float c=a*b;
    printf("the multiplication of %.2f from %.2f is %.2f",a,b,c);
    return;
}
void divide(float a,float b)
{  if (b!=0)
     {
           float c=a/b;
           printf("the division of %.2f and %.2f is %.4f",a,b,c);

     }
    else
        printf("Zero division is not allowed");
}
int main()
{
   float a,b;
   char d;
   printf("Calculator is ready to perform \n");
   printf("Number 1:");
   scanf("%f", &a);
   printf("Number 2:");
   scanf("%f", &b);
   printf("Enter the operator(+,-,*,/):");
   scanf(" %c", &d);
   switch(d)
   {
    case '+':
      Addition(a,b);
      break;
    case '-':
      Subtraction(a,b);
      break;
    case '*':
      Multiply(a,b);
      break;
    case '/':
      divide(a,b);
      break;
    default:
      printf("Error: Invalid operator entered.");
   }
   return 0;
}