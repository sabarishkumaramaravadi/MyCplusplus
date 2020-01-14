
// C++ program to demonstrate the use of std::max_element 
#include <iostream> 
#include <algorithm> 
#include <initializer_list>


int main()
{
	int v[] = { 45, 4, 5, 7, 9, 15, 6, 10 };

	int temp = v[0];
	int n = sizeof(v) / sizeof(temp);

	for (int i = 0; i < n; ++i) {

		std::cout << v[i] << " ";

	}



	for (int i = 0; i < n; ++i) {
		if (i != 0 && i != n - 1) {

			int m = std::max({ temp, v[i], v[i + 1] });
			temp = v[i];
			v[i] = m;
		}

	}

	for (int i = 0; i < n; ++i) {

		std::cout << v[i] << " ";

	}

	std::cin.get();


}
