///Utilisation standard de malloc///

#include <stdlib.h>

#define SIZE 42

int   main()
{
  int nb;
  char *str;

  str = (char *)malloc(sizeof(*str) * (SIZE + 1));
  return (0);
}
