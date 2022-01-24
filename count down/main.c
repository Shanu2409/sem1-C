#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,i;
    printf("Enter the number to start count down: \n");
    scanf("%d",&count);

    system("cls");
// for up to down
//    for(i = 1; i <= count; i++) {
//        printf("%d",i);
//        if (i < count) {
//        sleep(1);
//        }
//        else if (i = count) {
//            break;
//        }
//        system("cls");
//    }

        //for down to up
        for (i = count; i >= 0; i--) {
            printf("%d",i);
            if (i > 0) {
        sleep(1);
        }
        else if (i = 0) {
            break;
        }
        system("cls");
        }


    system("cls");
    printf("\n\n\n----------- Time Up ------------\n\n\n");
    return 0;
}
