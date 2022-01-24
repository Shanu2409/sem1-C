#include <stdio.h>
#include <conio.h>
void main()
{
    // declaration of variables
    int num, bnum, dnum = 0, base = 1, r;
    printf (" Enter a binary number : ");
    scanf (" %d", &num);

    bnum = num;


    while ( num > 0)
    {
        r = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
        dnum = dnum + r * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
    }

    printf ( " The binary number is %d \t", bnum); // print the binary number user gave us
    printf (" \n The decimal number is %d \t", dnum); // print the decimal
    getch();
}
