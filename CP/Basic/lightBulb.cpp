#include <iostream>
#include <vector>

int main() {    	
    int n, x, values, i1 = 0, i2 = 0;
    std::vector<int> I;

    std::cin >> n;

    while (std::cin >> values && x < n) {
        I.push_back(values);

        x++;
    }

    for (auto &v : I) {
        if (v == 1) {
            i1 = i1 == 1 ? 0 : 1;
        }

        if (v == 2) {
            i1 = i1 == 1 ? 0 : 1;
            i2 = i2 == 1 ? 0 : 1;   
        }
    }

    std::cout << i1 << std::endl;
    std::cout << i2 << std::endl;
}
