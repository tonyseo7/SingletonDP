#pragma once
#include "Display.h"

class PictureDisplay : public Display
{
public:
	virtual void View()
	{
		InterObject *interobj = InterObject::GetSingleton();
		cout << "���� ���� ���" << endl;
		cout << interobj->GetPicture() << endl;
	}
};
