// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream MyFile("filename.txt");
    ifstream MyFile2("filename2.txt");
    string data;

    MyFile << "Files can be tricky, but it is fun enough!!";

    while (!MyFile2.eof())
    {
        MyFile2 >> data;
        cout << data << endl;
    }


    MyFile.close();
    MyFile2.close();
}

