
#include <stdio.h>
#define EX_RATE 1100

int main(void) {
  
  int dollor1 = 10;
  int dollor2 = 100;
  int dollor3 = 1000;

  int won1 = EX_RATE * dollor1;
  int won2 = EX_RATE * dollor2;
  int won3 = EX_RATE * dollor3;


  printf("%d원 = %d달러 \n", won1, dollor1);
  printf("%d원 = %d달러 \n", won2, dollor2);
  printf("%d원 = %d달러 \n", won3, dollor3);

  return 0;
}