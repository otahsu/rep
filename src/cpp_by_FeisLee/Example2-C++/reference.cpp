#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 0;
  printf("a: %d\n", a);

  // �ϥΤ@�뫬�A 
  int b = a;
  b = 1;
  printf("a: %d\n", a);

  // �ϥΫ��� 
  int *c = &a;
  *c = 2;
  printf("a: %d\n", a);

  // �ϥΰѦ� 
  int &d = a;
  d = 3;
  printf("a: %d\n", a);

  system("pause");
  return 0;
} 
