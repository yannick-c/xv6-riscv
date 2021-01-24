// Chapter 3 Exercise 2
// Grow the process adress space by one byte calling sbrk(1) and investigate
// the page table for the program before the call to sbrk and after.
//
// If you want to inspect the page tables put a vmprint(p->pagetable) before
// return argc in exec.c and another one in exit right after myproc() is called
// (in proc.c).

#include "kernel/types.h"
#include "kernel/param.h"
#include "kernel/syscall.h"
#include "user.h"
int
main(){
        sbrk(1);
        printf("executed\n");
        exit(0);
}
