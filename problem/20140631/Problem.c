// 20140631 김문선
// <랜덤 확률로 무기 강화하기 게임>
// 강화단계가 올라갈수록 확률이 낮아진다. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PROBABILITY 100.0f            
#define SLEEP_TIME 2                        

int main(void)
{
	int Select = 0;                      // 스위치 변수
	int level = 0;                       // 무기 레벨
	double probability = MAXPROBABILITY;  // 강화 성공 확률
	time_t SleepTime = 0;                // 강화시간
	int RandNum = 0;                     // 랜덤숫자
	srand((int)time(NULL));              // 난수생성  
	printf("──── 무기 강화하기 ────\n");
	printf("  ver 1.0 by munseon\n\n");
 
	while (1)
	{
		printf("    ──── State ────\n");
		printf("    무기레벨 : + %d\n", level);
		printf("    성공확률 : %.2f%%\n", probability);
		printf("    ───────────────\n")
		printf("    도전하시겠습니까?\n\n");
		printf("    1.강화한다   2.포기한다\n\n");
		printf("    선택 > ");
		scanf("%d", Select);
		switch (Select)
		{
		case 1: // 강화한다
			printf("\n    강화중...\n\n");
			SleepTime = time(0) + SLEEP_TIME;
			while (time(0) < SleepTime);

			RandNum = rand() % 100;
			// 랜덤한 숫자가 강화확률보다 작으면 성공
			if (RandNum < probability) 
			{
				printf("    ***** 강화성공! *****\n");
				printf("    *                   *\n");
				printf("    *   + %d  ->  + %d    *\n", level, level + 1);
				printf("    *                   *\n");
				printf("    ***** 성공성공! *****\n\n");
				level++;
				probability -= (probability / 10.0) * level; // 성공확률 감소
			}
			else
			{
				printf("    으으아아아아아아아아악!!!\n");
				printf("    강화에 실패하여 + %d 무기를 잃었습니다.\n\n", level);
				level = 0;
				probability = MAX_PROBABILITY; // 강화확률 초기화 
			}
			break;
		case 2: // 강화포기
			printf("\n    다음에 또만나요!\n");
			return -1;
			break;
		default // 선택지 예외
			printf("\n    > 잘못된 메뉴 입력!\n");
			break;
		} 
	return 0;
}
