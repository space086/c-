#include <stdio.h>

#define KIDS 3
#define FAMILY "Mike"
#define MORTGATE_RATE 5.15

main () {

  int age;
  char child_name[14] = "John";

  printf("\n%s는 %d명의 아이를 가지고 있다. \n", FAMILY, KIDS);

  age = 11;
  printf("첫 번째 아이 %s는 %d살이다. \n", child_name, age);
  strcpy_s(child_name,12, "Jane");
  age = 6;
  printf("두 번째 아이 %s는 %d살이다.\n", child_name, age);

  return 0;
}