#include <iostream>

int checkAge(int a, int b, int y) {
    y++;

    if (a * 3 > b * 2) {
        
        return y;
    }

    a *= 3;
    b *= 2;

    return checkAge(a, b, y);
}

int main() {    	
    // The output consists of a and b (1 ≤ a ≤ b ≤ 10)
    int a = 0; 
    int b = 0; 
    int y = 0;

    std::cin >> a >> b;

    std::cout << checkAge(a, b, y);
}