#include <iostream>

int main()
{
    int intput_amount;
    int data;
    int min, max;

    std::cin >> intput_amount;
    if (intput_amount > 0 && intput_amount <= 1000)
    {
        if (intput_amount == 1)
        {
            std::cin >> data;
            std::cout << data << std::endl;
            std::cout << data << std::endl;
            return 0;
        }
        for (int i = 0; i < intput_amount; i++)
        {
            if (i == 0)
            {
                std::cin >> data;
                min = data;
                max = data;
            }
            if (i == 1)
            {
                std::cin >> data;
                if(data > max) 
                {
                    min = max;
                    max = data;
                }
                else
                {
                    max = min;
                    min = data;
                }
            }

            if (i > 1)
            {
                std::cin >> data;
                if (data > max)
                    max = data;
                else if (data < min)
                    min = data;
            }
        }
    std::cout << min << std::endl;
    std::cout << max << std::endl;
    }


    return 0;
}