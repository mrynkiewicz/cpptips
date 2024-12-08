// Short example how to use std::bin

#include <iostream>
#include <functional>
#include <vector>

void incr(int& number, int& value)
{
    number = value;
    ++value;
}
int main()
{
    int n{2};
    auto incr_n = std::bind(incr, std::placeholders::_1, std::ref(n));

    std::vector<int> numbers(5);
    for(auto& number : numbers)
    {
        incr_n(number);
    }

    std::cout << "After call, elements are: " << '\n';
    for(auto number : numbers)
        std::cout << number << ", ";

    std::cout << std::endl << std::endl << "n= " << n << std::endl;

}


