#include "Start.hpp"

void Start::ChooseExisize()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int choose;
    std::cout << "¬ыберите номер задани€, которое хотите проверить\n";
    std::cin >> choose;
    if (choose == 1)
    {
        Ex1 start1;
        start1.ComplitingEx1();
    }
    else if (choose == 2)
    {
        Ex2 start2;
        start2.ComplitingEx2();
    }
    else if (choose == 3)
    {
        Ex3 start3;
        start3.ComplitingEx3();
    }
}
