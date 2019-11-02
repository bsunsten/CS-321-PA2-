#include<stdlib.h> 
#include<stdio.h>
#include <stdint.h> 
#include <inttypes.h>
#include <endian.h>


int main () {

  FILE *fp = fopen("tmp.txt.machine", "r");

  if(fp == NULL)
    printf("Error in file opening\n");

  fseek(fp, 0L, SEEK_END);

  int sz = ftell(fp);
  fseek(fp, 0L, SEEK_SET);

  printf("Byte size of buffer is %d\n",sz);

  uint32_t* buffer;

  buffer = (uint32_t*) malloc(sz);



  

  fread(buffer, 1, sz, fp);

  for(int i = 0; i < (sz/4); i++){

    buffer[i] = be32toh(buffer[i]);

  }


  printf("The contents of the buffer: %x \n", (unsigned long)buffer[0]);

  fclose(fp);
  return 0;
  

  

  


  

}
