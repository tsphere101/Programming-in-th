#include <iostream>
#include <vector>

int main()
{

    int value = 42;

    std::vector<int> input;
    std::vector<int> remainder;

    for(int i = 0 ; i < 10 ; i++)
    {
        int input_temp;
        std::cin >> input_temp;
        if(input_temp <= 1000)
        {
            input.push_back(input_temp);
        }
        else return 0;
    }

    for(int i = 0 ; i< 10 ; i++)
    {
        int add_flag = 0;
        for(int k = 0 ; k< remainder.size() ; k++)
        {
            if(remainder[k] == input[i]%value)
            {
                add_flag++;
                break;
            }
        }
        if(add_flag == 0)
        {
            remainder.push_back(input[i] %value);
        }
    }

    std::cout << remainder.size();

    return 0;
}