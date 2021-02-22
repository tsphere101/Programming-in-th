#include <iostream>
int main()
{

    std::string input;

    std::cin >> input;

    int cap = 0 ;
    int small = 0;

    if (input.length() > 10000)
        return 0;

    for (int i = 0; i < input.length(); i++)
    {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
        {
            if((input[i] >= 'A' && input[i] <= 'Z'))
            {
                cap++;     
            }
            else
            small++;
            
            if(small>0 && cap >0)
            {
                std::cout<< "Mix"<< std::endl;
                return 0;
            }
        }
        else return 0;
    }
    if(small > 0) std::cout << "All Small Letter" << std::endl;
    else std::cout << "All Capital Letter" << std::endl;

    return 0;
}