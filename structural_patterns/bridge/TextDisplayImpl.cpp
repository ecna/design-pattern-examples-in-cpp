// ˅
#include <iostream>
#include "structural_patterns/bridge/TextDisplayImpl.h"

using namespace std;

// ˄

TextDisplayImpl::TextDisplayImpl(const string& text)
	: text(text)
	, width(static_cast<int>(text.size()))
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

TextDisplayImpl::~TextDisplayImpl()
{
	// ˅
	
	// ˄
}

void TextDisplayImpl::implOpen()
{
	// ˅
	printLine();
	// ˄
}

void TextDisplayImpl::implWrite()
{
	// ˅
	cout << ":" << text << ":" << endl;		// Enclose a text with ":" and display it.
	// ˄
}

void TextDisplayImpl::implClose()
{
	// ˅
	printLine();
	// ˄
}

void TextDisplayImpl::printLine()
{
	// ˅
	cout << "*";							// Display "*" mark at the beginning of a frame.
	for (int i = 0; i < width; ++i) {		// Display "." for the number of "width".
		cout << ".";
	}
	cout << "*" << endl;					// Display "*" mark at the end of a frame.
	// ˄
}

// ˅

// ˄
