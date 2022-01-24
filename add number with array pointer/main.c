#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[5], b1[5],*p1,*p2,sum[5];

    printf("Enter the first number : ");

    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d",&a1[i]);
    }
    printf("Enter the second numbers : ");
    for (i = 0; i < 5; i++) {
        scanf("%d",&b1[i]);
    }

    for (i = 0; i < 5; i++) {
        p1= &a1[i];
        p2= &b1[i];
        sum[i] = *p1 + *p2;
    }

    for(i= 0; i< 5; i++) {
        printf("Answer is %d\n",sum[i]);
    }



    return 0;
}
