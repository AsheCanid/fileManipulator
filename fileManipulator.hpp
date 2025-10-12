#include <iostream>
#include <fstream>
#include <string>

void createFile(const char* fName)
{
	std::ofstream thisFile(fName);
}

std::fstream findFile(const char* fName)
{
	try {
		std::fstream thisFile(fName);
		std::cout << "File found" << std::endl;
		return thisFile;
	}
	catch (...)
	{
		std::cout << "File does not exist" << std::endl;
		return;
	}
}

void editFile(std::fstream thisFile, const char* input)
{
	
}
