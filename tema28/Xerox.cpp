#include "Xerox.h"

void Xerox::copyFile(string filename, int copy)
{
	this->scanFile(filename);
	printFile(this->getText(), filename, copy);
	cout << "created! " << copy << " copies" << endl;
}
