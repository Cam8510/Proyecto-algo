#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void calltext(string doc)
{
    ifstream artFile(doc);
    string line;

    if (artFile.is_open())
    {
        while (getline(artFile, line))
        {
            cout << line << endl;
        }
        artFile.close();
    }
    else
    {
        cerr<< "Failed to open .txt" << endl;
    }
}
    
