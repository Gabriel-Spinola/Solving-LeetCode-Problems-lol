#include <algorithm>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (vector<int>::iterator i = nums.begin(); i != nums.end(); ++i) {
            if (*i == val) {
                nums.erase(i);

                // Makes sure we check all numbers
                // in the vector
                i--;
            }
        }

        int k = nums.size();
        return k;
    }
};  