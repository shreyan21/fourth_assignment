#include<stdio.h>
// first 10 even natural numbers in reverse order
int main()
{
    int n=20;
    while(n>=2)
    {
        printf("%d ",n);
        n-=2;
    }
}