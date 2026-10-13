#include "Scanner.h"

int main()
{
    Scanner text1;

    string user;
    cout << "Enter file name:\t";
    cin >> user;

    text1.scanFile(user);
    cout << "Result: " << text1.getText();
}