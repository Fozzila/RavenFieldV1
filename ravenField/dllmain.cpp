// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
DWORD WINAPI MainThread(HMODULE hModule)
{
    AllocConsole();
    FILE* f = nullptr;
    freopen_s(&f, "CONOUT$", "w", stdout);

    
    main();

    if (f != nullptr)
        fclose(f);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        
            HANDLE hThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(MainThread), hModule, 0, nullptr);
            if (hThread)
                CloseHandle(hThread);
    }
    case DLL_THREAD_ATTACH:
    {

    }

    case DLL_THREAD_DETACH:
    {

    }
    case DLL_PROCESS_DETACH:
    {
        break;
    }
        
    }
    return TRUE;
}

