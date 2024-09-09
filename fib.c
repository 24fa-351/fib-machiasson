#include <stdio.h>
#include <stdlib.h>

int recursiveFibonacci(int n){
   if (n<=1){
      return n;
   } else {
      return (recursiveFibonacci(n-1)+recursiveFibonacci(n-2));
   }
}

int main(int argc, char *argv[]) {
    char *endptr;
    int number = strtol(argv[1], &endptr, 10), fileInt, recursiveFibNumber, firstNum = 0, secondNum = 0, finalNum = 1;
    FILE *file;
    file = fopen(argv[3], "r");
    fscanf(file, "%d", &fileInt);
    fclose(file);
    number += fileInt;
    if(argv[2][0]=='i'||argv[2][0]=='I'){
         for (int i = 3; i <= number; i++) {
            secondNum = firstNum + finalNum;
            firstNum = finalNum;
            finalNum = secondNum;
         }
         printf("%d", finalNum);
         return finalNum;
    }
    else{
         number--;
         recursiveFibNumber=recursiveFibonacci(number);
         printf("%d", recursiveFibNumber);
    }
}