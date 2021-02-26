#include <iostream>
#include <vector>

std::vector<long> toDigit(long);
bool hasSameNum(std::vector<long>);
bool isIncreasing(std::vector<long> data);

int main()
{
    long amount;
    /* Cin input amount */
    std::cin >> amount;
    std::vector<long> data;

    for(int i = 0 ; i< amount ; i++)
    {
        std::cin >> data[i];
    }

    /* Check that there */

    long x = 12345;


    return 0;
}

bool isIncreasing(std::vector<long> data)
{

    for (int i = 0; i < data.size() - 1; i++)
    {
        if (data[i] < data[i + 1])
            return false;
    }

    return true;
}

bool hasSameNum(std::vector<long> data)
{
    for (int i = 0; i < data.size(); i++)
    {

        long data_1 = data[i];

        for (int k = 0; k < data.size(); k++)
        {
            if (k == i)
                continue;
            if (data[k] == data_1)
            {
                return false;
            }
        }
    }

    return true;
}

std::vector<long> toDigit(long num)
{
    std::vector<long> result;

    if (num == 0)
    {
        result.push_back(0);
        return result;
    }
    while (num >= 1)
    {
        result.push_back(num % 10);
        num /= 10;
    }

    return result;
}