#include <iostream>
#include <math.h>

int main()
{
    bool a = 0, b = 0;
    int n, v;

    std::cin >> n;

    int values[100000] = {};

    for(int i = 0; i < n; i++)
    {
        std::cin >> v;
        values[i] = v;
    }

    for(auto &x : values)
    {
        if(x == 1)
        {
            a = !a;
        } else if(x == 2)
        {
            a = !b;
            b = !b;
        }
    }
    std::cout << a << std::endl << b;
}
