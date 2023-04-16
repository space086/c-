#include <stdio.h>

int main (void) {
  int x;

  printf("정수 입력 : ");
  scanf("%d", &x);

  if (x>0) {
    printf("%d ==> 양수 \n\n\n", x);
  } else {
    printf("%d ==> 음수 \n\n\n", x);
  }
  printf("입력하신 수 = %d\n\n\n", x);

  return 0;
}