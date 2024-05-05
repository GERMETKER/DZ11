#include "Ex3.hpp"

void Ex3::ComplitingEx3()
{
    int start = 0, end = 0, max = 0, min = 0;
    const int size = 12;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите прибыль за " << i + 1 << " месяц\n";
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
    std::cout << "Введите начало диапазона\n";
    std::cin >> start;
    std::cout << "Введите конец диапазона\n";
    std::cin >> end;
    for (int i = start - 1; i < end; i++)
    {
        if (i == 0)
        {
            min = arr[i];
            max = arr[i];
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
    std::cout << "Максимальный доход: " << max << "\n";
    std::cout << "Минимальный доход: " << min << "\n";
}