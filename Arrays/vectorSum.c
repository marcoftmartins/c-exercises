#include <stdio.h>

int main() {
  int sum = 0, i, size;
  /* Gets array size from user input*/
  printf("Enter array size : ");
  scanf("%d",&size);
  int nums[size];
  /* User input elements and store into array */
  for (i=0;i<size;i++){
    printf("Array value (%d) : ",i+1); 
    scanf("%d",&nums[i]);
  }
  /* Sums the value */
  for (i=0;i<size;i++){
    sum+=nums[i];
  }
  /* Prints the result */
  printf("Sum of the array = %d",sum);
}