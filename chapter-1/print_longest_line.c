#include <stdio.h>

const int MAX_LENGTH = 1000;

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main() {
  int len; // current line length
  int max; // max length seen so far
  char line[MAX_LENGTH]; // current input line
  char longest[MAX_LENGTH]; // longest saved line

  max = 0;
  while ((len = getLine(line, MAX_LENGTH)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("Longest line (length = %d)\n", max);
    printf("%s", longest);
  }
}

// read line into string s and return length
int getLine(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c !='\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// copy string `from` to `to`
void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
