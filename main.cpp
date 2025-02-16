#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
 public:
  bool canJump(std::vector<int>& nums) {
    int i = 0;

    for (int reach = 0; i < nums.size() && i <= reach; ++i)
      reach = std::max(reach, i + nums[i]);

    return i == nums.size();
  }
};

int main() {
  Solution solution;

  // Example 1:
  std::vector<int> nums1 = {2, 3, 1, 1, 4};
  std::cout << "Input: nums = [";
  for (int i = 0; i < nums1.size(); ++i) {
    std::cout << nums1[i];
    if (i < nums1.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
  std::cout << "Output: " << (solution.canJump(nums1) ? "true" : "false") << std::endl;

  // Example 2:
  std::vector<int> nums2 = {3, 2, 1, 0, 4};
  std::cout << "Input: nums = [";
  for (int i = 0; i < nums2.size(); ++i) {
    std::cout << nums2[i];
    if (i < nums2.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
  std::cout << "Output: " << (solution.canJump(nums2) ? "true" : "false") << std::endl;

  return 0;
}
