#include<stdio.h>
#include <conio.h>
int main()
{
 int num1 = 0,num2 = 1,num3,elements;

 printf("Enter the number of elements:");
 scanf("%d",&elements);
 if (elements <= 2 && elements >=0) {
  	printf("your Answer is %d and %d \nYou have enterd 2 or less then 2 but for fibonacci there must be more then 2 terms \nRexecute the program and enter some bigger value ",num1,num2 );
  }

  else if (elements >2 ) {

 printf("\n%d %d",num1,num2);
 for(int i=2; i < elements; i++)
 {
  num3=num1+num2;
  printf(" %d",num3);
  num1=num2;
  num2=num3;
 }

  }

 else {
  	printf("!!!!!!!!!Erorr!!!!!!! \nYou must have enterd some negitive value ");
  	}



  getch();
  return 0;
 }
