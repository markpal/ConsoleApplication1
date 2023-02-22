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

    MyFile << "ok!!\n";
    MyFile << "second!!";

    while (!MyFile2.eof())
    {
        //MyFile2 >> data;
        getline(MyFile2, data);
        cout << data << endl;
    }


    MyFile.close();
    MyFile2.close();
}

