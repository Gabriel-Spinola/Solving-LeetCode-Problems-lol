#include <iostream>
#include <vector>

int main() {    	
    // if the last digit of the number is non-zero, she decreases the number by one;
    // if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
    // Output consists of n and k (2 ≤ n ≤ 109, 1 ≤ k ≤ 50)
    int n, k;

    std::cin >> n >> k;

    for (int i = 0; i < k; i++) {
        // Checks if the last digit (N % 10) is not equal to 0
        if (n % 10 != 0) {
            n -= 1 ;
        } else {
            n /= 10;
        }
    }

    std::cout << n << std::endl;
}
