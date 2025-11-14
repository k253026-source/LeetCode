#include <stdio.h>

void shuffleArray(int nums[], int n, int result[]) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        result[j++] = nums[i];
        result[j++] = nums[i + n];
    }
}

int main() {
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;
    int result[6];

    shuffleArray(nums, n, result);

    for(int i = 0; i < 2*n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

