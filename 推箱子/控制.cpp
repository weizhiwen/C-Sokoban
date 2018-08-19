#include "stdafx.h"
#include "控制.h"

// 控制小人向上移动
void MoveToUp()
{
	int NextPersonRow = CurrentPersonRow - 1;
	int NextPersonCol = CurrentPersonCol;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow - 1;
		int NextBoxCol = NextPersonCol;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
	FixHoleChar();
}

// 控制小人向下移动
void MoveToDown()
{
	int NextPersonRow = CurrentPersonRow + 1;
	int NextPersonCol = CurrentPersonCol;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow + 1;
		int NextBoxCol = NextPersonCol;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
	FixHoleChar();
}

// 控制小人向左移动
void MoveToLeft()
{
	int NextPersonRow = CurrentPersonRow;
	int NextPersonCol = CurrentPersonCol - 1;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow;
		int NextBoxCol = NextPersonCol - 1;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
	FixHoleChar();
}

// 控制小人向右移动
void MoveToRight()
{
	int NextPersonRow = CurrentPersonRow;
	int NextPersonCol = CurrentPersonCol + 1;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow;
		int NextBoxCol = NextPersonCol + 1;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
	FixHoleChar();
}

