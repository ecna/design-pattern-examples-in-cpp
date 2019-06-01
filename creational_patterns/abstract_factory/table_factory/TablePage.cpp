// ˅
#include <sstream>
#include "creational_patterns/abstract_factory/table_factory/TablePage.h"
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

TablePage::TablePage(const string& title, const string& author)
	// ˅
	: Page(title, author)
	// ˄
{
	// ˅
	
	// ˄
}

TablePage::~TablePage()
{
	// ˅
	
	// ˄
}

string TablePage::toHTML()
{
	// ˅
	stringstream buffer;
	buffer << "<html><head><title>" << title << "</title></head><body>" << endl;
	buffer << "<h1>" << title << "</h1>" << endl;
	buffer << "<table width=\"80%\" border=\"3\">" << endl;
	vector<shared_ptr<Item>>::const_iterator it = contents.begin();
	while (it != contents.end()) {
		buffer << "<tr>" << (*it)->toHTML() << "</tr>" << endl;
		++it;
	}
	buffer << "</table>" << endl;
	buffer << "<hr><address>" << author << "</address>" << endl;
	buffer << "</body></html>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄