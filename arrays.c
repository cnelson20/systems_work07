#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRINTARRAY(a) printf("{");do{int i; for(i = 0; i < (sizeof(a)/sizeof(a[0])); i++) {if(i!=0){printf(", ");}printf("%d",a[i]);}printf("}\n");} while (0);
#define PRINTARRAYPOINTER(a,bytes) printf("{");do{int i; for(i = 0; i < bytes; i++) {if(i!=0){printf(", ");}printf("%d",a[i]);}printf("}\n");} while (0);
void printarray(int *array,unsigned int length);
float avgarray(int *array,unsigned int length);
void arraycopy(char *a,char*b,size_t bytes);
int main();


int main() {
  int arraytoprint[20];
  int i;
  srand(time(NULL));
  for (i = 0; i < (sizeof(arraytoprint) / sizeof(int)); i++) {
    arraytoprint[i] = rand();
  }
  printarray(arraytoprint,sizeof(arraytoprint) / sizeof(int));
  printf("Avg: %2.6f\n",avgarray(arraytoprint,sizeof(arraytoprint) / sizeof(int)));
  char *arrayaschar = malloc(sizeof(arraytoprint));
  arraycopy(arraytoprint,arrayaschar,sizeof(arraytoprint));
  PRINTARRAYPOINTER(arrayaschar,sizeof arraytoprint);
  return 0;
}

void printarray(int *array,unsigned int length) {
  int i;
  printf("[ ");
  for (i = 0; i < length; i++) {
    printf("%d ",array[i]);
  }
  printf("]\n");
}

float avgarray(int *array,unsigned int length) {
  int i;
  float avg = 0;
  for (i = 0; i < length; i++) {
    avg += (float)(array[i]); 
  }
  return avg / length;
}

void arraycopy(char *a,char *b,size_t bytes) {
  int i;
  for (i = 0; i < bytes; i++) {
    b[i] = a[i];
  }
}
