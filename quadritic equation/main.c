#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{

	int a, b, c, ans;

	printf("Enter the value of a, b and c :");
	scanf("%d %d %d",&a,&b,&c);

	ans = sqrt(((b * b) - 4 * c)) / (2 * c);

	printf("The answer is :%d",ans);


	getch();
	return 0;
}
