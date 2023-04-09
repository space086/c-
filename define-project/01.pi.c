#include <stdio.h>

#define PI 3.1415
#define SIZE (R) (PI * (R) * (R))

int main(void) {
  float radius;

  printf("원의 반지름을 입력하세요");
  scanf_s("%f", &radius);

  printf("원의 넓이는 %f입니다. \n", AREA(radius));
  return 0;
}