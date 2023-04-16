#include <stdio.h>

int main (void) {
  int x,y;

  printf("첫번째 수 = ");
  scanf("%d", &x);

  printf("두번째 수 = ");
  scanf("%d", &y);

  if(x>y) {
    printf("큰 수 = %d \n 작은 수 = %d\n",x, y);
  } else {
    printf("큰 수 = %d \n 작은 수 = %d\n",y, x);
  }

  return 0;
}