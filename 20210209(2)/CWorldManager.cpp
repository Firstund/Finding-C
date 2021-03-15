#include "CWorldManager.h"

CWorldManager::CWorldManager()
{
	worldScaleX = 0;
	worldScaleY = 0;
}
CWorldManager::CWorldManager(const int worldScaleX, const int worldScaleY, CBPosition CBP, CCPosition CCP)
{
	this->worldScaleX = worldScaleX;
	this->worldScaleY = worldScaleY;
	this->CBP = CBP;
	this->CCP = CCP;
}
CWorldManager::~CWorldManager()
{}
bool CWorldManager::MeetBCheck(const int positionX, const int positionY)
{
	if (positionX == CCP.GetCPositionX() && positionY == CCP.GetCPositionY())
	{
		cout << "A와 C가 만났습니다!" << endl;

		return true;
	}

	for (int i = 0; i < IndexForUse; i++)
	{
		if (positionX == CBP.GetBPositionX(i) && positionY == CBP.GetBPositionY(i))
		{
			cout << "A와 B가 만났습니다... 앞으론 잘 피해봐요." << endl;

			return true;
		}
	}

	return false;
}
CBPosition CWorldManager::GetCBP()
{
	return CBP;
}
CCPosition CWorldManager::GetCCP()
{
	return CCP;
}
