/* 494 Kindergarten Counting Game */
#include <stdio.h>

#define char_A 65
#define char_a 97
#define char_Z 90
#define char_z 122
#define space 32

int main() {
  int i,cont,c;
  int s;
  do {
    cont = 0,c = 0;
    do {
      s = getchar();
      if (c == 0)
	if ((s >= char_A && s <= char_Z) ||
	    (s >= char_a && s <= char_z))
	  c = 1, cont++;
      else
	if ((s < char_A && s > char_Z) ||
	    (s < char_a && s > char_z))
	  c = 0;
      printf("%c %d %d\n",s,c,cont);
    } while (s != '\n' && s != EOF);
    printf("%d\n",cont);
  } while (s != EOF);
  return 0;
}
