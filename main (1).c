/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrix[2][4] = {{1, 4, 2, 3},{3, 6, 8, 5}};
    int soma = 0;
    
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("%d\n", matrix[i][j]);
            
        }
    }
    return 0;
}
