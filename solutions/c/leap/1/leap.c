#include "leap.h"
#include "stdio.h"

bool leap_year(int year);

/*
int main(void) {
  int year_test = 1605;

  if (leap_year(year_test)){
    printf("The year %d is a leap year!\n", year_test);
  }
  else{
    printf("Nope\n");
  }
  return 0;
}
  */

bool leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/*
bool leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            return true;
        }
        else if (year % 100 == 0) {
            return false;
        }
    }
    return false;
}
*/



/*
bool leap_year(int year) {
    if (year % 400 == 0){
        return true;
    }
    if (year % 2 == 0 && !(year % 4 == 0)){
        return false;
    }
    else if (year % 100 == 0){
        return false;
    }
    else {
        return year % 4 == 0;
    }
}
*/

/*bool leap_year(int year) {
  if ((year % 4 == 0) && (year % 400 == 0 || !(year % 100 == 0))) {
    printf("the year %d is a leap year!\n", year);
    return true;
  }
  else {
    printf("the year %d is not a leap year\n", year);
    return false;
  }
}*/
