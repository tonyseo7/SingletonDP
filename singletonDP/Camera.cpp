#include "stdafx.h"
#include "Camera.h"
#include "InfoDisplay.h"
#include "PictureDisplay.h"

Camera *Camera::singleton;		//단일체, 정적 멤버
const DisplayMode Camera::mode_info = MODE_INFO;
const DisplayMode Camera::mode_picture = MODE_PICTURE;

Camera *Camera::GetSingleton()
{
	if (singleton == 0)
	{
		singleton = new Camera();

	}
	

	return singleton;
}

void Camera::Dispose()
{
	if (singleton != 0)
	{
		delete singleton;
		singleton = 0;
	}
}

Camera::Camera(void)
{
	interobj = InterObject::GetSingleton();
	displaymode = mode_picture;
	displayes[MODE_INFO] = new InfoDisplay();
	displayes[MODE_PICTURE] = new PictureDisplay();
}

void Camera::PutMemoryCard(MemoryCard *_memorycard)
{
	interobj->PutMemoryCard(_memorycard);
}

void Camera::TakeAPicture(string subject)
{
	interobj->StorePicture(subject);
}

void Camera::View()const
{
	displayes[displaymode]->View();
}

void Camera::BeforePicture()
{
	interobj->MoveBefore();
}

void Camera::NextPicture()
{
	interobj->MoveNext();
}

void Camera::SetDisplayMode(DisplayMode _displaymode)
{
	displaymode = _displaymode;
}