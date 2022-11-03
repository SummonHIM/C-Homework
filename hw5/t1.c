#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int magic, guess;
	srand(time(NULL));
	magic = rand();
	magic %= 3;
	printf("贴士：石头=0，剪刀=1，布=2。\n");
	printf("做出选择吧[0,1,2]：");
	scanf("%d", &guess);
	printf("\n");
	if (guess == 0) {
		switch (magic) {
			case 0: printf("玩家：石头，电脑：石头。\n平局。"); break;
			case 1: printf("玩家：石头，电脑：剪刀。\n玩家胜。"); break;
			case 2: printf("玩家：石头，电脑：布。\n电脑胜。"); break;
		}
	} else if (guess == 1) {
		switch (magic) {
			case 0: printf("玩家：剪刀，电脑：石头。\n玩家胜。"); break;
			case 1: printf("玩家：剪刀，电脑：剪刀。\n平局。"); break;
			case 2: printf("玩家：剪刀，电脑：布。\n电脑胜。"); break;
		}
	} else if (guess == 2) {
		switch (magic) {
			case 0: printf("玩家：布，电脑：石头。\n玩家胜。"); break;
			case 1: printf("玩家：布，电脑：剪刀。\n电脑胜。"); break;
			case 2: printf("玩家：布，电脑：布。\n平局。"); break;
		}
	}
 }
