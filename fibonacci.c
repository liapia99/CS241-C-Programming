#include <stdio.h>

int Fibonacci(int n) {
   if(n < 2){
    n = n;
   }else{
    n = Fibonacci(n - 1) + Fibonacci(n - 2);
   }
      
}

int main() {
   int startNum;
      
   scanf("%d", &startNum);
   printf("Fibonacci(%d) is %d\n", startNum, Fibonacci(startNum));

   return 0;
}
