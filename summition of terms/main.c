#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum;
    printf("Enter your number : ");
    scanf("%d", &num);

    while (num >=1 ) {
        sum = sum + num;

        num--;
    }

    printf("Your answer is %d ",sum);

    return 0;
}
