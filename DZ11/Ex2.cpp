#include "Ex2.hpp"

void Ex2::ComplitingEx2()
{
    int start = 0, end = 0, num = 0, sum = 0;
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "¬ведите начало диапазона\n";
    std::cin >> start;
    std::cout << "¬ведите конец диапазона\n";
    std::cin >> end;
    std::cout << "¬ведите число\n";
    std::cin >> num;
    for (int i = start - 1; i < end; i++)
    {
        int n = arr[i];
        if (n < num)
        {
            sum = sum + arr[i];
        }
    }
    std::cout << "—умма: " << sum << "\n";
}
