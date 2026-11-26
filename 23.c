#include <stdio.h>
// Function using call by reference
void swap(int *a, int *b) {
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int main() {
int x, y;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
printf("\nBefore swapping: x = %d, y = %d\n", x, y);
swap(&x, &y); // passing addresses of x and y
printf("After swapping: x = %d, y = %d\n", x, y);
return 0;
}