void  ft_putchar(char c);

int main(int argc, char **argv)
{
  int i;

  i = 0;
  while(--argc)
  {
    while(argv[argc][i])
        ft_putchar(argv[argc][i++]);
        i = 0;
  }
  return (**argv);
}
