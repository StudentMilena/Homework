
#include <iostream>

	int main()
	{
		int n = 5;
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; ++j)
			{
				sum += j;
			}

		}
		std::cout << "result: " << sum << '\n';
	}
