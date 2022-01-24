#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fac=1;
    printf("Enter your number : ");
    scanf("%d", &num);

    while (num >=1 ) {
        fac = fac * num;
        num--;
    }

    printf("Your answer is %d ",fac);

    return 0;
}
