/* Example: formatted input from a string using sscanf */
/* Like scanf, but scans a string instead of standard input */

#include <stdio.h>

main()
{
  char input[] = "3 blind mice";
  char word1[10], word2[10];
  int num;
  
  sscanf(input, "%i %s %s", &num, word1, word2);
  
  printf("%s %i %s\n", word2, num, word1);
}
