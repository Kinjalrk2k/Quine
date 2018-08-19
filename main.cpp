#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
	system("cls");

	fstream f;
	f.open("main.cpp", ios::in);

	f>>noskipws;

    char c;
	while(f>>c)
    {
        cout<<c;

        if(f.eof())
            break;
    }

    _getch();
    return 0;
}
