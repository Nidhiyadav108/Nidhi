#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter 2 nos.");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d \n b=%d",a,b);
}
