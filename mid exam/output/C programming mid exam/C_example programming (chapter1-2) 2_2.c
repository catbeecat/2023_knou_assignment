
#include <stdio.h>
#define IN "원의 반지름은 100입니다. \n" //변수에 문자 선언
#define PI 3.1415926535 //변수에 유리수 선언
#define AREA(X) (PI*(X)*(X)) //변수에 계산식 선언
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.\n") //변수 OUT에 명령어 및 내용 선언

int main() //c함수 진행
{
    printf("%s \n", IN); // 변수 IN(문자)을 출력하므로 %s를 서술
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100)); // 변수 AREA 계산 결과 출력하므로 %10.5f을 서술
    OUT; // printf 함수를 포함하고 있는 변수 실행
}