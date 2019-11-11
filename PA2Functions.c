#include<stdint.h>
#include<stdio.h>
#include<inttypes.h>
#include "PA2Functions.h"



char printable_char(uint8_t c)
{
  return isprint(c) ? c : '.';
}


void hexdump(FILE *f, int8_t *start, size_t size)
{
  size_t i;

  for (i = 0; i < size - (size % 16); i += 16) 
  {
    fprintf(f,
            "%08x "
            " %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx "
            " %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx %02hhx "
            " |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n",
            (int32_t) i,
            start[i +  0], start[i +  1], start[i +  2], start[i +  3],
            start[i +  4], start[i +  5], start[i +  6], start[i +  7],
            start[i +  8], start[i +  9], start[i + 10], start[i + 11],
            start[i + 12], start[i + 13], start[i + 14], start[i + 15],
            printable_char(start[i +  0]), printable_char(start[i +  1]),
            printable_char(start[i +  2]), printable_char(start[i +  3]),
            printable_char(start[i +  4]), printable_char(start[i +  5]),
            printable_char(start[i +  6]), printable_char(start[i +  7]),
            printable_char(start[i +  8]), printable_char(start[i +  9]),
            printable_char(start[i + 10]), printable_char(start[i + 11]),
            printable_char(start[i + 12]), printable_char(start[i + 13]),
            printable_char(start[i + 14]), printable_char(start[i + 15]));
  }
  
  fprintf(f, "%08x\n", (int32_t) size);
}


// Add the contents of reg1 to reg2 and store in reg3
// ADD X1, X2, X3
// X1 = X2 + X3
void ADD(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    reg1 = reg2 + reg3;
    // update reg1 values
} 


// Add a register and an immediate with ADDI
// Add (immediate) adds a register value and an optionally-shifted immediate value, 
// and writes the result to the destination register
// ADDI X1, X2, imm
// X1 = X2 + imm76
void ADDI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    reg1 = reg2 + imm;
    //update reg1 value
}


// AND X1, X2, X3
// X1 = X2 & X3
// bit by bit AND
void AND(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    reg1 = reg2 & reg3;
    //update reg1 value
}


// ANDI X1, X2, imm
// X1 = X2 & imm
void ANDI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    reg1 = reg2 & imm;
    //update reg1 value
}


//B (branch) jumps unconditionally, takes a label
void B(String label)
{   
    //PC= PC + BranchAddr
    goto label;
}


// This is a CB instruction in which the RT field is not a register, but
// a code that indicates the condition extension. These have the values (base 16)
// 0 : EQ
// 1 : NE
// 2 : HS
// 3 : LO 
// 4 : MI
// 5 : PL
// 6 : VS
// 7 : VC 
// 8 : HI
// 9 : LS
// a : GE
// b : LT 
// c : GT
// d : LE
// There is a single bit condition register associated with each of these codes.
// The branch is taken if and only if the corresponding condition bit is set.  
// Bits are set and reset by SUBS and SUBIS. 
void B.cond(String label, uint4_t code)
{
    printf("B.cond was run");
    // if (FLAGS==cond)
    //PC= PC + CondBranchAddr
    
  switch(code):
    {
      case 0:
        B.EQ(label);
      case 1:
        B.NE(label);
      case 2:
        B.HS(label);
      case 3:
        B.LO(label);
      case 4:
        B.MI(label);
      case 5:
        B.PL(label);
      case 6:
        B.VS(label);
      case 7:
        B.VC(label);
      case 8:
        B.HI(label);
      case 9:
        B.LS(label);
      case 'a':
        B.GE(label);
      case 'b':
        B.LT(label);
      case 'c':
        B.GT(label);
      case 'd':
        B.LE(label);
      default:
    }
}


// Branch on equal (B.EQ): Z=1
// zero (Z) – the result that set the condition code was 0;
void B.EQ(String label)
{
    printf("B.EQ was run");
    B(label);
}


// Branch on not equal (B.NE): Z=0
// zero (Z) – the result that set the condition code was 0;
void B.NE(String label)
{
    printf("B.NE was run");
    B(label);
}


// Branch on higher than or same (B.LO): C=1;
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
void B.HS(String label)
{
    printf("B.HS was run");
    B(label);
}


// Branch on lower than (B.LO): C=0;
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit
void B.LO(String label)
{
    printf("B.LO was run");
    B(label);
}


// Branch on minus (B.MI): N=1;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.MI(String label)
{
    printf("B.MI was run");
    B(label);
}


// Branch on plus (B.PL): N=0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.PL(String label)
{
    printf("B.PL was run");
    B(label);
}


// Branch on overflow set (B.VS): V=1;
// overflow (V) – the result that set the condition code overflowed;
void B.VS(String label)
{
    printf("B.VS was run");
    B(label);
}


// Branch on overflow clear (B.VC): V=0;
// overflow (V) – the result that set the condition code overflowed; 
void B.VC(String label)
{
    printf("B.VC was run");
    B(label);
}


// Branch on higher than (B.HI): (Z=0 & C=1)
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
// zero (Z) – the result that set the condition code was 0;
void B.HI(String label)
{
    printf("B.HI was run");
    B(label);
}


// Branch on lower than or same (B.LS): ~(Z=0 & C=1)
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
// zero (Z) – the result that set the condition code was 0;
void B.LS(String label)
{
    printf("B.LS was run");
    B(label);
}


// Branch on greater than or equal (B.GE): N = V
// overflow (V) – the result that set the condition code overflowed; 
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.GE(String label)
{
    printf("B.GE was run");
    B(label);
}


// Branch on less than (B.LT): N != V
// overflow (V) – the result that set the condition code overflowed; 
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.LT(String label)
{
    printf("B.LT was run");
    B(label);
}


// Branch on greater than or equal (B.LE): (Z=0 & N=V)
// zero (Z) – the result that set the condition code was 0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.GT(String label)
{
    printf("B.GT was run");
    B(label);
}


// Branch on less than or equal (B.LE): ~(Z=0 & N=V)
// zero (Z) – the result that set the condition code was 0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.LE(String label)
{
    printf("B.LE was run");
    B(label);
}


// Branch and link (jumps to address and stores PC in LR) PC is "program counter", 
// special register that stores the address of the current instruction
void BL(String label)
{
    printf("BL was run");
  
    //R[30]=PC+4
    //PC= PC + BranchAddr //PC=PC+10000
    //__current_pc(); 
    get_pc() + 4;
    //get_pc() + ;
    goto label;
}


// Branch to register (Jumps to LR + 4 (instructions are 32 bits)
// If no +4, the BL instruction would execute again, forever.)
// This is an R instruction.  Only the opcode and Rt fields are used.  
// The remaining bits are don't-care.
// BR LR or BR X30
// LR is register X30
void BR(uint32_t reg1)
{
    printf("BR was run");
  
    //PC=R[Rt];
    //goto X30;
}


// (compare and branch if not zero, takes a register and a label
// Labels are simply "name:" in the program
// CBNZ X1, label
void CBNZ(uint32_t reg1, String label)
{
    printf("CBNZ was run");
    
    if(reg1 != 0)
    {
        //jump to label
        BL(label);
        // PC = PC + CondBranchAddr
    }
}


// (compare and branch if zero), takes a register and a label
// Labels are simply "name:" in the program
// CBX X1, label
void CBZ(uint32_t reg1, String label)
{
    printf("CBZ was run");
  
    if(reg1 == 0)
    {
        //jump to label
        BL(label);
        // PC = PC + CondBranchAddr
    }
}


// This is an added instruction that will display the contents of all registers 
// and memory, as well as the disassembled program (branch targets are given as 
// the PC-relative offset from the branch instruction). More details below.  
// This is an R instruction.  The opcode is 11111111110.  
// All other bits are don't-care. 
void DUMP(void)
{
    printf("DUMP was run");
  
    //printf("Reg 0 (X0): %x \n", X0);
    //printf("Reg 1 (X1): %x \n", X1);
    //printf("Reg 2 (X2): %x \n", X2);
    //printf("Reg 3 (X3): %x \n", X3);
    //printf("Reg 4 (X4): %x \n", X4);
    //printf("Reg 5 (X5): %x \n", X5);
    //printf("Reg 6 (X6): %x \n", X6);
    //printf("Reg 7 (X7): %x \n", X7);
    //printf("Reg 8 (X8): %x \n", X8);
    //printf("Reg 9 (X9): %x \n", X9);
    //printf("Reg 10 (X10): %x \n", X10);
    //printf("Reg 11 (X11): %x \n", X11);
    //printf("Reg 12 (X12): %x \n", X12);
    //printf("Reg 13 (X13): %x \n", X13);
    //printf("Reg 14 (X14): %x \n", X14);
    //printf("Reg 15 (X15): %x \n", X15);
    //printf("Reg 16 (X16): %x \n", X16);
    //printf("Reg 17 (X17): %x \n", X17);
    //printf("Reg 18 (X18): %x \n", X18);
    //printf("Reg 19 (X19): %x \n", X19);
    //printf("Reg 20 (X20): %x \n", X20);
    //printf("Reg 21 (X21): %x \n", X21);
    //printf("Reg 22 (X22): %x \n", X22);
    //printf("Reg 23 (X23): %x \n", X23);
    //printf("Reg 24 (X24): %x \n", X24);
    //printf("Reg 25 (X25): %x \n", X25);
    //printf("Reg 26 (X26): %x \n", X26);
    //printf("Reg 27 (X27): %x \n", X27);
    //printf("Reg 28 (X28): %x \n", X28);
    //printf("Reg 29 (X29): %x \n", X29);

}


// Exclusive or
// EOR X1, X2, X3
// X1 = X2 ^ X3
void EOR(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    printf("EOR was run");
  
    reg1 = reg2 ^ reg3;
    //update reg1 value
}


// Exclusive or
// EORI X1, X2, imm
// X1 = X2 ^ imm
void EORI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    printf("EORI was run");

    reg1 = reg2 ^ imm;
    //update reg1 value
}
 

void EORI (uint32_t opcode){

  printf("EORI was run");

}
void HALT (uint32_t opcode){

  printf("HALT was run");

}
void LDUR (uint32_t opcode){

  printf("LDUR was run!");

}
