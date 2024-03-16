#include<stdio.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=rem+(sum*10);
        num=num/10;

    }
    if(temp==sum)
        printf("palindrome");
    else
        printf("not palindrome");
}
