#include <iostream>
#include <string>

int main()
{
    //Chapter 0 excersize
    //std::cout << "\t This (\") is a quote, and this (\\) is a backslash." << std::endl;
    
    std::cout << "Name?: ";
    //Input gathering
    std::string name;
    std::cin >> name;

    std::cout << "Spacing?: ";
    //Input gathering
    int spacing;
    std::cin >> spacing;

    const std::string greeting = "Hello, " + name + "!";
    
    const int cpad = spacing;
    const int rpad = spacing;

    const int rows = rpad * 2 + 3;
    const std::string::size_type cols = greeting.size() + cpad * 2 + 2;

    std::cout <<std::endl;

    for(int r = 0; r !=rows; ++r)
    {
        std::string::size_type c = 0;
        while (c != cols)
        {
            // time to write greeting?
            if (r == rpad + 1 && c == cpad + 1)
            {
                std::cout << greeting;
                c += greeting.size();
            }
            else
            {
                // Are we on border?
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
                ++c;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}