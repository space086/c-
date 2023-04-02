#include <stdio.h>

int main(void) {

  printf("1234\n\n");
  // printf("%d", 1+2);
  printf("%d", 3/2);
  printf("\n\n\n");

  printf("%8d \n", 12345); // 오른쪽 정렬
  printf("%08d \n", 12345*1000); // 왼쪽 빈칸에 0을 넣고 싶다면
  return 0;
}