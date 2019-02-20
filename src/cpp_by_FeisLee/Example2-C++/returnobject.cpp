#include <stdio.h>
#include <stdlib.h>

class Grade {
 public:
  void Set(int v) { 
    data_ = v;
  }
  int Get() const {   // �o�� const �� Get() �i�H�Q const Grade �I�s 
    return data_;
  }

 private:
  int data_;
}; 

Grade Add0(Grade lhs, Grade rhs) {                // �禡�ǭ� 
  Grade ret;
  ret.Set(lhs.Get()+rhs.Get());
  return ret;
}

Grade Add1(Grade &lhs, Grade &rhs) {              // �禡�ǰѦ�: ������Ĳv�������I 
  Grade ret;
  ret.Set(lhs.Get()+rhs.Get());
  // lhs.Set(0);                                  // Add1 �̭����i�ण�p�ߧ��޼ƪ����L 
  return ret;
}

Grade Add2(const Grade &lhs, const Grade &rhs) {  // �禡�ǩT�w�ȰѦ� 
  Grade ret;
  ret.Set(lhs.Get()+rhs.Get());
  return ret;
}

const Grade Add3(const Grade &lhs, const Grade &rhs) {  // �禡�ǩT�w�ȰѦҨæ^�ǩT�w�� 
  Grade ret;
  ret.Set(lhs.Get()+rhs.Get());
  return ret;
}

int main() {
  Grade a, b;
  a.Set(3);
  b.Set(5);

  Grade c;
  c.Set(10);
  Grade d = Add0(Add0(a, b), c);    // �|�ݭn�ƻs�ܦh�� Grade ���� 
  Grade e = Add1(Add1(a, b), c);    // [�sĶ���~] �в������� 
  Grade f = Add2(Add2(a, b), c); 
  printf("d: %d\n", d.Get());
  printf("e: %d\n", f.Get());

  Add2(a, b).Set(8);                // �S���sĶ���~�ä��X�z 

  Add3(a, b).Set(8);                // [�sĶ���~] �в������� 

  printf("%d\n", Add3(a, b).Get()); // �S���sĶ���~ 

  system("pause");
  return 0;
} 
