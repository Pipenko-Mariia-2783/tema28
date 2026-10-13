#include "Printer.h"

void Printer::printFile(string text, string filename, int copy)
{
	for (int i = 0;i < copy;i++) {
		ofstream file("copy_" + to_string(i) + "_" + filename);
		file << text;
		file.close();
	}
	cout << "Printed!";
}
