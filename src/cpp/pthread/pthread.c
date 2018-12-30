#include <pthread.h>     // �ޥ� pthread �禡�w
#include <stdio.h>    

void *print_george(void *argu) {    // �C�j�@�����L�X�@�� George �����
  while (1) {    
    printf("George\n");    
    sleep(1);    
  }    
  return NULL;    
}    

void *print_mary(void *argu) {     // �C�j�@�����L�X�@�� Mary �����
  while (1) {    
    printf("Mary\n");    
    sleep(2);    
  }    
  return NULL;    
}    

int main() {     // �D�{���}�l
  pthread_t thread1, thread2;     // �ŧi��Ӱ����
  pthread_create(&thread1, NULL, &print_george, NULL);    // ����� print_george
  pthread_create(&thread2, NULL, &print_mary, NULL);    // ����� print_mary
  while (1) {     // �D�{���C�j�@����
    printf("----------------\n");    // �N�L�X���j��
    sleep(1);     // ����@����
  }    
  return 0;    
}

