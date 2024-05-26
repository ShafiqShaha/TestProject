#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream myFiles;

    myFiles.open("rudy.txt",ios::in);//read only
    if(myFiles.is_open()){
        string line;
        while(getline(myFiles,line)){
            cout << line << endl;
        }
        myFiles.close();
    }


    return 0;
}