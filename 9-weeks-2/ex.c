#include <stdio.h>
// 함수의 정의
void printLine(char c); // 함수 원형(프로토타입) 선언

int main(void) {
  printLine("*"); // 함수 호출
  printf("프로그램의 결과를 보여 주세요. \n");
  // printf("%c", c); // 오류  (밑에서 함수 정의할 때 함수를 부르고나서 메모리를 반납하기 때문에 재호출하면 오류가 난다)
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
