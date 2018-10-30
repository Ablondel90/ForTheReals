char  *ft_strrev(char *str)
{
  int i;
  int j;
  char *c;

  j = 0;
  i = 0;
  while (str[j] != '\0')
  {
    while (str[i] != '\0')
    {
      i++;
    }
    str[j]= str[i];
    c = str[j];
    i--;
    j++;
  }
}
