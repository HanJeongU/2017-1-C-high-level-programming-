// 20140631 �蹮��
// <���� Ȯ���� ���� ��ȭ�ϱ� ����>
// ��ȭ�ܰ谡 �ö󰥼��� Ȯ���� ��������. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PROBABILITY 100.0f            
#define SLEEP_TIME 2                        

int main(void)
{
	int Select = 0;                      // ����ġ ����
	int level = 0;                       // ���� ����
	double probability = MAXPROBABILITY;  // ��ȭ ���� Ȯ��
	time_t SleepTime = 0;                // ��ȭ�ð�
	int RandNum = 0;                     // ��������
	srand((int)time(NULL));              // ��������  
	printf("�������� ���� ��ȭ�ϱ� ��������\n");
	printf("  ver 1.0 by munseon\n\n");
 
	while (1)
	{
		printf("    �������� State ��������\n");
		printf("    ���ⷹ�� : + %d\n", level);
		printf("    ����Ȯ�� : %.2f%%\n", probability);
		printf("    ������������������������������\n")
		printf("    �����Ͻðڽ��ϱ�?\n\n");
		printf("    1.��ȭ�Ѵ�   2.�����Ѵ�\n\n");
		printf("    ���� > ");
		scanf("%d", Select);
		switch (Select)
		{
		case 1: // ��ȭ�Ѵ�
			printf("\n    ��ȭ��...\n\n");
			SleepTime = time(0) + SLEEP_TIME;
			while (time(0) < SleepTime);

			RandNum = rand() % 100;
			// ������ ���ڰ� ��ȭȮ������ ������ ����
			if (RandNum < probability) 
			{
				printf("    ***** ��ȭ����! *****\n");
				printf("    *                   *\n");
				printf("    *   + %d  ->  + %d    *\n", level, level + 1);
				printf("    *                   *\n");
				printf("    ***** ��������! *****\n\n");
				level++;
				probability -= (probability / 10.0) * level; // ����Ȯ�� ����
			}
			else
			{
				printf("    �����ƾƾƾƾƾƾƾƾ�!!!\n");
				printf("    ��ȭ�� �����Ͽ� + %d ���⸦ �Ҿ����ϴ�.\n\n", level);
				level = 0;
				probability = MAX_PROBABILITY; // ��ȭȮ�� �ʱ�ȭ 
			}
			break;
		case 2: // ��ȭ����
			printf("\n    ������ �Ǹ�����!\n");
			return -1;
			break;
		default // ������ ����
			printf("\n    > �߸��� �޴� �Է�!\n");
			break;
		} 
	return 0;
}
