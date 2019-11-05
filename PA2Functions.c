#include<stdlib.h> 
#include<stdio.h>
#include <stdint.h> 



// enum registers{X0=000000, X1=000001, X2=000010, X3=000011, X4=000100, X5=000101, 
// X6=000110, X7=000111, X8=001000, X9=001001, X10=001010, X11=001011, X12=001100, 
// X13=001101, X14=001110, X15=001111, X16=010000, X17=010001, X18=010010, X19=010011, 
// X20=010100, X21=010101, X22=010110, X23=010111, X24=011000, X25=011001, X26=011010, 
// X27=011011, X28=011100, X29=011101, X30=011110, X31=011111};
// enum registers{X0, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13,
// X14, X15, X16, X17, X18, X19, X20, X21, X22, X23, X24, X25, X26, X27, X28,
// X29, X30, X31};
// enum registers reg;
 

// uint8_t = X0



// Add the contents of reg1 to reg2 and store in reg3
// ADD X1, X2, X3
// X1 = X2 + X3
void ADD(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    reg3=reg1+reg2;
}


// Add a register and an immediate with ADDI
// Add (immediate) adds a register value and an optionally-shifted immediate value, 
// and writes the result to the destination register
// ADDI X1, X2, imm
// X1 = X2 + imm
void ADDI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    reg1=reg2+imm;
}


// AND X1, X2, X3
// X1 = X2 & X3
// bit by bit AND
void AND(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{

}


// ANDI X1, X2, imm
// X1 = X2 & imm
void ANDI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{

}


//B (branch) jumps unconditionally, takes a label
void B
{

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
void B.cond
{

}


// Branch and link (jumps to address and stores PC in LR) PC is "program counter", 
// special register that stores the address of the current instruction
void BL
{

}


// This is an R instruction.  Only the opcode and Rt fields are used.  
// The remaining bits are don't-care.
// BR X30
// go to X30
void BR
{

}


// (compare and branch if not zero, takes a register and a label
// Labels are simply "name:" in the program
// CBNZ X1, imm
void CBNZ(uint32_t reg1, String label)
{
    if(reg1 != 0)
    {
        //jump to label
    }
}


// (compare and branch if zero), takes a register and a label
// CBX X1, label
void CBZ(uint32_t reg1, String label)
{
    if(reg1 = 0)
    {
        //jump to label
    }
}


// This is an added instruction that will display the contents of all registers 
// and memory, as well as the disassembled program (branch targets are given as 
// the PC-relative offset from the branch instruction). More details below.  
// This is an R instruction.  The opcode is 11111111110.  
// All other bits are don't-care. 
void DUMP
{
    
}


// Exclusive or
// EOR X1, X2, X3
// X1 = X2 ^ X3
void EOR(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{

}
 