#include <ctype.h>
#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;
  vowels = consonant = digit = space = 0;
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);
for (int i = 0; line[i] != '\0'; ++i) {
	line[i] = tolower(line[i]);

