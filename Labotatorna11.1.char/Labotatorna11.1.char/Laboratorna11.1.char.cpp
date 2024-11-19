#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
using namespace std;

int CountOccurrences(const char* fName)
{
    ifstream fin(fName);
    if (!fin)
    {
        cout << "������� �������� �����: " << fName << endl;
        return -1;
    }

    int count = 0;
    char line[256];

    while (fin.getline(line, sizeof(line)))
    {
        cout << "��������� �����: " << line << endl;
        char* pos = line;
        while ((pos = strpbrk(pos, "+-=")) != nullptr)
        {
            count++;
            pos++;
        }
    }

    fin.close();
    return count;
}

int main()
{
   
    SetConsoleCP(1251);  
    SetConsoleOutputCP(1251);  

    char fileName[100];

    cout << "������ ����� �����: ";
    cin.sync();
    cin.getline(fileName, 100);

    int count = CountOccurrences(fileName);
    if (count != -1)
    {
        cout << "�������� ������� �������� ������� '+', '-', '=': " << count << endl;
    }

    return 0;
}
