#include <stdio.h>

#define MOON 0.83

int main(void) {

  int weight = 70;
  float m_weight;
  m_weight = MOON * weight;
  printf("weight in moon is %.2f", m_weight);

  return 0;
}