#include "CWorldManager.h"
#include "CAPosition.h"
#include "CCPosition.h"
#include <Windows.h>


void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int main()
{
	const int worldScaleX = 60;
	const int worldScaleY = 30;

	system(" mode  con lines=30   cols=60 ");
	CursorView(0);

	CBPosition CBP(worldScaleX, worldScaleY);
	CCPosition CCP(worldScaleX, worldScaleY, CBP);
	CWorldManager CW(worldScaleX, worldScaleY, CBP, CCP), *CWPt;
	CAPosition CAP(worldScaleX, worldScaleY, CW), *CAPt;
	CWPt = &CW;
	CAPt = &CAP;

	CAPt->CurAPosition();

	return(0);
}