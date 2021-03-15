#include "CAPosition.h"

CAPosition::CAPosition()
{
	worldScaleX = 0;
	worldScaleY = 0;
}
CAPosition::CAPosition(int wX, int wY, CWorldManager CWM)
{
	worldScaleX = wX;
	worldScaleY = wY;
	this->CWM = CWM;
}
CAPosition::~CAPosition()
{}
void CAPosition::CurAPosition()
{
	int positionX = 0;
	int positionY = 0;

	char a;

	while (true)
	{
		for (int i = 0; i < (worldScaleY); i++)
		{
			if (i != 0)
				cout << endl;

			for (int j = 0; j < (worldScaleX); j++)
			{

				CWM.GetCBP().CurBPosition(i, j);
				CWM.GetCCP().CurCPosition(i, j);

				if (i == positionY && j == positionX)
				{
					cout << "A";
				}
				else
					cout << " ";

			}
		}
		//cout << positionX << "\t" << BPositionX << endl;
		//cout << positionY << "\t" << BPositionY;


		a = _getch();

		switch (a)
		{
		case 'w':
			if (positionY > 0)
				positionY--;
			break;
		case 's':
			if (positionY < worldScaleY)
				positionY++;
			break;
		case 'a':
			if (positionX > 0)
				positionX--;
			break;
		case 'd':
			if (positionX < worldScaleX)
				positionX++;
			break;
		}

		if (CWM.MeetBCheck(positionX, positionY))
			break;

		system("cls");


	}
}