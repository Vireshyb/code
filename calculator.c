#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter the choice");
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&choice);

    if(choice>4)
    {
        printf("select with in the range!\n");

    }
    else
    {
        printf("enter two integer number\n");
        scanf("%d%d",&a,&b);
    }

    switch(choice)
    {

        case 1:printf("%d +%d=%d\n",a,b,(a+b));
        break;

         case 2:printf("%d-%d=%d\n",a,b,(a-b));
        break;

         case 3:printf("%d*%d=%d\n",a,b,(a*b));
        break;

         case 4:printf("%d/%d=%d\n",a,b,(a/b));
        break;
    }
}
