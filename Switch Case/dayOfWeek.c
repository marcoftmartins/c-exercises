#include <stdio.h>

int main(){
  int day;
  /* Gets input from user */
  printf("Enter a value from 1 to 7 :");
  scanf("%d",&day);
  /* Returns respective day */
  switch (day){
  case 1 : printf("Your day is Monday!");break;
  case 2 : printf("Your day is Tuesday!");break;
  case 3 : printf("Your day is Wednesday!");break;
  case 4 : printf("Your day is Thursday!");break;
  case 5 : printf("Your day is Friday!");break;
  case 6 : printf("Your day is Saturday!");break;
  case 7 : printf("Your day is Sunday!");break; 
  default: printf("The value you inserted is not a valid day");break;
  }
}