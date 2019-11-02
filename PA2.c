#include<stdlib.h> 
#include<stdio.h>
#include <stdint.h> 
#include <inttypes.h>
#include <endian.h>
#include <math.h>


uint32_t decimalToBinary(uint32_t n);



int main (int argc, char *argv[]) {

  //TODO: Implement get value from parsed cmd argument
  int memsize = 1024


  //allocate space for registers
  uint32_t registers[32];

  //create an enum for use with registers to make things more readable
  enum regNames = {X0, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16, X17, X18, X19, X20, X21, X22, X23, X24, X25, X26, X27, X28, X29, X30, X31};

  uint32_t mainmem[memsize]; 

  uint32_t* buffer;

  //TODO: Implement get filepath from parsed cmd argument
  FILE *fp = fopen("tmp.txt.machine", "r");

  //Check if file found successfully
  if(fp == NULL)
    printf("Error in file opening\n");


  //get size of file in sz
  fseek(fp, 0L, SEEK_END);
  int sz = ftell(fp);
  fseek(fp, 0L, SEEK_SET);


  //allocate buffer size
  buffer = (uint32_t*) malloc(sz);

  //read into buffer from file
  fread(buffer, 1, sz, fp);

  //convert to host endianness
  for(int i = 0; i < (sz/4); i++){

    buffer[i] = be32toh(buffer[i]);

  }

  
  
  printf("The contents of the buffer: %032lu \n", buffer[0]);

  fclose(fp);
  return 0;
    

}

