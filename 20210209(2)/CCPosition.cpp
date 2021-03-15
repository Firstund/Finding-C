#include "CCPosition.h"

CCPosition::CCPosition()
{
	worldScaleX = 0;
	worldScaleY = 0;

	CPositionX = 0;
	CPositionY = 0;
}
CCPosition::CCPosition(int wX, int wY, CBPosition CBP)
{
	worldScaleX = wX;
	worldScaleY = wY;

	CPositionX = 0;
	CPositionY = 0;

	this->CBP = CBP;

	SetCPosition();
}
CCPosition::~CCPosition()
{}
void CCPosition::CurCPosition(int& i, int& j)
{
	if (i == CPositionY && j == CPositionX)
	{
		cout << "C";
		j++;
	}
	
}
void CCPosition::SetCPosition()
{
	srand((unsigned int)time(NULL));
	do {
		CPositionX = (rand() % worldScaleX);
		CPositionY = (rand() % worldScaleY);
	} while (((CPositionX > worldScaleX - 2) || (CPositionY > worldScaleY - 2)) || CPBPPositionCheck());
	
}
bool CCPosition::CPBPPositionCheck()
{
	bool a = false;

	for (int i = 0; i < IndexForUse; i++)
	{
		if (CBP.GetBPositionX(i) == CPositionX && CBP.GetBPositionY(i) == CPositionY)
			a = true;
	}
	return a;
}
int CCPosition::GetCPositionX()
{
	return CPositionX;
}
int CCPosition::GetCPositionY()
{
	return CPositionY;
}