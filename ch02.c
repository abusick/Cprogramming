// **********************************************
// 제 목 : 변수 a, b, c의 주소를 출력하는 프로그램
// 날 짜 : 2023년 9월 9일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
// 실습과제2
#include <stdio.h>

int main(void)
{
    int a = -100;
    char b = 'A';
    double c = 3.14;

    int* ptr_a = &a;
    char* ptr_b = &b;
    double* ptr_c = &c;

    printf("int형 변수 a의 값은 : %d\n", *ptr_a);
    printf("char형 변수 b의 값은 : %c\n", *ptr_b);
    printf("double형 변수 c의 값은 : %lf\n", *ptr_c);

    return 0;
}
