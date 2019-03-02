/**
 sum of n natual numbers using while loop.
*/
#include <stdio.h>

int main()
{
    int N,sum = 0,i=1;
    printf("enter the value of N");
    scanf("%d",&N);
    while(i <= N){
     sum = sum + i;
     i++;    
    }
    printf("\n%d",sum);
    return 0;
}

