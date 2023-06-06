#include <stdio.h>

int main()
{
	double score[3][4];
	double avg[3];
	
	for(int i=0; i<3; i++){
		printf("네 과목 점수를 입력하시오 >> ");
		for(int j=0; j<4; j++){
			scanf("%lf", &score[i][j]);
			avg[i]+=score[i][j];
		}
	}

	for(int i=0; i<3; i++){
		avg[i]=avg[i]/4.0;
		printf("%d번째 학생의 평균 : %.0lf\n", i+1, avg[i]);
	}
	
	return 0;
}
