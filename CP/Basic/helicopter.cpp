#include <iostream>

int main() {    	
    int h;
    int p;
    int f;
    int d;
    
    std::cin >> h >> p >> f >> d;

    if (d == 1) {
        if (p > h) {
            std::cout << 'S';
        }
        else if (p < h) {
            std::cout << 'N';
        }
    }
    else if (d == -1) {
        if (p > h) {
            std::cout << 'N';
        }
        else if (p < h) {
            std::cout << 'S';
        }
    }
}