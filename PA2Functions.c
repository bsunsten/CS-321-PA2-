#include<stdlib.h> 
#include<stdio.h>
#include <stdint.h> 



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
    //BL(label);
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
void B.cond(String label)
{
    // if (FLAGS==cond)
    //PC= PC + CondBranchAddr
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
}


// Branch on equal (B.EQ): Z=1
// zero (Z) – the result that set the condition code was 0;
void B.EQ(String label)
{
    B(label);
}


// Branch on not equal (B.NE): Z=0
// zero (Z) – the result that set the condition code was 0;
void B.NE(String label)
{
    B(label);
}


// Branch on higher than or same (B.LO): C=1;
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
void B.HS(String label)
{
    B(label);
}


// Branch on lower than (B.LO): C=0;
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit
void B.LO(String label)
{
    B(label);
}


// Branch on minus (B.MI): N=1;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.MI(String label)
{
    B(label);
}


// Branch on plus (B.PL): N=0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.PL(String label)
{
    B(label);
}


// Branch on overflow set (B.VS): V=1;
// overflow (V) – the result that set the condition code overflowed;
void B.VS(String label)
{
    B(label);
}


// Branch on overflow clear (B.VC): V=0;
// overflow (V) – the result that set the condition code overflowed; 
void B.VC(String label)
{
    B(label);
}


// Branch on higher than (B.HI): (Z=0 & C=1)
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
// zero (Z) – the result that set the condition code was 0;
void B.HI(String label)
{
    B(label);
}


// Branch on lower than or same (B.LS): ~(Z=0 & C=1)
// carry (C) – the result that set the condition code had a carry out of the most
// significant bit or a borrow into the most significant bit.
// zero (Z) – the result that set the condition code was 0;
void B.LS(String label)
{
    B(label);
}


// Branch on greater than or equal (B.GE): N = V
// overflow (V) – the result that set the condition code overflowed; 
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.GE(String label)
{
    B(label);
}


// Branch on less than (B.LT): N != V
// overflow (V) – the result that set the condition code overflowed; 
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.LT(String label)
{
    B(label);
}


// Branch on greater than or equal (B.LE): (Z=0 & N=V)
// zero (Z) – the result that set the condition code was 0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.GT(String label)
{
    B(label);
}


// Branch on less than or equal (B.LE): ~(Z=0 & N=V)
// zero (Z) – the result that set the condition code was 0;
// negative (N) – the result that set the condition code had a 1 in the most significant bit;
void B.LE(String label)
{
    B(label);
}


// Branch and link (jumps to address and stores PC in LR) PC is "program counter", 
// special register that stores the address of the current instruction
void BL(String label)
{
    //R[30]=PC+4
    //PC= PC + BranchAddr //PC=PC+10000
}


// Branch to register (Jumps to LR + 4 (instructions are 32 bits)
// If no +4, the BL instruction would execute again, forever.)
// This is an R instruction.  Only the opcode and Rt fields are used.  
// The remaining bits are don't-care.
// BR LR or BR X30
// LR is register X30
void BR(uint32_t reg1)
{
    //PC=R[Rt];
}


// (compare and branch if not zero, takes a register and a label
// Labels are simply "name:" in the program
// CBNZ X1, label
void CBNZ(uint32_t reg1, String label)
{
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
    if(reg1 == 0)
    {
        //jump to label
        BL(label);
        // // PC = PC + CondBranchAddr
    }
}


// This is an added instruction that will display the contents of all registers 
// and memory, as well as the disassembled program (branch targets are given as 
// the PC-relative offset from the branch instruction). More details below.  
// This is an R instruction.  The opcode is 11111111110.  
// All other bits are don't-care. 
void DUMP
{
    //printf("Reg 0 (X0): ");

}


// Exclusive or
// EOR X1, X2, X3
// X1 = X2 ^ X3
void EOR(uint32_t reg1, uint32_t reg2, uint32_t reg3)
{
    reg1 = reg2 ^ reg3;
    //update reg1 value
}


// Exclusive or
// EORI X1, X2, imm
// X1 = X2 ^ imm
void EORI(uint32_t reg1, uint32_t reg2, uint16_t imm)
{
    reg1 = reg2 ^ imm;
    //update reg1 value
}
 