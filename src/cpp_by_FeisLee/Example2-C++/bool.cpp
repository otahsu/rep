#include <stdio.h>
#include <stdlib.h>

int main() {
  if (true) {
    printf("True\n");
  }

  if (false) {
    printf("False\n");
  }

  bool a = (3 == 3);  // ��ڤW�o��( ) �i�H�ٲ� 

  if (a) {
    printf("3 == 3\n");
  } else {
    printf("3 != 3\n");
  } 

  printf("true: %d\n",  (int) true);  // ��ڤW�o�̪��૬�i�H�ٲ� 
  printf("false: %d\n", (int) false); // ��ڤW�o�̪��૬�i�H�ٲ� 

  system("pause");
  return 0;
} 
