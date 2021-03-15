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
		cout << "A�� C�� �������ϴ�!" << endl;

		return true;
	}

	for (int i = 0; i < IndexForUse; i++)
	{
		if (positionX == CBP.GetBPositionX(i) && positionY == CBP.GetBPositionY(i))
		{
			cout << "A�� B�� �������ϴ�... ������ �� ���غ���." << endl;

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
