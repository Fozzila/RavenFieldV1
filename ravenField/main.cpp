#include "framework.h"
void main()
{
	bool health = false;
	while(1)
	{
		if (GetAsyncKeyState(VK_F1) & 1)
		{
			health = !health;
			if (health)
				frame::log("Health: On");
			else
				frame::log("Health: Off");
				frame::player()->HP = 100;
		}
		Sleep(1);
		if (health)
		{
			frame::player()->HP = 999;
		}
		if (GetAsyncKeyState(VK_END) & 1)
		{
			frame::closeMsg();
			break;

		}
		Sleep(1);
	}

	
}