#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int   ft_putchar(char c)
{
  write (1, &c, 1);
  return(0);
}
void  ft_print_var(char a, char b, char c)
{
  ft_putchar(a);
  ft_putchar(b);
  ft_putchar(c);
  if (a != '7')
  {
    ft_putchar(',');
    ft_putchar(' ');
  }
}

void  ft_print_comb(void)
{
  char a;
  char b;
  char c;

  a = '0';
  while (a <= '7')
  {
    b = a + 1;
    while (b <= '8')
    {
      c = b + 1;
      while (c <= '9')
      {
        ft_print_var(a, b, c);
        c++;
      }
      b++;
    }
    a++;
  }
}
int main()
{
  ft_print_comb();
  return(0);
}

