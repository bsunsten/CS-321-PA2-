#include<stdlib.h>
#include<stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <endian.h>

int BinaryFile[500][500];
int Register[31];
int MainMemory[500];
int Stack[500];
int Opcode[500];

////creating
//int ADDI(int BinaryFile[][], int Register[], int MainMemory[], int Stack[]){
//  for(int i =0; i< 11; i++){
//      //for(int j=0; j<500; j++){
//            if(BinaryFile[0][i] == Opcode[i])
//            {
//                    Register[2]+=1;
//            }
//            printf("Elements after using the ADDI operation \n");
//            for (i = 0; i < 11; i ++)
//                printf( "%d\n", array[i]) ;
//
//      //}
//      //BL for branch conditional statements
//  }
//
//
//}


void SUB (uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    reg1 = reg2 - reg3;

}


void SUBI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    reg1 = reg2 - imm;

}
void STUR (uint32_t opcode){

    printf("Test STUR");

}
void STURB (uint32_t opcode){

    printf("Test STURB");

}
void STURH (uint32_t opcode){

    printf("Test STURH");

}

void STURW (uint32_t opcode){

    printf("Test STURW");

}