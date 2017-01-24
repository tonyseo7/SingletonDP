#pragma once
#include "Display.h"

class PictureDisplay : public Display
{
public:
	virtual void View()
	{
		InterObject *interobj = InterObject::GetSingleton();
		cout << "사진 보기 모드" << endl;
		cout << interobj->GetPicture() << endl;
	}
};
