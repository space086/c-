/*******************
 * * 프로그램 이름: 연습용
 * * 개발자 : 이은희
 * * 개발버전 : ver 3

*******************/
/* 기본 구조 */

#include <stdio.h>

int main (void) {
        int   iData; // 변수 선언 : 정수 (변수이름)
        char  cData; // 변수 선언 : 문자 (변수이름)
        float fData; // 변수 선언 : 실수 (변수이름)
        int a, b; // 변수 2개 선언
        int a = 6; // 변수 선언 & 대입 ==> 초기화

        iData = 5; // 수 할당
        cData = 'a'; // 문자 할당
        fData = 5.2; // 변수에 값을 대입

        printf("c언어는 재밌습니다. \n\n");
        printf("c언어"); 
        printf("재밌습니다. \n\n");
  
        return 0; // 함수의 반환
}