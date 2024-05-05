#include "Ex1.hpp"
void Ex1::ComplitingEx1()
{
    const int size = 10;
    int arr[size];
    int max = 0, min = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "\n-----------------------------------------\n";
    std::cout << max << "\n";
    std::cout << min << "\n";
}
