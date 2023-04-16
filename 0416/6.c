#include <stdio.h>

int main (void) {
  int big, small;
  int temp; // swap algorithm을 위한 임시변수

  printf("첫번째 수 : ");
  scanf("%d", &big);

  printf("두번째 수 : ");
  scanf("%d", &small);

  if (big < small) {
    temp = big;
    big = small;
    small = temp;
  }
  printf("%d >= %d \n\n\n", big, small);
  return 0;
}