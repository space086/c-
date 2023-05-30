#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

// 사용자 정보를 저장하는 구조체
typedef struct {
    int purchaseAmount;    // 누적 구매 금액
    int points;            // 보유 포인트
    char grade[10];        // 회원 등급
    bool isDormant;        // 휴면 회원 여부
    time_t lastVisitTime;  // 마지막 방문 시간
} User;

// 회원 등급을 계산하여 업데이트하는 함수
void updateGrade(User* user) {
    if (user->points >= 100) {
        strcpy(user->grade, "VIP");
    } else if (user->points >= 50) {
        strcpy(user->grade, "골드");
    } else if (user->points >= 30) {
        strcpy(user->grade, "실버");
    } else {
        strcpy(user->grade, "일반");
    }
}

// 휴면 회원 여부를 확인하고 업데이트하는 함수
void checkDormantStatus(User* user) {
    time_t currentTime = time(NULL);
    double secondsSinceLastVisit = difftime(currentTime, user->lastVisitTime);
    double secondsInDay = 24 * 60 * 60;  // 하루를 초로 환산

    // 일정 기간(180일) 동안 방문하지 않은 경우 휴면 회원으로 설정
    if (secondsSinceLastVisit >= 180 * secondsInDay) {
        user->isDormant = true;
        strcpy(user->grade, "휴면");
    } else {
        user->isDormant = false;
    }
}

int main() {
    int numUsers;  // 처리할 사용자 수
    printf("처리할 사용자 수를 입력하세요: ");
    scanf("%d", &numUsers);

    User users[numUsers];

    for (int i = 0; i < numUsers; i++) {
        printf("사용자 #%d의 구매 금액을 입력하세요: ", i + 1);
        int purchaseAmount;
        scanf("%d", &purchaseAmount);

        User* user = &users[i];
        user->purchaseAmount += purchaseAmount;
        user->points += purchaseAmount / 100;  // 구매 금액의 1%를 포인트로 적립

        // 포인트 임계값에 도달하면 등급 업데이트
        if (user->points >= 100 || user->points >= 50 || user->points >= 30) {
            updateGrade(user);
            user->points = 0;  // 포인트 잔액 초기화
        }

        // 방문 시간 업데이트 및 휴면 회원 여부 확인
        user->lastVisitTime = time(NULL);
        checkDormantStatus(user);

        printf("사용자 #%d의 회원 등급: %s\n", i + 1, user->grade);

        if (user->isDormant) {
            printf("휴면 회원입니다. 방문해 주셔서 감사합니다.\n");
        }

        printf("\n");
    }

    return 0;
}
