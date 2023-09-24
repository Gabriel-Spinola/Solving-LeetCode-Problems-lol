#include <iostream>
#include <setjmp.h>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    int n;
    string s;
    int a[100][2];

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

        for (int j = 0; j < 2; j++) {
            a[i][j] = s[j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cout << '\t' << a[i][j];
        }
    }

    /*int x[n][2] {
        {1, 1}, // Row 1
        {2, 2}, // Row 2
        {3, 3}  // Row 3
        // Limit row n
    }*/
}