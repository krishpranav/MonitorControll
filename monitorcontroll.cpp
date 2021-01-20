//a simple c++ tool for turn off the monitor
//tool author: krisna pranav
// use this tool for fun purpose and legal purpose


//imports
#include <Windows.h>
#include <stdio.h>

//main function
int main()
{
    //turns off the monitor
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    sleep(8000); //for 8 seconds
    //turns monitor on after 8 seconds
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    return 0;
}



