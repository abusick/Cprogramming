#실습과제1

* 표준 입출력 스트림을 접근하는 방법을 설명하라. ->문자, 문자열 전용 입출력 함수에서 주소를 이용하여 스트림에 접근
* 공백을 포함한 문자열을 입력 받을 때 사용가능한 함수는? ->gets함수
* gets 함수사용시 가장 큰 문제점은 무엇인가? ->배열의 크기를 초과하는 문자열 입력시 실행 오류 발생
* fgets 함수 사용시 문제점은 무엇인가? ->문자열을 그대로 출력하면 줄바꿈이 한 번 더 일어나거나, 문자열 비교 함수를 쓸 때 원하는 결과가 나오지 않을 수 있음
* 널문자(‘\0’)와 널포인터(NULL)의 용도를 설명하시오.
* 널문자('\0')
C 언어는 문자열의 길이를 따로 저장하지 않습니다. 대신 메모리를 순서대로 읽다가 '\0'을 만나는 순간 "여기서 문자열이 끝났다"라고 판단합니다.
배열의 크기를 지정할 때, 실제 문자 개수보다 최소 1칸 더 크게 잡아야 하는 이유가 바로 이 널 문자가 들어갈 자리가 필요하기 때문입니다.

* 널 포인터
초기화: 포인터 변수를 선언할 때 임의의 쓰레기 값을 가지지 않도록 NULL로 초기화하여 안전하게 만듭니다.
반환 값 확인: 메모리 동적 할당(malloc)이나 파일 열기(fopen) 함수 등이 실패했을 때 NULL을 반환하므로, 이를 통해 예외 처리를 할 수 있습니다.
안전장치: 포인터를 사용하기 전 if (ptr != NULL)과 같은 조건문으로 유효성을 검사하여 잘못된 메모리 접근(Segmentation Fault)을 방지합니다.

#실습과제2

---

실행결과

---

<img width="858" height="364" alt="image" src="https://github.com/user-attachments/assets/6c627cdc-df88-4235-92de-34e27840f824" />

---

#실습과제3

---

실행결과

---

<img width="730" height="398" alt="image" src="https://github.com/user-attachments/assets/98d45b17-28eb-4cfa-b806-5c9e674abe9e" />

---

#실습과제4

---

실행결과

---

<img width="762" height="154" alt="image" src="https://github.com/user-attachments/assets/3c397b3f-1ccb-4e7e-b88d-b09ff133776d" />

---

#실습과제5

---

실행결과

---

<img width="740" height="158" alt="image" src="https://github.com/user-attachments/assets/84783ac6-c4b9-447d-8ddf-9565bbc73a24" />

---
