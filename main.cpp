#include <iostream>
#include <string>
#include <fstream>
#include <stack>

using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "Input: ";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";

    ifstream file;
    string str;
    stack<string> myStack;
    file.open("if.txt", ios_base::in);
    cout << "pushing" << endl;
    while(getline(file, str))
    {
        cout << str << endl;
        myStack.push(str);
    }
    cout << "popping" << endl;
    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }
    
    file.close();
    return 0;
}