#include <stdio.h>
#include <stdlib.h>

// 다항식의 항을 표현하는 구조체
typedef struct Node {
    int coefficient;   // 계수
    int exponent;      // 차수
    struct Node* next; // 다음 항의 포인터
} Node;

// 다항식의 연결형 자료구조를 초기화하는 함수
void initializePolynomial(Node** polynomial) {
    *polynomial = NULL;
}

// 다항식에 항을 추가하는 함수
void addTerm(Node** polynomial, int coefficient, int exponent) {
    Node* newTerm = (Node*)malloc(sizeof(Node));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;

    if (*polynomial == NULL) {
        *polynomial = newTerm;
    } else {
        Node* current = *polynomial;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newTerm;
    }
}

// 다항식을 출력하는 함수
void printPolynomial(Node* polynomial) {
    Node* current = polynomial;

    while (current != NULL) {
        printf("%dx^%d ", current->coefficient, current->exponent);
        if (current->next != NULL) {
            printf("+ ");
        }
        current = current->next;
    }

    printf("\n");
}

// 두 다항식을 더하는 함수
Node* addPolynomials(Node* polynomial1, Node* polynomial2) {
    Node* result = NULL;
    Node* current1 = polynomial1;
    Node* current2 = polynomial2;

    while (current1 != NULL && current2 != NULL) {
        if (current1->exponent > current2->exponent) {
            addTerm(&result, current1->coefficient, current1->exponent);
            current1 = current1->next;
        } else if (current1->exponent < current2->exponent) {
            addTerm(&result, current2->coefficient, current2->exponent);
            current2 = current2->next;
        } else {
            int sum = current1->coefficient + current2->coefficient;
            if (sum != 0) {
                addTerm(&result, sum, current1->exponent);
            }
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    // 남은 항들을 추가
    while (current1 != NULL) {
        addTerm(&result, current1->coefficient, current1->exponent);
        current1 = current1->next;
    }
    while (current2 != NULL) {
        addTerm(&result, current2->coefficient, current2->exponent);
        current2 = current2->next;
    }

    return result;
}

// 두 다항식을 곱하는 함수
Node* multiplyPolynomials(Node* polynomial1, Node* polynomial2) {
    Node* result = NULL;
    Node* current1 = polynomial1;

    while (current1 != NULL) {
        Node* current2 = polynomial2;
        while (current2 != NULL) {
            int coefficient = current1->coefficient * current2->coefficient;
            int exponent = current1->exponent + current2->exponent;
            addTerm(&result, coefficient, exponent);
            current2 = current2->next;
        }
        current1 = current1->next;
    }

    return result;
}

int main() {
    Node* polynomial1;
    Node* polynomial2;
    Node* sum;
    Node* product;

    initializePolynomial(&polynomial1);
    initializePolynomial(&polynomial2);
    initializePolynomial(&sum);
    initializePolynomial(&product);

    // 첫 번째 다항식 입력 받기
    printf("첫 번째 다항식의 항 개수: ");
    int termCount1;
    scanf("%d", &termCount1);

    printf("첫 번째 다항식의 항 (계수 차수): \n");
    for (int i = 0; i < termCount1; i++) {
        int coefficient, exponent;
        scanf("%d %d", &coefficient, &exponent);
        addTerm(&polynomial1, coefficient, exponent);
    }

    // 두 번째 다항식 입력 받기
    printf("두 번째 다항식의 항 개수: ");
    int termCount2;
    scanf("%d", &termCount2);

    printf("두 번째 다항식의 항 (계수 차수): \n");
    for (int i = 0; i < termCount2; i++) {
        int coefficient, exponent;
        scanf("%d %d", &coefficient, &exponent);
        addTerm(&polynomial2, coefficient, exponent);
    }

    printf("첫 번째 다항식: ");
    printPolynomial(polynomial1);

    printf("두 번째 다항식: ");
    printPolynomial(polynomial2);

    sum = addPolynomials(polynomial1, polynomial2);
    printf("두 다항식의 합: ");
    printPolynomial(sum);

    product = multiplyPolynomials(polynomial1, polynomial2);
    printf("두 다항식의 곱: ");
    printPolynomial(product);

    return 0;
}
