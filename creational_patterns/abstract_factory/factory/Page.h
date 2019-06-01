// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_

// ˅
#include <string>
#include <vector>
#include <memory>

class Item;

using namespace std;

// ˄

class Page
{
	// ˅
	
	// ˄

protected:

	const string title;

	const string author;

	vector<shared_ptr<Item>> contents;

public:

	Page(const string& title, const string& author);

	virtual ~Page();

	virtual string toHTML() = 0;

	void add(shared_ptr<Item> item);

	void output();

	// ˅
public:
	
protected:
	
private:
	Page(const Page&) = delete;
	Page& operator=(const Page&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_

// ˅

// ˄