int   ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void  ft_putnbr(int nb)
{
  if (nb < 0)
  {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb >= 10)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
  {
    ft_putchar(nb + 48);
  }
}
