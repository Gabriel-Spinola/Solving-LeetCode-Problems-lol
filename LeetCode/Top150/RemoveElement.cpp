// https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150

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

        /// # Other solution, but a little slower
        // [&] gets outer variables as reference
        {
            nums.erase(std::remove_if(nums.begin(), nums.end(), [&](const int& i) {
                return i == val;
            }), nums.end());
        }
    }
};  