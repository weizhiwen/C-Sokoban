#pragma once

// 使用二维数组来储存关卡地图
char Map[8][9] =
{
	" #####  ",
	" #P ### ",
	" # X  # ",
	"### # ##",
	"#O# #  #",
	"#OX  # #",
	"#O   X #",
	"########"
};

// 小人的开始位置
int CurrentPersonRow = 1;
int CurrentPersonCol = 2;

// 记录洞的位置
int holePoint[3][2] =
{
	{4,1},
	{5,1},
	{6,1}
};

// 显示地图函数
void ShowMap();

// 通关条件判断函数
int IsSuccess();

// 修复洞位置的字符
void FixHoleChar();

// 引入外部控制函数
extern void MoveToUp();
extern void MoveToDown();
extern void MoveToLeft();
extern void MoveToRight();
