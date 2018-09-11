#include <memory>
#include "AppSafe.h"

using namespace std;

// Safe security system that the security status changes with time.

[STAThread]
int main()
{
	unique_ptr<AppSafe> app_safe = unique_ptr<AppSafe>(new AppSafe());
	return 0;
}
