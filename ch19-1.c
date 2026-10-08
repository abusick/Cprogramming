#실습과제2-1
  // **********************************************
// 제 목 : 함수의 매개변수에 함수 포인터를 활용하는 프로그램
// 날 짜 : 2026년 10월8일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#include <stdio.h>

// 덧셈 함수
int add(int a, int b) {
    return a + b;
}

// 곱셈 함수
int multiply(int a, int b) {
    return a * b;
}

// 함수 포인터를 매개변수로 받는 연산 함수
// int (*operation)(int, int) -> 반환형이 int이고 매개변수가 (int, int)인 함수 주소를 받음
void calculator(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y); // 넘겨받은 함수 포인터를 사용해 함수 호출
    printf("연산 결과: %d\n", result);
}

int main(void) {
    int num1 = 10, num2 = 5;

    printf("--- 함수 포인터 매개변수 활용 ---\n");
    // calculator 함수에 add 함수와 multiply 함수의 주소를 인자로 전달
    calculator(num1, num2, add);       // 출력: 연산 결과: 15
    calculator(num1, num2, multiply);  // 출력: 연산 결과: 50

    return 0;
}


#include <stdio.h>


void print_value(void* ptr, char type) 
{

    switch (type) 
    {
    case 'i': 
        printf("정수형 데이터 출력: %d\n", *(int*)ptr);
        break;
    case 'f': 
        printf("실수형 데이터 출력: %.2f\n", *(double*)ptr);
        break;
    case 'c': 
        printf("문자형 데이터 출력: %c\n", *(char*)ptr);
        break;
    default:
        printf("알 수 없는 타입입니다.\n");
    }
}

int main(void) 
{
    int score = 95;
    double pi = 3.141592;
    char grade = 'A';

    printf("\n--- void 포인터 매개변수 활용 ---\n");
    print_value(&score, 'i'); 
    print_value(&pi, 'f');   
    print_value(&grade, 'c'); 

    return 0;
}
  
  #실습과제2-2
  // **********************************************
// 제 목 : 함수의 매개변수에 void포인터를 활용하는 프로그램
// 날 짜 : 2026년 10월8일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#include <stdio.h>
void print_value(void* ptr, char type) 
{
    switch (type) 
    {
    case 'i':
        printf("정수형 데이터 출력: %d\n", *(int*)ptr);
        break;
    case 'f':
        printf("실수형 데이터 출력: %.2f\n", *(double*)ptr);
        break;
    case 'c': 
        printf("문자형 데이터 출력: %c\n", *(char*)ptr);
        break;
    default:
        printf("알 수 없는 타입입니다.\n");
    }
}

int main(void) 
{
    int score = 95;
    double pi = 3.141592;
    char grade = 'A';

    printf("\n--- void 포인터 매개변수 활용 ---\n");
    print_value(&score, 'i');  
    print_value(&pi, 'f');     
    print_value(&grade, 'c'); 

    return 0;
}
    
  #실습과제3
  // **********************************************
// 제 목 : 정수 4개의 평균을 구하는 프로그램
// 날 짜 : 2026년 10월8일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) 
{
    if (b == 0) 
    {
        printf("오류: 0으로 나눌 수 없습니다.\n");
        return 0;
    }
    return a / b;
}

void process_operation(int (*fp)(int, int))
{
    int num1, num2;
    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    int result = fp(num1, num2);
    printf("결과값: %d\n", result);
}

int main(void)
{
    int choice;
    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        process_operation(add);
        break;
    case 2:
        process_operation(sub);
        break;
    case 3:
        process_operation(mul);
        break;
    case 4:
        process_operation(div);
        break;
    default:
        printf("잘못된 선택입니다.\n");
        break;
    }

    return 0;
}

  #도전과제1
  // **********************************************
// 제 목 : 정수 4개의 평균을 구하는 프로그램
// 날 짜 : 2026년 10월8일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
    #include<stdio.h>

void Turn90do(int (*arr)[4])
{
    int arr2[4][4];
    for (int i = 0;i < 4;i++) 
    {
        for (int j = 0;j < 4;j++) 
        {
            arr2[j][3 - i] = arr[i][j];
        }
    }

    for (int i = 0;i < 4;i++) 
    {
        for (int j = 0;j < 4;j++) 
        {
            arr[i][j] = arr2[i][j];
        }
    }
}

void ShowArray(int (*arr)[4])
{
    for (int i = 0;i < 4;i++) 
    {
        for (int j = 0;j < 4;j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

  #도전과제2
  // **********************************************
// 제 목 : 정수 4개의 평균을 구하는 프로그램
// 날 짜 : 2023년 9월10일
// 작성자 : 15010101 홍길동
// **********************************************
// 소스코드 작성
int main(void)
{
    int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    int arr2[4][4];

    printf("Before Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("First Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Second Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Third Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Fourth Turn(Again Before Turn)\n");
    ShowArray(arr);

    return 0;
}
    
  #도전과제3
  // **********************************************
// 제 목 : 정수 4개의 평균을 구하는 프로그램
// 날 짜 : 2026년 10월8일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#include<stdio.h>

int arr[100][100];
int count = 1;

void Left_to_Right(int row, int min, int max)
{
    for (int i = min;i < max;i++) 
    {
        arr[row][i] = count;
        count++;
    }
}

void Right_to_Left(int row, int max, int min)
{
    for (int i = max - 2;i >= min;i--)
      {
        arr[row][i] = count;
        count++;
    }
}

void Top_to_Bottom(int col, int min, int max)
{
    for (int i = min + 1;i < max;i++) 
    {
        arr[i][col] = count;
        count++;
    }
}

void Bottom_to_Top(int col, int max, int min)
{
    for (int i = max - 2;i >= min + 1;i--) 
    {
        arr[i][col] = count;
        count++;
    }
}

void Snail(int n)
{
    int min = 0;
    int max = n;

    for (int i = 0;i < n / 2;i++) 
    {
        Left_to_Right(i, min, max);
        Top_to_Bottom(n - 1 - i, min, max);
        Right_to_Left(n - 1 - i, max, min);
        Bottom_to_Top(i, max, min);
        min++;
        max--;
    }

    if (n % 2 == 1) 
    {
        arr[n / 2][n / 2] = count;
    }
}

int main(void)
{
    int n;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);

    Snail(n);

    for (int i = 0;i < n;i++) 
    {
        for (int j = 0;j < n;j++) 
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i;
    printf("난수의 범위 : 0부터 100까지\n");
    for (i = 0;i < 5;i++)
        printf("난수 출력 : %d\n", rand() % 100);
    return 0;
}
