#include <stdarg.h>
#include <stdio.h>

int sum(unsigned int n, ...){

    if n == 0{
    return 0;
}

int result = 0;
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++){
    result += va_args(args, int);
}
va_end args;
return result;
}

int main(){

  printf("Sum: %d\n", sum_them_all(3, 4, 8, 12));
  printf("Sum: %d\n", sum_them_all(5, 2, 4, 6, 8, 10));
  print("Sum: %d\n", sum_them_all(0));

  return 0
}
