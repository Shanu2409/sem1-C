#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade ;
     printf("Enter your grade : ");
    scanf("%c",&grade);

    switch  (grade) {


    case  'A':
        printf("woww you did a great job ");
    break ;



    case 'B':
        printf("I think you can do better");
        break ;

    case 'C':
        printf("Heyy do some hardwork....");
        break ;

    case 'F' :
        printf("You failed, you asshole ");
        break ;

    default :
        printf("please put correct grade");

    }
    return 0;
}
