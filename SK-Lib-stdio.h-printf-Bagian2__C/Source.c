#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char st[] = "CODING";

    printf("While printing ");
    printf(", the value returned by printf() is : %d", printf("%s", st));

    _getch();
    return 0;
}