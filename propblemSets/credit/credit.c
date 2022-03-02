#include <cs50.h>
#include <stdio.h>


long remove_last(long card);
int get_length(long x);

int sumDoubleCardNumber (int digit);
void checkMC(long last2);
int main(void)
{
// Take card number from user
long card = get_long("Number: ");

// count the card length
int length = 0;
long cc = card;
// Drop all the numbers until zero, and count the amount of loops it takes to get the length
while(cc > 0){
  cc = cc / 10;
  length++;
}
// Card numbers that can only have 13, 15 or 16 digits
if(length != 13 && length != 15 && length != 16){
  printf("INVALID\n");
  return 0;
}

int not_doubled_sum = 0;
int sum2 = 0;
long x = card;
int total =0;
int last;
int mod2;
int second_to_last;
int mult;
int addProducts = 0;
do
{
  // Sum numbers that are not doubled
  last = x% 10;
  x = x/10;
  // printf("last, %i \n", last);
  not_doubled_sum += last;

// double second to last numbers and add the products
// find
  second_to_last = x% 10;
  x = x/10;
  sum2 += second_to_last;
  // double
  mult = sumDoubleCardNumber(second_to_last);
  // add
  addProducts += mult;
}
while(x > 0);

// inizialize for checking start digits
long last2 = card;
// add result of number that are and are no doubled
// if The number is NOT divisible by 10, the number is INVALID
total = addProducts + not_doubled_sum;
if(total % 10 != 0){
  printf("INVALID\n");
}else{

  if(length == 13 ){
    printf("VISA\n");
    // VISA always start with 4 second_to_last has the first number of the cc, it got it on the doWhile loop above. 
  }else if(length == 16 && second_to_last == 4){
    printf("VISA\n");

  }else if(length == 15){

    do {
      last = last2 % 10;
      last2= last2 /10;
    }
    while(last2 >= 38);
    if(last2 == 34 || last2 == 37){
      printf("AMEX\n");
    }else{
      printf("INVALID\n");
    }

  }else {

    last2 = card;
    checkMC(last2)
  }

}

} // END OF MAIN
void checkMC(long last2){
  do {
      last = last2 % 10;
      last2= last2 /10;
    }
    while(last2 >= 56);
    if(last2 >= 51 && last2 <=55){
      printf("MASTERCARD\n");
    }else{
      printf("INVALID\n");
    }
}
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
