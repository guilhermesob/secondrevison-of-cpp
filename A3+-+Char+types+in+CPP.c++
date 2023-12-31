//LECTURE : Character Types in C++


#include <stdio.h>

int main(){

 /*
    char - The Default types - 1  Byte - Signed or Unsigned - EXAMPLE : ASCII  ''
    char16_t - Used for 2 byte char sets - EXAMPLE : UTF-16 Literal is u
    char32_t - Used for 4 byte char sets - EXAMPLE : UTF-32 Literal is U
    signed char - Same as char but guaranteed to be signed
    unsigned char - Same as char but guaranteed to be unsigned
    wchar_t - Large enough to contain the largest char of the implementation's locale : UNICODE L

        NARROW CHARS : char, signed char, unsigned char
        WIDE CHARS : char16_t, char32_t, wchar_t 

ESCAPE SEQUENCES :

https://www.utf8-chartable.de/unicode-utf8-table.pl?utf8=bin

Newline \n
TAB \t
TAB Vertial \v
Backspace \b
Carriage Return \r
Form feed \f
Alert \a
Backslash \\
Single quote \'
Double quote \"
The NULL  Char \0


A = '\u0041'
*/

char x = 'M';
wchar_t y = L'Z';
printf("Windows binaries start with %c%lc. \n",x,y);

} 
