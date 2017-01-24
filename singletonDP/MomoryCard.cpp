#include "stdafx.h"
#include "MemoryCard.h"

int MemoryCard::Store(string picture)
{
	pictures.push_back(picture);

	return pictures.size();
}

int MemoryCard::GetPictureCnt()const
{
	return pictures.size();
}

string MemoryCard::GetPicture(int pnum)
{
	if ((pnum < 0) || (pnum > GetPictureCnt()))
	{
		return "";
	}

	return pictures[pnum-1];
}