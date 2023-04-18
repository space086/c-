/* switch문 예제 */

#include <stdio.h>

int main(void) {
  int level; // 변수 선언

  printf("등급 입력 (0~2) : ");
  scanf("%d", &level);

  printf("\n\n\n");


  switch (level)
  {
  case 0: printf("delete 권한있음 \n");
    break;
  case 1: printf("write 권한있음 \n");
    break;
  case 2: printf("read \n");
    break;
  
  default: printf("0~2까지만 입력해주세요. \n");
    // break;
  }
  return 0;
}