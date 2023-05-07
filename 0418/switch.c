/* switch문 예제 */

#include <stdio.h>

int main(void) {
  int sum;
  int j = 1;
  sum = 0;
  do {
    sum = sum + j;
    j++;
  }while (j < 5);
  {
    /* code */
    printf("%d\n", sum);
  }
  
  
  return 0;
}