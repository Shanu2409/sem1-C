#include <stdio.h>
#include <conio.h>

int main()

{
		int n;

	printf("Enter the number of layers : ");
	scanf("%d",&n);

	for(int i =1;i <= n; i++) {
		for (int j = 1; j <=i;j++){
//			printf(" %d",j * i);
			printf(" *");
			}
			printf("\n");
		}
		for(int i =n-1;i >= 0; i--) {
		for (int j = 1; j <=i;j++){
//			printf(" %d",j * i);
			printf(" *");
			}
			printf("\n");
		}



	getch();
	return 0;
	}
