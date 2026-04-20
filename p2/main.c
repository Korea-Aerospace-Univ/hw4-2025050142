#include <stdio.h>

int main(void) {
    int n;
    char ch;
    
    int max_alpha = 0, max_num = 0;  // 최대 연속 횟수 기록
    int cur_alpha = 0, cur_num = 0;  // 현재 연속 횟수 카운트

    scanf("%d", &n);  // 전체 문자의 개수 입력
    
    getchar(); 

    for (int i = 0; i < n; i++)  // N번만큼 반복하며 문자 하나씩 검사
    {
         scanf(" %c", &ch);

        // i) 영어 소문자
        if (ch >= 'a' && ch <= 'z') {
            cur_alpha++;  // 소문자 연속 증가
            cur_num = 0;  // 숫자 연속 카운트 초기화
            
            if (cur_alpha > max_alpha) {
                max_alpha = cur_alpha;  // 영어 소문자 카운트가 증가했을 때 max_alpha 갱신
            }
        }
        
        // ii) 숫자
        else if (ch >= '0' && ch <= '9') {
            cur_num++;  // 숫자 연속 증가
            cur_alpha = 0;  // 소문자 연속 카운트 초기화
         
            if (cur_num > max_num) {
                max_num = cur_num;  // 숫자 카운트가 증가했을 때 max_num 갱신
            }
        }
        
        // iii) 그 외 (영어 대문자 등)
        else {
            cur_alpha = 0;  // 소문자 연속 카운트 초기화
            cur_num = 0;    // 숫자 연속 카운트 초기화
        }
    }

    printf("%d\n", max_alpha);
    printf("%d\n", max_num);

    return 0;
}
