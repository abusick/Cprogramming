# 실습과제 2
  // **********************************************
// 제 목 : add2함수는 매개변수의 값을 2만큼 증가시키는 함수 프로그램
// 날 짜 : 2026년 9월23일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>

void add2(int *value);

int main(void)
{
    int number;
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    add2(&number);
    
    printf("2만큼 증가한 값: %d\n", number);
    return 0;
}

void add2(int *value)
{
    *value += 2; 
}

# 실습과제 3
  // **********************************************
// 제 목 : 함수를 값에 의한 호출을 이용하여 2를 증가시킨 후 리턴하고 main함수에서 리턴값을 받아서 처리하 프로그램
// 날 짜 : 2026년 9월23일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>

int add2(int value);

int main(void)
{
    int number;
    int result; 

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    result = add2(number);
    
    printf("2만큼 증가한 값: %d\n", result);
    return 0;
}

int add2(int value)
{
    value += 2;
    return value; 
}

# 실습과제 4
  // **********************************************
// 제 목 : swap함수 프로그램
// 날 짜 : 2026년 9월23일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>

void swap(int *pa, int *pb, int *pc);

int main(void)
{
    int x, y, z;

    printf("정수x를 입력 하시오: ");
    scanf("%d", &x);
    printf("정수y를 입력 하시오: ");
    scanf("%d", &y);
    printf("정수z를 입력 하시오: ");
    scanf("%d", &z);

    printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);

    swap(&x, &y, &z);

    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}

void swap(int *pa, int *pb, int *pc)
{
    int temp;

    temp = *pa;  
    *pa = *pb;   
    *pb = *pc;   
    *pc = temp;   

# 실습과제 5
  // **********************************************
// 제 목 : num 변수에 저장된 값을 100배 하는 함수 프로그램
// 날 짜 : 2026년 9월23일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>

int times100ByValue(int n);            
void times100ByReference(int* ptr);   

int main(void)
{
    int num = 10;

    printf("값에 의한 호출 결과 (반환값): %d\n", times100ByValue(num));
    printf("값에 의한 호출 후 원본 num 상태: %d\n\n", num);

    times100ByReference(&num);
    printf("주소에 의한 호출 후 원본 num 상태: %d\n", num);

    return 0;
}

int times100ByValue(int n)
{
    return n * 100;
}
void times100ByReference(int* ptr)
{
    int num = *ptr;
    *ptr = num * 100;
}
