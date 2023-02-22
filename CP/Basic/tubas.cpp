#include <iostream>

int main()
{
    int num[100] = {};
    int val, max = 0;

    for(int a = 0; a < sizeof(num) / sizeof(int); a++)
    {
        std::cin >> val;

        if(val == 0)
        {
            break;
        } else {
            num[a] = val;
        }
    }

    for(int a = 0; a < sizeof(num) / sizeof(int); a++)
    {
        if(num[a] > max)
        {
            max = num[a];
        }
    }
    
    std::cout << max << std::endl;
}
