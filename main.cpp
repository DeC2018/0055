#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;

        for (int reach = 0; i < nums.size() && i <= reach; ++i)
            reach = max(reach, i + nums[i]);

        return i == nums.size();
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {2, 3, 1, 1, 4};
    cout << "Input: nums = [2,3,1,1,4]" << endl;
    cout << "Output: " << (solution.canJump(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {3, 2, 1, 0, 4};
    cout << "Input: nums = [3,2,1,0,4]" << endl;
    cout << "Output: " << (solution.canJump(nums2) ? "true" : "false") << endl;

    return 0;
}
