#include <stdio.h>

void main() {
	int arHo[3] = { 0, };
	int length = sizeof(arHo) / sizeof(int);
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < length; i++) {
		printf("%d호 월세를 입력하세요(단위: 만원)\n", i + 1);
		scanf_s("%d", arHo + i);
		sum += arHo[i];
	}
	avg = (double)sum / length;
	printf("1동 총 월세 : %d만원\n", sum);
	printf("1동 평균 월세 : %.2lf만원\n", avg);
}