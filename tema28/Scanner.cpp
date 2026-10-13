#include "Scanner.h"

Scanner::Scanner()
{
	text = "empty";
}

string Scanner::getText() const
{
	return text;
}

void Scanner::setText(string text)
{
	this->text = text;
}

void Scanner::scanFile(string fileName)
{
	ifstream file(fileName);
	if (file.is_open()) {
		string buff;
		text = "";
		while (!file.eof()) {
			getline(file, buff);
			text += buff + "\n";
		}
		file.close();
		cout << "loaded!\n";
	}
	else {
		cout << "not loaded!\n";
	}
}
