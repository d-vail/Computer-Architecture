#ifndef _CPU_INSTRUCTIONS_H_
#define _CPU_INSTRUCTIONS_H_

// Instructions
#define ADD 0b10100000
#define SUB 0b10100001
#define MUL 0b10100010
#define DIV 0b10100011
#define MOD 0b10100100
#define INC 0b01100101
#define DEC 0b01100110
#define CMP 0b10100111
#define AND 0b10101000
#define NOT 0b01101001
#define OR 0b10101010
#define XOR 0b10101011
#define SHL 0b10101100
#define SHR 0b10101101
#define CALL 0b01010000
#define RET 0b00010001
#define INT 0b01010010
#define IRET 0b00010011
#define JMP 0b01010100
#define JEQ 0b01010101
#define JNE 0b01010110
#define JGT 0b01010111
#define JLT 0b01011000
#define JLE 0b01011001
#define JGE 0b01011010
#define NOP 0b00000000
#define HLT 0b00000001
#define LDI 0b10000010
#define LD 0b10000011
#define ST 0b10000100
#define PUSH 0b01000101
#define POP 0b01000110
#define PRN 0b01000111
#define PRA 0b01001000

// Function declarations
extern void handle_HLT(int *running);
extern void handle_LDI(unsigned char registers[], unsigned char reg, unsigned char immediate);
extern void handle_PRN(unsigned char registers[], unsigned char reg);

#endif