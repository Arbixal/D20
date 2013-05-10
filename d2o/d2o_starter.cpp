#include "StdAfx.h"
#include "d2o_starter.h"
#include <windows.h>


using namespace d2o;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	System::Threading::Thread::CurrentThread->ApartmentState = System::Threading::ApartmentState::STA;
	Application::Run(new d2o_starter());
	return 0;
}
