// **********************************************
// 제 목 : 행렬 계산을 수행하여 결과를 출력 프로그램
// 날 짜 : 2026년 10월2일
// 작성자 : 2600038 김부성
// **********************************************

#include <stdio.h>

int main()
{
    int A[2][2] = {
        {2, 4},
        {5, -5}
    };
    int B[2][2] = {
        {-2, 3},
        {0, -5}
    };
    int C[2][2] = {0};

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("연산결과:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%-5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// **********************************************
// 제 목 : 3명 학생의 국어,영어,수학 성적을 입력 받아 각 학생의 평균값을 구한 후 최우수 학생의 성적을 출력 프로그램
// 날 짜 : 2026년 10월2일
// 작성자 : 2600038 김부성
// **********************************************// **********************************************
//소스코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int kor, eng, mat;
    double avg;
    
    int max_student_idx = 1;
    double max_avg = -1.0;


    for (int i = 1; i <= 3; i++) {
        printf("%d번째 학생의 국어,영어,수학 성적을 입력: ", i);
        scanf("%d %d %d", &kor, &eng, &mat);

        avg = (kor + eng + mat) / 3.0;

        if (avg > max_avg) {
            max_avg = avg;
            max_student_idx = i;
        }
    }

    printf("최우수 학생은 %d번째 학생이고 평균점수는 %.0f점이다.\n", max_student_idx, max_avg);

    return 0;
}

// 제 목 : 행렬을 2차원 배열에 저장하고 원소 중에서 최대값과 위치 프로그램
// 날 짜 : 2026년 10월2일
// 작성자 : 2600038 김부성
// **********************************************// **********************************************
//소스코드
#include <stdio.h>

int main() 
{
    int matrix[3][3] = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    int max_val = matrix[0][0];
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (matrix[i][j] > max_val) 
            {
                max_val = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("최대값은 %d\n", max_val);
    printf("위치는 %d행 %d열\n", max_row + 1, max_col + 1);

    return 0;
}

// 제 목 : 4개의 문자열을 입력 받아 문자열의 길이를 구하는 프로그램
// 날 짜 : 2026년 10월2일
// 작성자 : 2600038 김부성
// **********************************************// **********************************************
//소스코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[4][10];
    int i, j;
    int len;

    for (i = 0; i < 4; i++) 
    {
        printf("%d번째 문자열 입력: ", i + 1);
        scanf("%s", &str[i][0]);
    }

    for (i = 0; i < 4; i++) 
    {
        len = 0;
        
        while (str[i][len] != '\0') 
        {
            len++;
        }

        printf("%d번째 문자열 길이: %d\n", i + 1, len);
    }

    return 0;
}

// 제 목 : 문자열을 입력 받아 사전에서 제일 뒤에 나오는 문자열을 구하는 프로그램
// 날 짜 : 2026년 10월2일
// 작성자 : 2600038 김부성
// **********************************************
//소스코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[4][10];
    int i;
    int max_idx = 0; 

    for (i = 0; i < 4; i++) {
        printf("%d번째 문자열 입력: ", i + 1);
        scanf("%s", &str[i][0]);
    }

    for (i = 1; i < 4; i++)
    {
        if (str[i][0] > str[max_idx][0])
        {
            max_idx = i;
        }
    }

    printf("사전에서 제일 뒤에 나오는 문자열: %s\n", &str[max_idx][0]);

    return 0;
}
