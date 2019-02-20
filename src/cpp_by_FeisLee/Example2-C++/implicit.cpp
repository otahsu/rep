#include <stdio.h>
#include <stdlib.h>

class Grade {
 public:
  Grade() {
    data_ = 0;
  }
  Grade(int v) {
    data_ = v;
  } 
  void Set(int v) { 
    data_ = v;
  }
  int Get() const { 
    return data_;
  }

 private:
  int data_;
}; 

const Grade Add1(const Grade &lhs, const Grade &rhs) {
  return Grade(lhs.Get()+rhs.Get());
}

const Grade Add2(const Grade &lhs, const Grade &rhs) {
  return lhs.Get()+rhs.Get();     // �o�̷|�������૬�N int �ର Grade(int) 
}

int main() {
  Grade a = Add1(3, 5);    // ��Ӥ޼Ƥ��O�|�����૬�� Grade(3) �� Grade(5) 
  printf("a: %d\n", a.Get());

  a = 3;       // �o�̷|�������૬�N int(3) �ର Grade(3) �M���x�s�b a �̭� 
  printf("a: %d\n", a.Get());

  Grade b; 
  b = Add1(a, 5);
  printf("b: %d\n", b.Get());

  Grade c; 
  c = Add2(3, 5);
  printf("c: %d\n", c.Get());

  system("pause");
  return 0;
} 
