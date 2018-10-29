#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
int main(void) {
  int *c = malloc(sizeof(char));
  int* arr=malloc(sizeof(int));
  int file = open("/dev/random",O_RDONLY);
  int something = read("/dev/random",c,10);
  printf("Hello World %d\n",c);
  return 0;
}
int* randomarr(){
  int* arr=malloc(sizeof(int));
  int file = open("/dev/random",O_RDONLY);
  return arr;

}
