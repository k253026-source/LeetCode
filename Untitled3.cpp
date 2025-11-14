#include <stdio.h>

void transformArray(int nums[], int n, int result[]) {
 
    for(int i = 0; i < n; i++) {
        if(nums[i] % 2 == 0)
            result[i] = 0;
        else
            result[i] = 1;
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(result[j] > result[j+1]) {
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
}

int main() {
    int nums[] = {4, 3, 2, 1};
    int n = 4;
    int result[100];

    transformArray(nums, n, result);

    for(int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

