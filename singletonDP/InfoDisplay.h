#pragma once
#include "Display.h"

class InfoDisplay : public Display
{
public:
	virtual void View()
	{
		InterObject *interobj = InterObject::GetSingleton();
		cout << "���� ���� ���" << endl;
		cout << "��ü ���� �� :" << interobj->GetPictureCnt() << endl;
		cout << "������ġ:" << interobj->GetNow() << endl;
	}

};