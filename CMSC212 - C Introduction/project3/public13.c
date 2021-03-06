/**
 * CMSC 212, 2008 Fall, Project #3
 * Public Test #13, public13.c
 * 
 * Tests substring().
 */

#include <stdio.h>
#include "string.h"
#include "node.h"

int main() {
  Linked_string s, t;
  char *str = "smooth";
  int idx = 2, len = 4;
  int retval;

  init(&s);
  init(&t);
  copy_from_char_array(&s, str);
  retval = substring(s, idx, len, &s);
  printf("substring(\"%s\", %d, %d, s) returns %d\n", str, idx, len, retval);
  printf("t = \"");
  print(s);
  printf("\"\n");
  clear(&s);
  clear(&t);

  return 0;
}
