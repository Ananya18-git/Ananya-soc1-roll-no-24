#include <stdio.h>
int main() {
FILE *fp;
char ch;
int lineCount = 0;
char filename[50];
printf("Enter the filename to count lines: ");
scanf("%s", filename);
fp = fopen(filename, "r");
if (fp == NULL) {
printf("Error: Could not open file '%s'.\n", filename);
return 1;
}
while ((ch = fgetc(fp)) != EOF) {
if (ch == '\n') {
lineCount++;
}
}
fclose(fp);
printf("Number of lines in the file = %d\n", lineCount);
return 0;
}