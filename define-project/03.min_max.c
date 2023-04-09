#include <stdio.h>

#define MAX 20
#define MIN 1

int main () {

  int data = 10;

  if (data < MIN) {
    printf("MIN 조건을 만족합니다. \n");
  } else {
    printf ("MIN 조건을 만족하지 않습니다. \n");
  }

  if (data > MAX) {
    printf("MAX 조건을 만족합니다 \n");
  }else {
    printf("MAX 조건을 만족하지 않습니다 \n");
  }
  
  return 0;

}