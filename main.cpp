#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    MSG msg;

    while (GetMessage (&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    cout << "Hello World" << endl;
    return 0;
}