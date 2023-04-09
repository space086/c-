#include <stdio.h>

#define NUM_START 1
#define NUM_END 100

int main(void) {

  int cnt, hap = 0;

  for (cnt = NUM_START; cnt <= NUM_END; cnt += 2) {
    hap += cnt;
  }

  printf("%d부터 %d까지 홀수 합 계산하기\n", NUM_START, NUM_END);
  printf("합계 : %d", NUM_START, NUM_END, hap);

  return 0;
}