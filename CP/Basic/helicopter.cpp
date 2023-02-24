#include <iostream>

// https://neps.academy/br/exercise/5
char heli(int h, int p, int f, int d) {
    if (d == -1) {
        if (p > f && h < f) {
            return 'S';
        }
		else if (p < f && h > f) {
            return 'N';
        }
		else {
            goto p1;
        }
    }
    else {
        if (p > f && h < f) {
            return 'N';
        }
		else if (p < f && h > f) {
            return 'S';
        }
		else {
            goto p2;
        }
    }

    p1: 
        if (p < h) {
            return 'S';
        }
        else if (p > h) {
            return 'N';
        }
    p2: 
        if (p < h) {
            return 'N';
        }
        else if (p > h) {
            return 'S';
        }
}

int main() {    	
    int h;
    int p;
    int f;
    int d;
    
    std::cin >> h >> p >> f >> d;

    std::cout << heli(h, p, f, d);
}