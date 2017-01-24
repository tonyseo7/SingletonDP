#pragma once
#include "common.h"
#include "InterObject.h"
#include "Display.h"

enum DisplayMode
{
	MODE_PICTURE,
	MODE_INFO
};

class Camera
{
	static Camera *singleton;		//단일체, 정적 멤버
	InterObject *interobj;
	Display *displayes[MODE_INFO + 1];
	DisplayMode displaymode;

public:
	static const DisplayMode mode_info;
	static const DisplayMode mode_picture;
	static Camera *GetSingleton();
	static void Dispose();
	void PutMemoryCard(MemoryCard *_memorycard);
	void TakeAPicture(string subject);
	void View()const;
	void BeforePicture();
	void NextPicture();
	void SetDisplayMode(DisplayMode _displaymode);

private:
	Camera(void);
};
