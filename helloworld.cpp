#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char name[50];

    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cout << "please your name: ";
    cin >> name;
    cout << "your name is " << name << endl;
}