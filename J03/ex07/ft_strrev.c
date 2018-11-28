char  *ft_strrev(char *str)
{
  int i;
  char tmp;
  int ln;

  ln = 0;
  i = 0;
  while (str[ln] != '\0')
  {
    ln++;
  }
  while (i < ln)
  {
    ln--;
    tmp = str[i];
    str[i] = str[ln];
    str[ln] = tmp;
    i++;
  }
  return (str);
}
