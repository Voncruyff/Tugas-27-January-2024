#include <stdio.h>

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(nums) / sizeof(nums[0]); 
  int k = 3;
  int temp, i, j;
  
  for (i = 0; i < k; i++) {
    temp = nums[n-1];
    for (j = n-1; j > 0; j--) {
      nums[j] = nums[j-1];
    }
    nums[0] = temp;
  }

  for (i = 0; i < n; i++) {
    printf("%d ", nums[i]);
  }
  
  return 0;
}