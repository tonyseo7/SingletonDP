#pragma once
#include "Display.h"

class InfoDisplay : public Display
{
public:
	virtual void View()
	{
		InterObject *interobj = InterObject::GetSingleton();
		cout << "정보 보기 모드" << endl;
		cout << "전체 사진 수 :" << interobj->GetPictureCnt() << endl;
		cout << "현재위치:" << interobj->GetNow() << endl;
	}

};