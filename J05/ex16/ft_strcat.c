char  *ft_strcat(char *dest, char* src)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while(dest[j] != '\0')
    j++;
  while(src[i] != '\0')
  {
    dest[j] = src[i];
    j++;
    i++
  }
  dest[j] = '\0'
    return(dest);
}
