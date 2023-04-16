#include <stdio.h>

int main (void) {
  int x;

  printf("정수 입력 : ");
  scanf("%d", &x);

  if (!x) {
    printf("x는 0임\n");
  }
  return 0;
}