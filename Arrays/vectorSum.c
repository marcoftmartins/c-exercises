#include <stdio.h>

int main() {
  int sum = 0, i, size;
  /* Get the array size */
  printf("Enter array size : ");
  scanf("%d",&size);
  int nums[size];
  /* Get elements and store into  */
  for (i=0;i<size;i++){
    printf("Array value (%d) : ",i+1); 
    scanf("%d",&nums[i]);
  }
  for (i=0;i<size;i++){
    sum+=nums[i];
  }
  /* Prints the sum */
  printf("Sum of the array = %d",sum);
}