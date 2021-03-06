#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*******************************\n");
	printf("********     1.play    ********\n");
	printf("********     0.exit    ********\n");
	printf("*******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//'0' 用1表示雷的位置
	char show[ROWS][COLS] = { 0 };//'*'
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(show, ROW, COL);
	Setmine(mine, ROW, COL, COUNT_MINE);
	Findmine(mine,show, ROW, COL);


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！！请重新选择！！\n");
		}
	} while (input);
	return 0;
}