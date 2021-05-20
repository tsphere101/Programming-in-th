#include <iostream>
#include <vector>
#include <algorithm>
void bubbleSort(std::vector<int> vect);

int main()
{

    int input_amount ;
    std::cin >> input_amount;
    if(input_amount > 1000)
    return 0;

    std::vector<int> inputs;

    for(int i = 0 ; i< input_amount; i ++)
    {
        int temp;
        std::cin >> temp;
        if(temp > 100000) return 0;
        inputs.push_back(temp);
    }

    std::cout << "======" << std::endl;
    for(int i = 0 ; i < inputs.size(); i++)
    {
        std::cout << inputs[i] << std::endl;
    }

    /* Sorting */


    /* Finding the most*/
    

    std::cout << "======" << std::endl;
    std::cout << "Sorted" << std::endl;
    std::cout << "======" << std::endl;
    for(int i = 0 ; i < inputs.size(); i++)
    {
        std::cout << inputs[i] << std::endl;
    }

    return 0;
}

void bubbleSort(std::vector<int> vect)
{
    for(int i = 0 ; i< vect.size() ; i++)
    {
        for(int k = 0 ; k < vect.size()-1; k++)
        {
            if(vect[k] < vect[k] +1 ) // From max to min
            {
                int temp = vect[k];
                vect[k] = vect[k+1];
                vect[k+1] = temp;
            }
        }
    }

}