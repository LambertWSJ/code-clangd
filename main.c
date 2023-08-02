#include <stdio.h>

int main(){

#ifdef MACRO_A
    puts("MACRO_A");
#endif /* MACRO_A */

#ifdef MACRO_B
    puts("MACRO_B");
#endif /* MACRO_B */

#ifdef MACRO_C
    puts("MACRO_C");
#endif /* MACRO_C */

#ifdef MACRO_D
    puts("MACRO_D");
#endif /* MACRO_D */



}