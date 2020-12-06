/* If a five-digit number is input through the keyboard, write a
program to reverse the number.
Author Majid Mujahid Hussain Dated 06 December 2020.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, reverse = 0, remainder = 0;
     printf("Hello world!\n");
     printf("Please enter a 5 - digit number\n");
     scanf("%d", &number);

     // to reverse the number

     //going for the last digit.
     //splitting the number.
     remainder = number % 10;
     //printf("\n the remainder / splitted number is %d", remainder);

     //reversed number is
      reverse = reverse + (remainder * 10000);
      //printf("\n the reversed number is %d", reverse);

      // removing the splitted number.
      number = number / 10;
     // printf("\n the new number after splitting is %d", number);

     //going for the  second last digit.
     //splitting the number.
     remainder = number % 10;
     //printf("\n the remainder / splitted number is %d", remainder);

     //reversed number is
      reverse = reverse + (remainder * 1000);
      //printf("\n the reversed number is %d", reverse);

      // removing the splitted number.
      number = number / 10;
      //printf("\n the new number after splitting is %d", number);

     //going for the third  last digit.
     //splitting the number.
     remainder = number % 10;
     //printf("\n the remainder / splitted number is %d", remainder);

     //reversed number is
      reverse = reverse + (remainder * 100);
      //printf("\n the reversed number is %d", reverse);

      // removing the splitted number.
      number = number / 10;
     // printf("\n the new number after splitting is %d", number);

     //going for the fourth last digit.
     //splitting the number.
     remainder = number % 10;
     //printf("\n the remainder / splitted number is %d", remainder);

     //reversed number is
      reverse = reverse + (remainder * 10);
      //printf("\n the reversed number is %d", reverse);

      // removing the splitted number.
      number = number / 10;
     // printf("\n the new number after splitting is %d", number);

     //going for the last digit.
     //splitting the number.
     remainder = number % 10;
     //printf("\n the remainder / splitted number is %d", remainder);

     //reversed number is
      reverse = reverse + (remainder);
      printf("\n the reversed number is %d", reverse);

      // removing the splitted number.
      number = number / 10;
      //printf("\n the new number after splitting is %d", number);

    return 0;
}
