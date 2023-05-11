#include <stdio.h>
// 함수의 정의
void printLine(char c); // 함수 원형(프로토타입) 선언

int main(void) {
  printLine("*"); // 함수 호출
  printf("프로그램의 결과를 보여 주세요. \n");
  printf("-");
  int a =5, b =3;
  printf("%10d + %5 = %3 \n", a, b, a+b);

  return 0;
}

// 함수의 정의
void printLine(char c) {
  for (int i=0; i <40; i++) {
    printf("%c", c);
  }
  printf("\n");
}
