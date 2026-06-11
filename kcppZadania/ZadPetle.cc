#include <iostream>

// pokazanie petli while
void pokazWhile()
{
    std::cout << "\npetla while:" << std::endl;

    int i = 0;

    while (i < 10)
    {
        ++i;

        if (i == 3)
        {
            std::cout << "continue dla i = " << i << std::endl;
            continue;
        }

        if (i == 7)
        {
            std::cout << "break dla i = " << i << std::endl;
            break;
        }

        std::cout << "wartosc i: " << i << std::endl;
    }
}

// pokazanie petli do-while
void pokazDoWhile()
{
    std::cout << "\npetla do-while:" << std::endl;

    int i = 0;

    do
    {
        i++;

        if (i == 2)
        {
            std::cout << "continue dla i = " << i << std::endl;
            continue;
        }

        if (i == 6)
        {
            std::cout << "break dla i = " << i << std::endl;
            break;
        }

        std::cout << "wartosc i: " << i << std::endl;

    } while (i < 10);
}

// pokazanie petli for
void pokazFor()
{
    std::cout << "\npetla for:" << std::endl;

    for (int i = 1; i <= 10; ++i)
    {
        if (i == 4)
        {
            std::cout << "continue dla i = " << i << std::endl;
            continue;
        }

        if (i == 8)
        {
            std::cout << "return dla i = " << i << std::endl;
            return;
        }

        std::cout << "wartosc i: " << i << std::endl;
    }
}

int main()
{
    pokazWhile();
    pokazDoWhile();
    pokazFor();

    return 0;
}

