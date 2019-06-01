// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEFACTORY_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEFACTORY_H_

// ˅
#include <string>
#include "creational_patterns/abstract_factory/factory/Factory.h"

class Page;
class Link;
class Data;

using namespace std;

// ˄

class TableFactory : public Factory
{
	// ˅
	
	// ˄

public:

	TableFactory();

	~TableFactory();

	shared_ptr<Page> createPage(const string& title, const string& author);

	shared_ptr<Link> createLink(const string& name, const string& url);

	shared_ptr<Data> createData(const string& name);

	// ˅
public:
	
protected:
	
private:
	TableFactory(const TableFactory&) = delete;
	TableFactory& operator=(const TableFactory&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_TABLE_FACTORY_TABLEFACTORY_H_

// ˅

// ˄