#include "framework.h"
int consoleLineLog = 1;
int consoleLineWarn = 1;
void frame::log(string print)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN));
	std::cout << "[" << (float)consoleLineLog << "] " << print << "\n";
	consoleLineLog += 1;
}
void frame::warn(const char* warn)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (FOREGROUND_RED));
	std::cout << "[" << (float)consoleLineWarn << "] " << warn << "\n";
	SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN));
	consoleLineWarn += 1;
}

playerclass* frame::player()
{
	maincc* mainC = (maincc*)((DWORD64)GetModuleHandleA(NULL) + 0x01451A40);
	playerclass* pclass = mainC->basePtr->pointer1->pointer2->pointer3->pointer4->pointer5->playerpointer;
	return pclass;
}

void frame::closeMsg()
{
	frame::warn("Closing in: 3");
	Sleep(1000);
	frame::warn("Closing in: 2");
	Sleep(1000);
	frame::warn("Closing in: 1");
	Sleep(1000);
}