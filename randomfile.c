#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
int randNum(){
  int c;
  int file = open("/dev/random",O_RDONLY);
  read(file,&c,sizeof(c));
  close(file);
  return c;
}
int main(void) {
  int arr[10];
  for(int i=0;i<10;i++){
    arr[i]=randNum();
    printf("What is arr[%d]??:%d\n",i,arr[i]);
  }
  int file=open("file.txt",O_WRONLY | O_CREAT);
  write(arr,sizeof(int),sizeof(arr),file);
  close(file);
  int file2=open("file.txt",O_RDONLY);
  read(arr,sizeof(int),sizeof(arr),file2);
  close(file2);
  return 0;
}
