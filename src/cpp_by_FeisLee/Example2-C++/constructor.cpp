#include <stdio.h>
#include <stdlib.h>

class Grade {
 public:
  Grade() {
    printf("���ͤ@�� Grade ����ñN�ȳ]�� 0\n");
    data_ = 0;     
  }
  Grade(int v) {
    printf("���ͤ@�� Grade ����ñN�ȳ]�� %d\n", v);
    data_ = v; 
  }
  ~Grade() {
    printf("����@�� Grade ����\n");
  }
 
 public:
  void Set(int v) {
    data_ = v;
  }
  int Get() const {
    return data_;
  }

 private:
  int data_;
};
 
int main() {
  {
    Grade a;
    Grade b = Grade();
    Grade c[3];

    printf("a = %d\n", a.Get());
    printf("b = %d\n", b.Get());
    for (int i = 0; i < 3; ++i){
      printf("c[%d] = %d\n", i, c[i].Get());
    }
  } // a, b, c ���ͩR�g���b�o�̵��� 
  system("pause");

  {
    Grade d(10);
    Grade e();       // ���� e �|�Q��@�@�Ө禡�W�� 
    Grade f = Grade(10);
    Grade g = 10;
    printf("d = %d\n", d.Get());
    printf("e = %d\n", e.Get());  // [�sĶ���~] �в������� 
    printf("f = %d\n", f.Get());
    printf("g = %d\n", g.Get());
  } // d, f, g ���ͩR�g���b�o�̵��� 
  system("pause");

  return 0;
} 
