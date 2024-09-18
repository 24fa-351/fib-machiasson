#include <stdio.h>
#include <stdlib.h>

char *endptr;
unsigned long long int number = 0, fileInt, recursiveFibNumber, firstNum = 0, secondNum = 0, finalNum = 1;

int recursiveFibonacci(int n){
   if (n<=1){
      return n;
   } else {
      return (recursiveFibonacci(n-1)+recursiveFibonacci(n-2));
   }
}

int fib_wrapper(int n){
   if(number==0){
      printf("%lld", number);
      return 0;
    }
    if(number==1){
      printf("%lld", number);
      return 1;
    }
}

int main(int argc, char *argv[]) {
   number=strtol(argv[1], &endptr, 10);
    FILE *file;
    file = fopen(argv[3], "r");
    fscanf(file, "%lld", &fileInt);
    fclose(file);
    number += fileInt;
    fib_wrapper(number);
    if(argv[2][0]=='i'||argv[2][0]=='I'){
      for (int i = 3; i <= number; i++) {
            secondNum = firstNum + finalNum;
            firstNum = finalNum;
            finalNum = secondNum;
         }
         printf("%lld", finalNum);
         return finalNum;
    }
    else {
      number--;
      recursiveFibNumber=recursiveFibonacci(number);
      printf("%lld", recursiveFibNumber);
    }
}