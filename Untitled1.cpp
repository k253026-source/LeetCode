#include <stdio.h>

void runningSum(int nums[], int n, int result[]) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
        result[i] = sum;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = 4;
    int result[4];

    runningSum(nums, n, result);

    for(int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

