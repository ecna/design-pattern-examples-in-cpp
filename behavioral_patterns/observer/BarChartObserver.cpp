// ˅
#include <iostream>
#include "behavioral_patterns/observer/BarChartObserver.h"
#include "behavioral_patterns/observer/Number.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

BarChartObserver::BarChartObserver()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

BarChartObserver::~BarChartObserver()
{
	// ˅
	
	// ˄
}

void BarChartObserver::update(const Number* number)
{
	// ˅
	cout << "Bar chart: ";
	for (int i = 0; i < number->value; ++i) {
		cout << "*";
	}
	cout << endl;

#ifdef _MSC_VER
    Sleep(100);
#else
    usleep(0.1 * 1000000);
#endif
	// ˄
}

// ˅

// ˄