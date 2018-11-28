char  *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;
  int len;

  i = 0;
  j = 0;
  len = 0;
  while (to_find[len] != '\0')
    len++;
  if (len == 0)
    return (str);
  while (str[i + j] != '\0')
  {
    while (to_find[j] == str[i + j])
    {
      if (j == len - 1)
        return (str + i);
      j++;
    }
    j = 0;
    i++;
  }
  return (0);
}
