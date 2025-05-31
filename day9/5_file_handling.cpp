#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("file.txt");
    fin.seekg(0,ios::end);
    pos = fin.tellg();
    cout<<"Size of file: " << pos << " bytes " << endl;
    fin.seekg(144);
    string line;    
    geline(fin, line);
    cout << line << endl;
}
