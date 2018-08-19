#pragma once

// 控制小人向上、下、左、右移动
void MoveToUp();
void MoveToDown();
void MoveToLeft();
void MoveToRight();

// 引入外部变量
extern char Map[8][9];
extern int CurrentPersonRow;
extern int CurrentPersonCol;

// 引入外部函数
extern void FixHoleChar();

