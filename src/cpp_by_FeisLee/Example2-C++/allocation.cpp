#include <stdio.h>
#include <stdlib.h>

class Grade {
 public:   
  Grade() {   // �w�]�غc�� (default constructor) 
    printf("�t�m�@�� Grade ����\n"); 
    data_ = 0;
  } 
  ~Grade() {  // �Ѻc�� (destructor) 
    printf("����@�� Grade ����\n"); 
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

int main() {
  { 
    Grade g;       // �I�s�غc�� Grade(); 
    printf("Grade: %d\n", g.Get());
    g.Set(100);
    printf("Grade: %d\n", g.Get());
  } // g ���ͩR�g������, �I�s�Ѻc�� ~Grade(); 
  system("pause");
  return 0;
} 
