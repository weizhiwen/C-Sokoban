#include "stdafx.h"
#include "关卡.h"

// 显示地图函数
void ShowMap()
{
	for (int i = 0; i < 8; i++)
		printf("%s\n", Map[i]);
}

// 通关条件判断函数
int IsSuccess()
{
	if (Map[4][1] == 'X'&& Map[5][1] == 'X'&& Map[6][1] == 'X')
		return 1;
	else
		return 0;
}

// 修复特殊位置的字符
void FixHoleChar()
{
	for (int i = 0; i < 3; i++)
	{
		int flag = 0;
		flag = Map[holePoint[i][0]][holePoint[i][1]] == ' ' ? 1 : 0;
		if (flag)
		{
			Map[holePoint[i][0]][holePoint[i][1]] = 'O';
		}
	}
}
