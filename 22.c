#include <stdio.h>
int main() {
int num;
int *ptr;
int **pptr;
printf("Enter an integer value: ");
scanf("%d", &num);
ptr = &num; // ptr holds the address of num
pptr = &ptr; // pptr holds the address of ptr
printf("\nValue of num (direct) = %d\n", num);
printf("Value of num via ptr (*ptr) = %d\n", *ptr);
printf("Value of num via pptr (**pptr) = %d\n", **pptr);
printf("\nAddress of num = %p\n", (void*)&num);
printf("Value stored in ptr = %p\n", (void*)ptr);
printf("Value stored in pptr (*pptr) = %p\n", (void*)*pptr);
printf("Address of ptr (&ptr) = %p\n", (void*)&ptr);
printf("Value stored in pptr itself = %p\n", (void*)pptr);
return 0;
}