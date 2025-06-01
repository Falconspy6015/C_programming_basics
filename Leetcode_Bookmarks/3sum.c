#include <stdio.h>
#include <stdlib.h>

int compareFunction(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;

    // Start with an initial capacity
    int capacity = 16;

    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(capacity * sizeof(int));

    // Allocate memory for the answer
    int** ans = (int**)malloc(capacity * sizeof(int*));

    // Sort the array
    qsort(nums, numsSize, sizeof(int), compareFunction);

    for (int i = 0; i < numsSize - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicate `i` values
        }

        int target = -nums[i];
        int j = i + 1;
        int k = numsSize - 1;

        while (j < k) {
            int sum = nums[j] + nums[k];

            if (sum == target) {
                // Resize if necessary
                if (*returnSize == capacity) {
                    capacity *= 2;
                    ans = (int**)realloc(ans, capacity * sizeof(int*));
                    *returnColumnSizes = (int*)realloc(*returnColumnSizes, capacity * sizeof(int));
                }

                // Allocate memory for the new triplet
                ans[*returnSize] = (int*)malloc(3 * sizeof(int));
                ans[*returnSize][0] = nums[i];
                ans[*returnSize][1] = nums[j];
                ans[*returnSize][2] = nums[k];

                // Update returnColumnSizes
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                // Move pointers and skip duplicates
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                }
                while (j < k && nums[k] == nums[k + 1]) {
                    k--;
                }
            } else if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }

    return ans;
}
