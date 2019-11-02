#include<stdlib.h> 
#include<stdio.h>
#include <stdint.h> 


int main () {

  FILE *fp = fopen("tmp.machine", "rw");
  fseek(fp, 0L, SEEK_END);
  int sz = ftell(fp);
  rewind(fp);

  
  printf("Byte size of buffer is %d\n",sz);

  uint32_t* buffer;
  
  buffer = (uint32_t*) malloc((sz/4) * sizeof(uint32_t));

  fread(buffer, sz, 8, fp);
  printf("%s\n", buffer);

  

  


  

}
