#include <cstdio>
#include <cstdlib>

using namespace std;

namespace A {
  void B() { 
    printf("���� ::A::B()");
  }
  void C() {  
    printf("���� ::A::C() -> ");
    printf("�I�s B() -> "); 
    B();     
  }
}

void B() { 
  printf("���� ::B()"); 
}

int main() { 
  printf("���� ::main \n");

  printf("�I�s B() -> ");  
  B();   // �|�յ۩I�s ::B() �M ::std::B() -> ���G�O ::B() 
  printf("\n");

  printf("�I�s ::B() -> "); 
  ::B(); // �|�յ۩I�s ::B()
  printf("\n");

  printf("�I�s  A::B() -> "); 
  A::B(); // �|�I�s ::A::B() �M ::std::A::B() -> ���G�O ::A::B() 
  printf("\n");

  printf("�I�s ::A::B() -> "); 
  ::A::B(); // �|�I�s�@::A::B() 
  printf("\n");

  printf("�I�s A::C() -> "); 
  A::C();   // �|�I�s  ::A::C() �M ::std::A::C() -> ���G�O ::A::C() 
  printf("\n");

  printf("�I�s ::A::C() -> "); 
  ::A::C(); // �|�I�s  ::A::C() 
  printf("\n");

 
  using namespace A;
  // using A::B;
  // using ::B;
  printf("�I�s B() -> ");  
  B();     // [�sĶ���~] �o�̪� B() ���X�إi�� ?   ���� ? 
  printf("\n");

  printf("�I�s ::B() -> "); 
  ::B();
  printf("\n");

  system("pause");
  return 0;
}
