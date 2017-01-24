#include "stdafx.h"
#include "InterObject.h"

InterObject InterObject::singleton;			//단일체, 정적멤버

InterObject *InterObject::GetSingleton()	//단일체 반환하는 정적 메서드
{
	return &singleton;
}

InterObject::InterObject(void)
{
	memorycard = 0;
	now = 0;
}

void InterObject::PutMemoryCard(MemoryCard *_memorycard)
{
	memorycard = _memorycard;
}

void InterObject::StorePicture(string subject)
{
	now = memorycard->Store(subject);
}

string InterObject::GetPicture()
{
	return memorycard->GetPicture(now);
}

void InterObject::MoveBefore()
{
	if (now > 1)
	{
		now--;
	}
}

void InterObject::MoveNext()
{
	int cnt = memorycard->GetPictureCnt();

	if (now < cnt)
	{
		now++;
	}
}

int InterObject::GetPictureCnt()
{
	return now;
}

int InterObject::GetNow()
{
	return now;
}