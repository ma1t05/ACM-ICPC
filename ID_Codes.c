/* 146 - ID Codes */
#include <stdio.h>

int successor_exist(char[],int);

int main () {
  int i;
  int lenght;
  int pos;
  char tmp;
  char string[64];

  while (scanf("%s",string) != EOF && string[0] != '#') {
    lenght = 0;
    while (string[lenght] != '\0') lenght++;
    pos = lenght;
    while (--pos >= 0) {
      if (successor_exist(string,pos))
	break;

      for (i = pos+1;i < lenght;i++) {
	tmp = string[i];
	string[i] = string[i-1];
	string[i-1] = tmp;
      }

    }
    if (pos < 0)
      printf("No Successor\n");
    else {
      i = pos + 1;
      while (string[i] <= string[pos])i++;
      tmp = string[pos];
      string[pos] = string[i];
      string[i] = tmp;

      printf("%s\n",string);
    }
  }
  return 0;
}

int successor_exist(char string[],int a) {
  int b = a + 1;
  while (string[b] != '\0') {
    if (string[b++] > string[a]) 
      return 1;
  }
  return 0;
}
