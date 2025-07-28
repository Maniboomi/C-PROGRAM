#include <stdio.h>
//void func1(void) __attribute__((constructor));
//void func2(void) __attribute__((destructor));

void  __attribute__((constructor)) func1();
void __attribute__((destructor)) func2() ;

#pragma startup func1
#pragma exit func2

void func1() { printf("Pragma working in startup!\n"); }

void func2() { printf("pragma working at end!\n"); }

int main()
{
    printf("pragma working!\n");

    return 0;
}

