#include <stdio.h>
int main() {
FILE *fp;
int rollNo;
char name[50];
float marks;
// Writing to the file
fp = fopen("student.txt", "w");
if (fp == NULL) {
printf("Error opening file for writing!\n");
return 1;
}
printf("Enter Roll No: ");
scanf("%d", &rollNo);
printf("Enter Name: ");
scanf("%s", name);
printf("Enter Marks: ");
scanf("%f", &marks);
fprintf(fp, "%d %s %.2f\n", rollNo, name, marks);
fclose(fp);
printf("\nStudent details saved to file successfully.\n");
// Reading from the file
fp = fopen("student.txt", "r");
if (fp == NULL) {
printf("Error opening file for reading!\n");
return 1;
}
fscanf(fp, "%d %s %f", &rollNo, name, &marks);
fclose(fp);
printf("\n--- Data Read From File ---\n");
printf("Roll No : %d\n", rollNo);
printf("Name : %s\n", name);
printf("Marks : %.2f\n", marks);
return 0;
}