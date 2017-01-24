#pragma once
#include "MemoryCard.h"
#include "common.h"

class InterObject
{
	static InterObject singleton;		//단일체, 정적멤버
	MemoryCard *memorycard;
	int now;

public:
	static InterObject *GetSingleton();
	void PutMemoryCard(MemoryCard *_memorycard);
	void StorePicture(string subject);
	string GetPicture();
	void MoveBefore();
	void MoveNext();
	int GetPictureCnt();
	int GetNow();

private:
	InterObject(void);

};
