/*  10진수, 8진수, 16진수   */

#include <stdio.h>

int main(void) {
  int x = 10; // 10진수
  int y = 010; // 8진수
  int z = 0x10; // 16진수

  printf("x = %d \n", x);
  printf("y = %d \n", y);
  printf("z = %d \n", z);

  return 0;
}