#실습과제2
// **********************************************
// 제 목 : 5개의 정수를 입력받아 최댓값 구하는 프로그램
// 날 짜 : 2026년 9월30일
// 작성자 : 2600038 김부성
// **********************************************
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int get_max(int* array, int n);

int main(void)
{
    int grade[5];
    int i, max;

    for (i = 0; i < 5; i++)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", &grade[i]);
    }

    max = get_max(grade, 5);

    printf("최댓값은 %d입니다.\n", max);
    return 0;
}

int get_max(int* array, int n)
{
    int i, max;

    max = *array;

    for (i = 1; i < n; i++)
    {

        if (*(array + i) > max)
        {
            max = *(array + i); 
        }
    }

    return max;
}

#실습과제3
// **********************************************
// 제 목 : 정수 5개를 입력받아 저장해주는 프로그램
// 날 짜 : 2026년 9월30일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void get_data(int* arr, int size);

int main(void)
{
    int i, data[5];
    get_data(data, 5);

    for (i = 0; i < 5; i++)
        printf("%d번째 data: %d\n", i + 1, data[i]);

    return 0;
}
void get_data(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d번째 data를 입력하시오: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

#실습과제4
// **********************************************
// 제 목 : 실수를 입력받아 정수부 실수부 구하는 프로그램
// 날 짜 : 2026년 9월30일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void split_float(double num, int* i_part, double* f_part);

int main(void)
{
    double input_num;
    int integer_part;
    double fractional_part;
    printf("실수를 입력하시오 : ");
    scanf("%lf", &input_num);
    split_float(input_num, &integer_part, &fractional_part);

    printf("정수부 : %d\n", integer_part);
    printf("소수부 : %g\n", fractional_part);

    return 0;
}

void split_float(double num, int* i_part, double* f_part)
{
    *i_part = (int)num;

    *f_part = num - *i_part;
}

#실습과제5
// **********************************************
// 제 목 : 포인터를 이용한 swap 프로그램
// 날 짜 : 2026년 9월30일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#include<stdio.h>

void Swap3(int* ptr1, int* ptr2, int* ptr3);

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	printf("num1 :%d, num2 :%d, num3 :%d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("num1 :%d, num2 :%d, num3 :%d\n", num1, num2, num3);


}
void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;

}
#도전과제
// **********************************************
// 제 목 : 정수 10개를 입력하여 홀수 짝수 구분하는 프로그램
// 날 짜 : 2026년 9월30일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
#include <stdio.h>

int Oddprint(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
}

int Evenprint(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}

int main(void)
{
	int arr[10];

	printf("총 10개의 숫자 입력\n");

	for (int i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	printf("홀수 출력 : ");
	Oddprint(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	printf("짝수 출력 : ");
	Evenprint(arr, sizeof(arr) / sizeof(int));

	return 0;
}
