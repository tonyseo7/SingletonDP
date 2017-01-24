#include "stdafx.h"
#include "InterObject.h"

InterObject InterObject::singleton;			//����ü, �������

InterObject *InterObject::GetSingleton()	//����ü ��ȯ�ϴ� ���� �޼���
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