// ˅
#include <string>
#include <iostream>
#include <fstream>
#include <regex>
#include <sstream>
#include "structural_patterns/flyweight/LargeSizeChar.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

LargeSizeChar::LargeSizeChar(const char char_name)
	: char_name(char_name)
	, display_data("")
	// ˅
	
	// ˄
{
	// ˅
	// Extract the current directory path.
	char current_directory_path[255];
#ifdef _MSC_VER
	GetCurrentDirectory(255, current_directory_path);
#else
	getcwd(current_directory_path, 255);
#endif

	stringstream buf;
	string line;
	ifstream ifs(string(current_directory_path) + "/big" + char_name + ".txt");
	if (ifs.fail() == true) {
		display_data = char_name + "?";
	}
	else {
		while (getline(ifs, line)) {
			buf << line << endl;
		}
		display_data = buf.str();
	}
	// ˄
}

LargeSizeChar::~LargeSizeChar()
{
	// ˅
	
	// ˄
}

void LargeSizeChar::display()
{
	// ˅
	cout << display_data;
	// ˄
}

// ˅

// ˄