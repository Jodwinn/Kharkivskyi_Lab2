#include <iostream>
#include <Windows.h>
int fibonacci(int number)
{
    if (number == 0)
        return 1;
    if (number == 1)
        return 1;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    for (int count = 0; count < 11; ++count)
        std::cout << fibonacci(count) << " ";

}
