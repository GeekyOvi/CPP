
#include<stdio.h>

int fact (int n)
{
    if (n==1)
        return 1;
    else

        return  n* fact(n-1);
}

int main()

{
    int a ,fact;
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;

}
