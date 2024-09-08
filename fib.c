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
    int number = strtol(argv[1], &endptr, 10), fileInt, recursiveFibNumber, a = 0, b = 1, c=0;
    FILE *file;
    file = fopen(argv[3], "r");
    fscanf(file, "%d", &fileInt);
    fclose(file);
    number+=fileInt;
    if(argv[2][0]=='i'||argv[2][0]=='I'){
         for (int i = 3; i <= number; i++) {
            c = a + b;
            a = b;
            b = c;
         }
         printf("%d", b);
         return b;
    }
    else{
         number--;
         recursiveFibNumber=recursiveFibonacci(number);
         printf("%d", recursiveFibNumber);
    }
}