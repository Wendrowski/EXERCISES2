/*#include <iostream>
using namespace std;

int main()
{
	int x = 0;

	while (x < 10)
	{
		cout << x << " ";
		++x;
	}
		
	return 0;
}*/
#include <iostream>

int main()
{
    int outer = 1;
    while (outer <= 1000)
    {
        int inner = 1;
        while (inner <= outer)
            std::cout << inner++ << " ";

        // Вставляем символ новой строки в конце каждого ряда
        std::cout << "\n";
        ++outer;
    }

    return 0;
}