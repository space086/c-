/* if문과 else if */

#include <stdio.h>

int main (void) {

  int num;

  printf("정수 입력");
  scanf("%d", &num);

  if (num > 0 ) {
    printf("%d은(는) 양수입니다. \n\n\n", num);
  } else {
    printf("%d은(는) 음수입니다. \n\n\n", num);
  }

  return 0;
}