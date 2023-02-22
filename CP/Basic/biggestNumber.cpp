#include <iostream>
#include <vector>

int main(){    	
    std::vector<int> a(100);
    int v, m = 0;

    while (std::cin >> v) {
        if (v == 0) {
            break;
        }

        a.push_back(v);
    }   

    for(auto &s : a) {
        if(s >= m) {
            m = s;
        }
    }

    std::cout << m << std::endl;
}
