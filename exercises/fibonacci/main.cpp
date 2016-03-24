#include <iostream>
#include <queue>

using namespace std;

int main (int argc, char** argv)
{
	if (argc < 2)
	{
		cout << "Usage: ./a.out <max value>" << endl;
		return 0;
	}

	unsigned int max = atoi(argv[1]);

	queue<unsigned int> prev;
	unsigned int sum = 0;
	unsigned int next = 0;
	for (int i = 1; ; i++)
	{
		if (prev.empty())
		{
			next = i;
		}
		else
		{
			next = prev.front();
			if (prev.size() == 2) 
			{
				prev.pop();
				next += prev.front();
			}
		}

		cout << next << " " << endl;
		prev.push(next);

		// add to sum if even
		if (!(next & 1)) 
			sum += next;
		
		if (next >= max) break;
	}

	cout << "Sum: " << sum << endl;
}
