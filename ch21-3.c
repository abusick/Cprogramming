#실습과제1
// **********************************************
// 제 목 : 키보드로부터 문자열를 입력 받아 이전문자열에 연결하여 화면에 출력해주는 프로그램
// 날 짜 : 2026년 10월29일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
  #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char combined[1000] = "";
    char input[100];

    while (1) {
        printf("문자열 입력 : ");
        
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "quit") == 0) {
            break;
        }

        if (strlen(combined) > 0) {
            if (strlen(combined) + 1 + strlen(input) < sizeof(combined)) {
                strcat(combined, " ");
            } else {
                printf("경고: 저장 공간이 부족합니다.\n");
                break;
            }
        }

        if (strlen(combined) + strlen(input) < sizeof(combined)) {
            strcat(combined, input);
        } else {
            printf("경고: 저장 공간이 부족합니다.\n");
            break;
        }

        printf("입력된 문자열: %s\n", combined);
    }

    return 0;
}

  #실습과제2
// **********************************************
// 제 목 : my_strlen 함수,숫자 카운팅 프로그램
// 날 짜 : 2026년 10월29일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
    #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]);
int my_strlen(char str[]);

int main(void)
{
    char str[100];
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    printf("길이: %d, 내용: %s\n", my_strlen(str), str);

    RemoveBSN(str);
    printf("길이: %d, 내용: %s\n", my_strlen(str), str);
    return 0;
}

void RemoveBSN(char str[])
{
    int len = my_strlen(str);
    str[len - 1] = '\0';
}

int my_strlen(char str[])
{
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

  #실습과제3
// **********************************************
// 제 목 : 널문자 저장 프로그램
// 날 짜 : 2026년 10월29일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
    #include <stdio.h>
#include <string.h>

void my_strcpy(char dest[], char src[]);

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];
    my_strcpy(str2, str1);
    puts(str2);
    return 0;
}

void my_strcpy(char dest[], char src[])
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}

  #실습과제4
// **********************************************
// 제 목 : my_strcat 함수의 선언과 정의하는 프로그램
// 날 짜 : 2026년 10월29일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성
    #include <stdio.h>
#include <string.h>

void my_strcat(char dest[], char src[]);

int main(void)
{
    char str1[20] = "First~";
    char str2[20] = "Second";
    my_strcat(str1, str2);
    puts(str1);
    return 0;
}

void my_strcat(char dest[], char src[])
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
```[cite: 7]

  #실습과제5
// **********************************************
// 제 목 : 단어 5개을 입력 받고 사전에서 제일 앞과 뒤에 나오는 단어를 각각 출력 프로그램
// 날 짜 : 2026년 10월29일
// 작성자 : 2600038 김부성
// **********************************************
// 소스코드 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[5][50];
    char min_word[50];
    char max_word[50];
    int i;

    for (i = 0; i < 5; i++) {
        printf("문자열 입력 : ");

        if (scanf("%49s", words[i]) != 1) {
            printf("입력 오류가 발생했습니다.\n");
            return 1;
        }
    }

    strcpy(min_word, words[0]);
    strcpy(max_word, words[0]);

    for (i = 1; i < 5; i++) {
        if (strcmp(words[i], min_word) < 0) {
            strcpy(min_word, words[i]);
        }

        if (strcmp(words[i], max_word) > 0) {
            strcpy(max_word, words[i]);
        }
    }

    printf("제일앞 : %s\n", min_word);
    printf("제일뒤 : %s\n", max_word);

    return 0;
}
