#include "PA2Functions.c"
#include "PA2.c"

char printable_char(uint8_t c);
void hexdump(FILE *f, int8_t *start, size_t size);
void ADD(uint32_t reg1, uint32_t reg2, uint32_t reg3);
void ADDI(uint32_t reg1, uint32_t reg2, uint16_t imm);
void AND(uint32_t reg1, uint32_t reg2, uint32_t reg3);
void ANDI(uint32_t reg1, uint32_t reg2, uint16_t imm);
void B(String label);
void B.cond(String label, uint4_t code);
void B.EQ(String label);
void B.NE(String label);
void B.HS(String label);
void B.LO(String label);
void B.MI(String label);
void B.PL(String label);
void B.VS(String label);
void B.VC(String label);
void B.HI(String label);
void B.LS(String label);
void B.GE(String label);
void B.LT(String label);
void B.GT(String label);
void B.LE(String label);
void BL(String label);
void BR(uint32_t reg1);
void CBNZ(uint32_t reg1, String label);
void CBZ(uint32_t reg1, String label);
void DUMP(void);
void EOR(uint32_t reg1, uint32_t reg2, uint32_t reg3);
void EORI(uint32_t reg1, uint32_t reg2, uint16_t imm);


void EORI (uint32_t opcode);
void HALT (uint32_t opcode);
void LDUR (uint32_t opcode);
