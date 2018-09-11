// ˅
#include <iostream>
#include "creational_patterns/factory_method/id_card/CreditCard.h"

using namespace std;

// ˄

CreditCard::CreditCard(const string& owner)
	: owner(owner)
	// ˅
	
	// ˄
{
	// ˅
	cout << "Make " << owner << "'s card." << endl;
	// ˄
}

CreditCard::~CreditCard()
{
	// ˅
	
	// ˄
}

void CreditCard::use()
{
	// ˅
	cout << "Use " << owner << "'s card." << endl;
	// ˄
}

// ˅

// ˄
