#include <stdio.h>

int main (void) {
  int age, local, fee;

  printf("당신의 나이는?");
  scanf("%d", &age);

  printf("지역 주민이신가요? (1=예 / 2=아니요)");
  scanf("%d", &local);

  fee = 10000;

  if (age >= 60) {
    fee = fee - 5000;
  }
  if (local == 1) {
    fee = fee - 5000;
  }

  printf("요금 = %d \n\n\n", fee);
  return 0;
}