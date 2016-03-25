/**
 * 14. O que está errado com cada uma das seguintes instruções em C?
 *
 * a. x=x+y
 * b. x+y=5;
 * c. if x>y x=5;
 * d. if (x>y) { x=5 }
 * e. if (x>y) x=5 else x=6;
**/

#include<stdio.h>

int main()
{
    int x, y;

    x=x+y;                   // expected ";" before "x"
    x=y+5;                   // lvalue required as left operand of assignment
    if (x>y) x=5;            // expected "(" before "x"
    if (x>y) { x=5; }        // expected ";" before "}"
    if (x>y) x=5; else x=6;  // expected ";" before "else"

    getchar();
    return 0;
}

