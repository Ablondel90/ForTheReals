#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    ft_putchar(str[i]);
    i = i + 1;
  }
}
