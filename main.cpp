// Program to demonstrate compiler based execution

#include <iostream>

int main()
{

    auto result = (10 <=> 20) > 0;

    std::cout << result << std::endl;
    
    return 0;
}