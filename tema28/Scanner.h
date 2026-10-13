#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Scanner
{
	string text;
public:
	Scanner();
	string getText() const;

	void setText(string text);

	void scanFile(string fileName);
};

