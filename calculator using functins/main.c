#include <stdio.h>
#include <conio.h>

int main () {


  int a;
  printf ("Enter 1.Add 2.Sub 3.Mul 4.Div : ");
  scanf ("%d",&a);

  if( a == 1) {
    add();
  }
  else if ( a == 2) {
    sub();
  }
  else if ( a == 3) {
    mul();
  }

  else if (a == 4) {
    div();
  }
  else {
    printf("Invalid operator");
  }
}

void add() {
  int x , y;
  printf("Enter 1st : ");
  scanf("%d",&x);
  printf("Enter 2st : ");
  scanf("%d",&y);
  int sum = x + y;
  loading();
  printf(" Your answer is : %d", sum);
}


void sub() {
  int x , y;
  printf("Enter 1st : ");
  scanf("%d",&x);
  printf("Enter 2st : ");
  scanf("%d",&y);
  int min = x - y;
  loading();
  printf("Your answer is : %d",min);
}


void mul() {
  int x , y;
  printf("Enter 1st : ");
  scanf("%d",&x);
  printf("Enter 2st : ");
  scanf("%d",&y);
  int into = x * y;
  loading();
  printf("Your answer is : %d", into);
}


void div() {
  int x , y;
  printf("Enter 1st : ");
  scanf("%d",&x);
  printf("Enter 2st : ");
  scanf("%d",&y);
  int guna = x / y;
  loading();
  printf("Your answer is : %d",guna);
}


void loading() {
    printf("... \n");
    sleep(1);
    printf("....\n");
    sleep(1);
    printf("......\n");
    sleep(1);
    printf("........\n");
    sleep(1);
    printf("..........\n");
    sleep(1);
}
