// Reading the .ini file and searching for the desired line.cpp 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    string path = "";

    cout << "������� ������ ���� �� �����" << endl;
    cin >> path;

    fstream fInput;
    fInput.open(path, fstream::in | fstream::out | fstream::app);

    if (!fInput.is_open())
    {
        cout << "���� �� ������";
    }
    else
    {
        cout << "���� ������. ������ ������� ������, ������� ������ �����" << endl;
        string str;
        string str_2;
        cin >> str_2;

        while (getline(fInput, str))
        {
            fInput >> str;
            if (str == str_2)
            {
                cout << str_2 << endl;
            }
        }
    }

    try
    {

    }
    catch (const std::exception&)
    {

    }
    fInput.close();
}
