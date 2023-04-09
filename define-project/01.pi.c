#include <stdio.h>

#define PI 3.1415
#define BUFFER_SIZE 1024

int main(void) {


  const int WIDTH = 100;
  const int HEIGHT = 150;

  double input;

  printf("원의 반지름을 입력하세요");
  scanf_s("%lf", &input);

  input = input*input*PI;
  printf("원의 넓이는 %f입니다. \n", input);
  return 0;
}