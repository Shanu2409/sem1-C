#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1 = 0 , num2 = 1, num3,term;
    printf("Enter the number of term : ");
    scanf("%d",&term);
    printf(" \n%d %d",num1,num2);

    for (int i = 2; i < term ; i++) { // here the value of i is 2, because we have already printed 2 values so no need to print it again.
        num3 = num1 + num2;
        printf(" %d ",num3);
        num1 = num2;
        num2 = num3;

    }
    return 0;
}


