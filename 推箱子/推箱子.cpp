// 推箱子.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include "推箱子.h"

int main()
{
	int flag = 1;
	while (flag)
	{
		system("cls"); // 清楚控制台的内容
		ShowMap(); // 显示最新的地图
		if (IsSuccess())
		{
			printf("恭喜你，游戏胜利啦！\n");
			break;
		}
		Menu(); // 显示程序菜单
		char direction = InputDirection(); // 接收用户输入
		//判断输入方向后的操作                                                                           
		switch (direction)
		{
		case 'W':
		case 'w':
			MoveToUp();
			break;
		case 'S':
		case 's':
			MoveToDown();
			break;
		case 'A':
		case 'a':
			MoveToLeft();
			break;
		case 'D':
		case 'd':
			MoveToRight();
			break;
		case 'Q':
		// 用户主动退出游戏
		case 'q':
			printf("哎呀！你的智商真低.\n");
			flag = 0;
			break;
		}

	}
	system("pause");
    return 0;
}

// 显示游戏菜单函数
void Menu()
{
	printf("欢迎来到推箱子的世界！\n");
	printf("P代表小人,X代表箱子,O代表箱子要推到的位置.");
	printf("W(w)：上. S(s)：下. A(a)：左. D(d)：右.\nQ(q)结束游戏.\n");
	printf("请输入小人的前进方向:\n");
}

// 用户输入方向函数
char InputDirection()
{
	char direction;
	rewind(stdin);
	scanf_s("%c", &direction, sizeof(direction));
	return direction;
}