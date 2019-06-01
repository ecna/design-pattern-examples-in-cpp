// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTFACTORY_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTFACTORY_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Factory.h"

class Page;
class Link;
class Data;

using namespace std;

// ˄

class ListFactory : public Factory
{
	// ˅
	
	// ˄

public:

	ListFactory();

	~ListFactory();

	shared_ptr<Page> createPage(const string& title, const string& author);

	shared_ptr<Link> createLink(const string& name, const string& url);

	shared_ptr<Data> createData(const string& name);

	// ˅
public:
	
protected:
	
private:
	ListFactory(const ListFactory&) = delete;
	ListFactory& operator=(const ListFactory&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_LIST_FACTORY_LISTFACTORY_H_

// ˅

// ˄