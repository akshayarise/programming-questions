/**
sum of N natural numbers using dowhile loop.
*/

#include <stdio.h>

int main()
{
    int N,sum = 0,i=0;
    printf("enter the value of N");
    scanf("%d",&N);
    do{
        i++;
        sum = sum +i;
    }while(i < N);
    printf("\n%d",sum);
    return 0;
}

