#include <cstdio>
#include <cstdlib>

// ��� :: (����) ���R�W�Ŷ� 

namespace A { // �o�өR�W�Ŷ����W�� ::A
 
  void B() { // �o�Ө禡�����W�� ::A::B() 
    std::printf("���� ::A::B()");
  }

  void C() { // �o�Ө禡�����W�� ::A::C() 
    std::printf("���� ::A::C() -> ");
    std::printf("�I�s B() -> "); 
    B();     // �|�յ۩I�s ::A::B() (�۹���|) 
  }
}

void B() { // ���W�� ::B() 
  std::printf("���� ::B()"); 
}

int main() { // ���W�� ::main()
 
  std::printf("���� ::main \n"); // �|�I�s ::std::printf()

  std::printf("�I�s B() -> ");   
  B();   // �|�I�s ::B()           (�۹���|) 
  std::printf("\n");
 
  std::printf("�I�s ::B() -> "); 
  ::B(); // �|�I�s ::B()           (������|) 
  std::printf("\n");

  std::printf("�I�s A::B() -> "); 
  A::B(); // �|�I�s ::A::B()       (�۹���|) 
  std::printf("\n");

  std::printf("�I�s ::A::B() -> "); 
  ::A::B(); // �|�I�s�@::A::B()    (������|) 
  std::printf("\n");

  std::printf("�I�s A::C() -> "); 
  A::C();   // �|�I�s  ::A::C()    (�۹���|) 
  std::printf("\n");

  std::printf("�I�s ::A::C() -> "); 
  ::A::C(); // �|�I�s  ::A::C()    (������|) 
  std::printf("\n");

  std::system("pause");
  return 0;
}
