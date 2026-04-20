#include <stdio.h>

int main(void) {
    int answer; // 정답을 저장할 변수
    int guess;  // 추측 숫자를 저장할 변수
    int count = 0; // 시도 횟수

    scanf("%d", &answer); // 정답 입력

    do {
        scanf("%d", &guess); // 추측 정수 입력
        count++; // 시도 횟수 1 증가

        if (guess > answer) {
            printf("%d>?\n", guess);
        } 
        else if (guess < answer) {
            printf("%d<?\n", guess);
        } 
        else {
            printf("%d==?\n", guess); // 정답을 맞힌 경우
            printf("%d\n", count); // 총 시도 횟수 출력
        }
        
    } while (guess != answer); // 입력값과 정답이 다르면 do 반복

    return 0;
}
