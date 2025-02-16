// corrected compilation command: gcc main.c -lm

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool canJump(int* nums, int numsSize) {
    int longest = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > longest)
            return false;
        else
            longest = fmax(longest, i + nums[i]);
    }
    return true;
}

int main() {
    int nums1[] = {2, 3, 1, 1, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: nums = [2,3,1,1,4]\n");
    printf("Output: %s\n", canJump(nums1, size1) ? "true" : "false");

    int nums2[] = {3, 2, 1, 0, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: nums = [3,2,1,0,4]\n");
    printf("Output: %s\n", canJump(nums2, size2) ? "true" : "false");

    return 0;
}
