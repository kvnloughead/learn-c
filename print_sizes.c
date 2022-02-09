#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

void printSizes(void);
void printRanges(void);

long int add(long int i1, long int i2)
{
  return i1 + i2;
}

int main(void)
{
  printSizes();
  printRanges();
}

// prints the # of bytes for each of C11's datatypes
void printSizes(void)
{
  printf("Size of C data types\n\n");
  printf("Type           Bytes\n\n");
  printf("char               %lu\n", sizeof(char));
  printf("int8_t             %lu\n", sizeof(int8_t));
  printf("unsigned char      %lu\n", sizeof(unsigned char));
  printf("uint8_t            %lu\n", sizeof(uint8_t));
  printf("short              %lu\n", sizeof(short));
  printf("int16_t            %lu\n", sizeof(int16_t));
  printf("uint16_t           %lu\n", sizeof(uint16_t));
  printf("int                %lu\n", sizeof(int));
  printf("unsigned           %lu\n", sizeof(unsigned));
  printf("long               %lu\n", sizeof(long));
  printf("unsigned long      %lu\n", sizeof(unsigned long));
  printf("int32_t            %lu\n", sizeof(int32_t));
  printf("uint32_t           %lu\n", sizeof(uint32_t));
  printf("long long          %lu\n", sizeof(long long));
  printf("int64_t            %lu\n", sizeof(int64_t));
  printf("unsigned long long %lu\n", sizeof(unsigned long long));
  printf("uint               %lu\n", sizeof(uint64_t));
  printf("\n");
  printf("float              %lu\n", sizeof(float));
  printf("double             %lu\n", sizeof(double));
  printf("long double        %lu\n", sizeof(long double));
  printf("\n");
  printf("_Bool              %lu\n", sizeof(_Bool));
  printf("bool               %lu\n", sizeof(bool));
  printf("\n");
}

void printRanges(void)
{
  printf("Ranges for integer data types in C\n\n");
  printf("int8_t   %24d %24d\n", CHAR_MAX, SCHAR_MAX);
  printf("int16_t  %24d %24d\n", SHRT_MIN, SHRT_MAX);
  printf("int32_t  %24d %24d\n", INT_MIN, INT_MAX);
  printf("int64_t  %24lld %24lld\n", LLONG_MIN, LLONG_MAX);
  printf("uint8_t  %24d %24d\n", 0, UCHAR_MAX);
  printf("uint16_t %24d %24d\n", 0, USHRT_MAX);
  printf("uint32_t %24d %24u\n", 0, UINT_MAX);
  printf("uint64_t %24d %24llu\n", 0, ULLONG_MAX);
  printf("\n");
  printf("Ranges for real number data types in C\n\n");
  printf("float       %20.7g %20.7g\n", FLT_MIN, FLT_MAX);
  printf("double      %20.7g %20.7g\n", DBL_MIN, DBL_MAX);
  printf("long double %20.7Lg %20.7Lg\n", LDBL_MIN, LDBL_MAX);
  printf("\n");
}