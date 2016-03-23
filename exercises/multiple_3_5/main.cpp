#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		cout << "Usage: ./a.out <max num>" << endl;
		return 0;
	}

	int max = atoi(argv[1]);
	size_t sum = 0;	
	for (size_t num = 1; num < max; num++)
	{
		if (num % 5 == 0)
			sum += num;
		else if (num % 3 == 0)
			sum += num;
	}

	cout << "Sum: " << sum << endl;
}
