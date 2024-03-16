#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    float avg;
    printf("enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("avg of array elements %f",avg);

}

