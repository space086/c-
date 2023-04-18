/* switch문 예제 */

#include <stdio.h>

int main(void) {
  int n = 2; // 변수 선언

  printf("정수 입력 (1~3) : ");
  scanf("", &n);

  switch (n)
  {
  case 1: printf("1번 \n\n\n");
    break;
  case 2: printf("2번 \n\n\n");
    break;
  case 3: printf("3번 \n\n\n");
    break;
  
  // default:
  //   break;
  }
  return 0;
}