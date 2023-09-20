#include <windows.h>
#include <iostream>
using namespace std;
void DrawLine(int length, char symbol, int color, bool isHorizontal)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    if (isHorizontal)
    {
        for (int i = 0; i < length; ++i)
         cout << symbol;
    }
    else
    {
        for (int i = 0; i < length; ++i)
        {
            cout << symbol << "\n";
        }
    }
    SetConsoleTextAttribute(h, 7);
}
int main()
{
    DrawLine(20, '@', 12, true);
    DrawLine(12, '@', 14, false);
    return 0;
} 