//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{

    //turns off the monitor
    SendMessage(HWND_BROCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    sleep(8000); //for 8 seconds
    //turns off the monitor after 8 seconds
    SendMessage(HWND_BROCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    return 0;
}



