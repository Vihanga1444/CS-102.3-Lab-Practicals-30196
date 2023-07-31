#include<stdio.h>
float quotient(int a,int b)
{
float quotient=(float)a/b;
return quotient;
}
int main()
{
    int number1,number2;
    printf("enter two numbers");
    scanf("%d %d",&number1,&number2);
    printf("quotient is %.2f\n",(float)quotient(number1,number2));
}
