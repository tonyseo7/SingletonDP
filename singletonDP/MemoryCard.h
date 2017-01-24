#pragma once
#include "common.h"
typedef vector<string> Pictures;

class MemoryCard
{
	Pictures pictures;

public:
	int Store(string picture);
	int GetPictureCnt() const;
	string GetPicture(int pnum);


};
