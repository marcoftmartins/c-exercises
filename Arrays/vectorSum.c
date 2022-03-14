#include <stdio.h>

int main() {
  int sum = 0, i, size;
  printf("Enter array size : ");
  scanf("%d",&size);
  int nums[size];
  for (i=0;i<size;i++){
    printf("Array value (%d) : ",i+1); 
    scanf("%d",&nums[i]);
  }
  for (i=0;i<size;i++){
    sum+=nums[i];
  }
  printf("Sum of the array = %d",sum);
}