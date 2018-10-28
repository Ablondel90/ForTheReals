#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c)
{
  write (1, &c, 1);
  return (0);
}
void ft_print_numbers(void)
{
  int i;

  i = '0';
  while (i <= '9')
  {
    ft_putchar(i);
    i++;
  }
}
int main()
{
  ft_print_numbers();
}

