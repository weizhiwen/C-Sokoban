#pragma once


void Menu(); // 显示游戏菜单函数
char InputDirection(); // 用户输入方向函数

// 引入所需的外部函数
extern void ShowMap();
extern int IsSuccess();
extern void MoveToUp();
extern void MoveToDown();
extern void MoveToLeft();
extern void MoveToRight();

