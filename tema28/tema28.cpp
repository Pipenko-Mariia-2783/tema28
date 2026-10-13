#include "Scanner.h"
#include "Printer.h"
#include "Xerox.h"

int main()
{
    /*Scanner text1;

    string user;
    cout << "Enter file name:\t";
    cin >> user;

    text1.scanFile(user);
    cout << "Result: " << text1.getText();*/

    /*Printer::printFile("Hello world", "Test.txt", 3);*/

    Xerox hp;
    hp.copyFile("Mariia.txt", 2);
}