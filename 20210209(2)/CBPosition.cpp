#include "CBPosition.h"

CBPosition::CBPosition()
{
	worldScaleX = 0;
	worldScaleY = 0;
	for (int i = 0; i < IndexForUse; i++)
	{
		BPositionX[i] = 0;
		BPositionY[i] = 0;
	}
}
CBPosition::CBPosition(int wX, int wY)
{
	worldScaleX = wX;
	worldScaleY = wY;
	for (int i = 0; i < IndexForUse; i++)
	{
		BPositionX[i] = 0;
		BPositionY[i] = 0;
	}

	SetBPosition();
}
CBPosition::~CBPosition()
{}
void CBPosition::CurBPosition(int& i, int& j)
{
	for (int x = 0; x < IndexForUse; x++)
	{
		if (i == BPositionY[x] && j == BPositionX[x])
		{
			cout << "B";
			j++;
		}
	}
}
void CBPosition::SetBPosition()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < IndexForUse; i++)
	{
		do {
			BPositionX[i] = (rand() % worldScaleX);
			BPositionY[i] = (rand() % worldScaleY);
		} while ((BPositionX[i] > worldScaleX - 2) || (BPositionY[i] > worldScaleY - 2));
	}
}
int CBPosition::GetBPositionX(int a)
{
	return BPositionX[a];
}
int CBPosition::GetBPositionY(int a)
{
	return BPositionY[a];
}