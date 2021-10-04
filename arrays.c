#include <stdio.h>
#include <stdlib.h>
int printarray(int *array,unsigned int length);
float avgarray(int *array,unsigned int length);
int arraycopy(char *a,char*b,size_t bytes);
int main();


int main() {
  int arraytoprint[20];
  int i;
  for (i = 0; i < 20; i++) {
    arraytoprint[i] = i;
  }
  
  return 0;
}

int printarray(int *array,unsigned int length) {
  int i;
  printf("[ ");
  for (i = 0; i < length; i++) {
    printf("%d ",i);
  }
  printf("]\n");
}

int avgarray(int *array,unsigned int length) {
  int i;
  float avg = 0;
  for (i = 0; i < length; i++) {
    avg += (float)(array[i]); 
  }
  return avg / length;
}

int arraycopy(char *a,char *b,size_t bytes) {
  int i;
  for (i = 0; i < bytes; i++) {
    b[i] = a[i];
  }
}
