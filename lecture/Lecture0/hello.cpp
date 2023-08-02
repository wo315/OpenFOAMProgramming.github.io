#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> msg{"Hello", "OpenFOAM"};
    for (const auto &str : msg)
    {
        for (const auto &ch : str)
        {
            std::cout << ch << std::endl;
        }
    }
    return 0;
}