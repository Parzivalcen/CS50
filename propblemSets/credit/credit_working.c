#include <cs50.h>
#include <stdio.h>


long remove_last(long card);
int get_length(long x);

int sumDoubleCardNumber (int digit);
int main(void)
{

// GET 2 FIRST NUMBERS
int last;
long last2 = 5673598276138003;
do {
  last = last2 % 10;
  last2= last2 /10;
printf("LAST : %i\n",last);
}
while(last2 >= 56);
if(last2 >= 51 && last2 <=55){
      printf("MASTERCARD\n");
    }else{
      printf("INVALID\n");
    }


} // END OF MAIN

// Deal with doubled numbers(more than 10)
// we treat numbers as individuals, so only numbers from 0-9 can double, this would not works in numbers larger that 9 doubled.
int sumDoubleCardNumber (int digit) {
  int double_digit = digit*2;
  int sum;
  if(double_digit >= 10){
      sum = 1 + double_digit % 10;
    }else{
      sum = double_digit;
    }
  return sum;
}


long remove_last(long card){
  long card_number = card;
  long remove_last = card / 10;
  return remove_last;
}

int get_length(long x) {
    if (x >= 100000000000000) return 16;
    if (x >= 10000000000000) return 15;
    if (x >= 10000000000000) return 14;
    if (x >= 1000000000000) return 13;
    if (x >= 100000000000) return 12;
    if (x >= 10000000000) return 11;
    if (x >= 1000000000) return 10;
    if (x >= 100000000)  return 9;
    if (x >= 10000000)   return 8;
    if (x >= 1000000)    return 7;
    if (x >= 100000)     return 6;
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
}