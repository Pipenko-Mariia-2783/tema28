#pragma once
#include "Scanner.h"
#include "Printer.h"
class Xerox :
    public Scanner,
    public Printer
{
public:
    void copyFile(string filename, int copy = 1);
};

