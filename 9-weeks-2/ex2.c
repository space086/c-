#include <stdio.h>
#include <math.h>

int main(void) {
  int a = 10;
  int b = 4;
  // 1.
  // int result_a = abs(a);
  // int result_b = abs(b);

  // 2.
  double result = pow(a,b)

  //1.
  // printf("%3d의 절대값 = %3d\n", a, result_a);
  // printf("%3d의 절대값 = %3d\n", b, result_b);

  // 2.
  printf("%5d의 %3d승 = %5.0f\n", a, b, result);

  return 0;
}