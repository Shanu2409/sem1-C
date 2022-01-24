#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    for(int i = 0; i <= 100 ; i++) {
        sum = sum + i;
    }
    printf("answer is %d",sum);
    return 0;
}
