#include <iostream>
#include <fstream>
#include <string>

void createFile(const char* fName)
{
	if (!checkForFile(fName))
	{
		std::ofstream thisFile(fName);
		std::cout << "File created" << std::endl;
	}
	else
	{
		std::cout << "File already exists" <<std::endl;
	}
}

std::fstream findFile(const char* fName)
{
	if (!checkForFile(fName))
	{
		std::cout << "File not found" << std::endl;
		return;
	}
	else {
		std::cout << "File found" << std::endl;
		std::fstream thisFile(fName);
		return thisFile;
	}
}

bool checkForFile(const char* fName)
{
	try {
		std::fstream thisFile(fName);
		return true;
	}
	catch (...)
	{
		return false;
	}
}

void editFile(std::fstream thisFile)
{
	std::string input;
	std::cout << "What would you like to do?\n [+] Append to file (1) \n [+] Remove from file (2) \n [+] Insert at position in file (3) \n [+] Cancel Operation (X)" << std::endl;
	std::cin >> input;
	switch (input[0])
	{
	case '1':
		input = "";
		std::cout << "Input text to append:" << std::endl;
		std::cin >> input;
		thisFile.write(input.c_str(), input.length());
		break;
	}
}
