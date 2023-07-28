#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if ((n%5==0 && n%11==0))
    {
        printf("number divisibe by 5 and 11 both");
    }
    else{
        printf("number not divisible by 5 and 11");
    }
}
