#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
//I THINK IT WORKS FIRST TIME IT RUNS IT MATCHES!!!!
int randNum(){
  int c;
  int file = open("/dev/random",O_RDONLY);
  read(file,&c,sizeof(c));
  close(file);
  return c;
}
int main(void) {
  int arr[10];
  printf("Starting array %d\n",&arr);
  for(int i=0;i<10;i++){
    arr[i]=randNum();
    printf("What is arr[%d]??:%d\n",i,arr[i]);
  }
  printf("\n\n");
  int file=open("file.txt",O_WRONLY | O_CREAT);
  write(file,&arr,sizeof(int)*10);
  close(file);
  int file2=open("file.txt",O_RDONLY);
  read(file2,&arr,sizeof(int)*10);
  close(file2);
  printf("What is my array??%d\n",&arr);
  for(int i=0;i<10;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
  }
  return 0;
}
