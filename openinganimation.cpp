#include "openinganimation.h"
#include <windows.h>
#include <iostream>
#include "tools.h"

void OpeningAnimation::Information()
{
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"\n";
    //system("color 3e");
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		//FOREGROUND_GREEN);
    SetCursorPosition(13, 16);
    std::cout<<"小组成员：苏凯晨 周启航\n";
    SetCursorPosition(13, 17);
    std::cout<<"指导老师：谢勇";
}
