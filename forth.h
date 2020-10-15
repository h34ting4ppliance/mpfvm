/*
 * M Forth VM by h34ting4ppliance
 *
 * forth.h
 *
 * This is a global header containing useful stuff for both the
 * VM and the compiler.
 */
#ifndef FORTH_H
#define FORTH_H

typedef enum
{
    BYE,    // bye

    N,          // 1 2 3 etc.
    EXECUTE,    // Executes a Forth word
    GSTACK,     // .s
    PAGE,
    QUIT,

    PLUS,   // + - * / mod
    MINUS,
    TIMES,
    DIV,
    MOD,
    DMOD,   // /mod
    STARSL, // */
    STARSLMOD, // */MOD

    APLUS,  // 1+ 1- 2+ 2- 2* 2/
    AMINUS,
    BPLUS,
    BMINUS,
    BTIMES,
    BDIV,

    ABS,
    NEGATE,
    MIN,
    MAX,

    DROP,
    DUP,
    ROT,
    SWAP,
    OVER,

    DDROP,
    DDUP,
    DSWAP,
    DOVER,

    PRINT,  // Print number
    EMIT,   // Print char
    CR,     // Carriage return
    STR,    // Print string
    SPACES, // SPACES

    FSTART, // :
    FEND,   // ;

    EQUAL,      // =
    LESSTHAN,   // <
    GREATHAN,   // >
    ZEQUAL,     // 0=
    ZLESSTHAN,  // 0<
    ZGREATHAN,  // 0>

    NOT,
    AND,
    OR,
    ZDUP,       // ?dup - duplicates if non-zero


    IF,
    THEN,
    DO,
    LOOP,
    PLOOP,      // +LOOP
    
    BEGIN,
    WHILE,
    UNTIL,
    AGAIN,

    RPUSH,  // >R
    RPOP,   // R>
    RI,     // I    1
    RIP,    // I'   2
    RJ      // J    3

} FInstructions;

#endif
