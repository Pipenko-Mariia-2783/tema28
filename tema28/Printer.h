#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Printer
{
public:
	static void printFile(string text, string filename, int copy = 1);
};

