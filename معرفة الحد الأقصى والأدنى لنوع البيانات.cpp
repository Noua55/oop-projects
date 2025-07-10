#include <iostream>
#include <limits>
using namespace std;

int main()
{
	cout << "max int: " << numeric_limits<int>::max() << endl;
	cout << "min int: " << numeric_limits<int>::min() << endl;

	cout << "max   char: " << int(numeric_limits<char>::max()) << endl;
	cout << "min   char: " << int(numeric_limits<char>::min()) << endl;

	return 0;
}
