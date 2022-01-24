 #include <stdio.h>
 #include<stdlib.h>

void main()
    {

        int i, j, h, s, arr[100];
        printf("Enter the value of array : ");
        scanf("%d", &s);

        printf("Enter some numbers : ");
        for (i = 0; i < s; ++i)
              {
                  scanf("%d", &arr[i]);
                     }

        for (i = 0; i < s; i++)
        {
            for (j = i + 1; j < s; j++)
            {
                if (arr[i] > arr[j])
                {
                    h =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = h;
                }
            }
        }

        printf("The Sorted numbers are : ");
        for (i = 0; i < s; ++i)
            printf(" %d", arr[i]);

    }
