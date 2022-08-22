#include<stdio.h>



int main ()
{
    int num1=0,num2=0,add=0,sub=0,mul=0,div=0,x=0;
    printf("Enter the First Number:");
    scanf("%d",&num1);
    printf("Enter the Second Number:");
    scanf("%d",&num2);

    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;


    printf("The addition is:%d\n",add);
    printf("The subtraction is:%d\n",sub);
    printf("The multiplication is:%d\n",mul);
    printf("The division is:%d\n",div);
    return 0;
}
