#include <stdio.h>
#include <stdlib.h>


int main() {
  int a = 3;

  int &b = a;         // b �� a ���Ѧ�

  int &c = 3;         // [�sĶ���~]

  const int &d = 3;   // d �O�өT�w�ȰѦ�
 
  system("pause");
  return 0;
}
