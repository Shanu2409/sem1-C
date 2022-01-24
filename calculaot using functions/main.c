#include <stdio.h>
#include <conio.h>

int main()

{

  int num1 ,num2,ans,opt;

  printf("Enter your first number :");
  scanf("%d",&num1);
  printf("enter your second number :");
  scanf("%d",&num2);

  system("cls");
  printf("1.Addition \n2.Subtraction \n3.Divition \n4.Multiplication : \n");
  scanf ("%d",&opt);

  switch(opt) {
    case 1:
      ans = add(num1,num2);
      break;
      case 2:
      ans = sub(num1,num2);
      break;
      case 3:
      ans = div(num1,num2);
      break;
      case 4:
      ans = mul(num1,num2);
      break;
  }
  system("cls");
  printf("your answer is : %d",ans);

  getch();
  return 0;
  }

int add (int a , int b) {
  int c = a + b;
  return c;
  }

  int sub (int a , int b) {
  int c = a - b;
  return c;
  }

  int div (int a , int b) {
  int c = a / b;
  return c;
  }

  int mul (int a , int b) {
  int c = a * b;
  return c;
  }
