#include <stdio.h>

typedef union
{
  struct {
    unsigned long long fractional: 23;
    unsigned exponent  : 8;
    int      sign      : 1;
  } db;
  double d;
} du;

void print_bits(unsigned long long v, int width)
{
  char r[width+1];
  for(int i = 0; i < width; r[i++] = '0');
  r[width] = '\0';

  while(width--)
  {
    if(v & 1)
      r[width] = '1';
    v >>= 1;
  }

  printf(r);
}

void println_float_fields(double d)
{
  du u;
  u.d = d;
  printf("S: %d\t E: %08u (%08d) ", u.db.sign, u.db.exponent, u.db.exponent - 127);
  print_bits(u.db.fractional, 23);
  printf(" <-----n");
}

int main()
{
  println_float_fields(1.2);
  println_float_fields(1.15);
  println_float_fields(-2.123);
  println_float_fields(-2.57);
  return 0;
}