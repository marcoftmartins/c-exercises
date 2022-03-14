#include <stdio.h>

int main() {
  int sum = 0;
  int i;
  int nums[5];
  for (i=0;i<5;i++){
    printf("Input a value :");
    scanf("%d",&nums[i]);
  }
  for (i=0;i<5;i++){
    sum+=nums[i];
  }
  printf("Vector sum = %d",sum);
}