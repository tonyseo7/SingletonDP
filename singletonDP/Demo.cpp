#include "stdafx.h"
#include "Camera.h"
void ViewTest(Camera *camera);


void main()
{
	Camera *camera = Camera::GetSingleton();
	MemoryCard *mc = new MemoryCard();
	camera->PutMemoryCard(mc);
	camera->TakeAPicture("ȫ�浿");
	ViewTest(camera);
	camera->TakeAPicture("������");
	ViewTest(camera);
	camera->BeforePicture();
	ViewTest(camera);
	camera->BeforePicture();
	ViewTest(camera);
	camera->NextPicture();
	ViewTest(camera);
	camera->NextPicture();
	ViewTest(camera);
	delete camera;
}

void ViewTest(Camera *camera)
{
	camera->SetDisplayMode(Camera::mode_info);
	camera->View();
	camera->SetDisplayMode(Camera::mode_picture);
	camera->View();
}
