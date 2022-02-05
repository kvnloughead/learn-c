#include <stdio.h>

// function prototypes
void printGreetingPhrase(char *greeting, char *name);
void printGreeting(char *greeting);
void printAddressee(char *name);
void printComma(void);
void printNewLine();

int main()
{
  printGreetingPhrase("Hello", "world");
}

void printGreetingPhrase(char *greeting, char *name)
{
  printGreeting(greeting);
  printComma();
  printAddressee(name);
  printNewLine();
}

void printGreeting(char *greeting)
{
  printf("%s", greeting);
}

void printAddressee(char *name)
{
  printf("%s", name);
}

void printComma(void)
{
  printf(", ");
}
void printNewLine()
{
  printf("\n");
}