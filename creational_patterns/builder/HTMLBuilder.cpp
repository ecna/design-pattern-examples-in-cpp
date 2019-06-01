// ˅
#include "creational_patterns/builder/HTMLBuilder.h"

// ˄

HTMLBuilder::HTMLBuilder()
	: file_name("")
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

HTMLBuilder::~HTMLBuilder()
{
	// ˅
	
	// ˄
}

string HTMLBuilder::result()
{
	// ˅
	return file_name;
	// ˄
}

void HTMLBuilder::createTitle(const string& title)
{
	// ˅
	file_name = title + ".html";		// Set a title as a file name
	writer.open(file_name);
	writer << "<html><head><title>" << title << "</title></head><body>" << endl;	// Write a title
	writer << "<h1>" << title << "</h1>" << endl;
	// ˄
}

void HTMLBuilder::createSection(const string& section)
{
	// ˅
	writer << "<p>" << section << "</p>" << endl;	// Write a section
	// ˄
}

void HTMLBuilder::createItems(vector<string> items)
{
	// ˅
	writer << "<ul>" << endl;			// Write items
	vector<string>::const_iterator it = items.begin();
	while (it != items.end()) {
		writer << "<li>" << (*it) << "</li>" << endl;
		++it;
	}
	writer << "</ul>" << endl;
	// ˄
}

void HTMLBuilder::close()
{
	// ˅
	writer << "</body></html>" << endl;
	writer.close();						// Close file
	// ˄
}

// ˅

// ˄