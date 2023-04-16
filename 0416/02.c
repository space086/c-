#include <stdio.h>

int main (void) {
  int score;

  printf("점수 입력 : ");
  scanf("%d", &score);

  if (score >= 60 ) {
    printf("축하합니다.\n");
    printf("합격입니다.\n");
  } else {
    printf("아쉽군요\n");
    printf("불합격입니다\n");
  }
  printf("당신의 점수는 %d점 입니다 \n\n\n", score);

  return 0;
}