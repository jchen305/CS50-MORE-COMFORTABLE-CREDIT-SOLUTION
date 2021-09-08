#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int count(long card)
{
  int nDigits = floor(log10(labs(card))) + 1;
  return nDigits;
}

int main(void)
{
  long card;

    card = get_long("Card number:\n");
    int a = count(card);

    int digits[a];
    for (int i = a - 1; i >= 0; i--){
      digits[i] = card % 10;
      card = card / 10;
    }
    int sum = 0, sum2 = 0, sum3 = 0;
    if (a % 2 == 0){
         for (int i = 0; i < a; i++){
      if (i % 2 == 0){
        int c = digits[i]*2;
        if (c < 9)
        sum = sum + c;
      else{
        int c1 = c % 10;
        int c2 = c / 10;
        sum = sum + c1 + c2;
      }

      }
      if (i % 2 != 0){

        sum2 = sum2 + digits[i];
      }
      sum3 = sum2 + sum;
    }
    }else{    for (int i = 0; i < a; i++){
      if (i % 2 != 0){
        int c = digits[i]*2;
        if (c < 9)
        sum = sum + c;
      else{
        int c1 = c % 10;
        int c2 = c / 10;
        sum = sum + c1 + c2;
      }

      }
      if (i % 2 == 0){

        sum2 = sum2 + digits[i];
      }
      sum3 = sum2 + sum;
      }
      }

    if (sum3 % 10 == 0){
      if (a == 15){
        if (digits[0] == 3){
          if (digits[1] == 4 || digits[1] == 7) {printf("AMEX\n");}else{printf("INVALID\n");}
        }
      }else if (a == 13){
        if (digits[0] == 4){printf("VISA\n");} else{printf("INVALID\n");}
      }else if (a == 16){
        if (digits[0] == 4){printf("VISA\n");}
        else if (digits[0] == 5){
          if (digits[1] >= 1 && digits[1] <= 5) {printf("MASTERCARD\n");}else{printf("INVALID\n");}
        }else{printf("INVALID\n");}
      }else{printf("INVALID\n");}
    }
    else{printf("INVALID\n");}
    //printf("%d,", sum);printf("%d,", sum2);printf("%d,", sum3);

}
