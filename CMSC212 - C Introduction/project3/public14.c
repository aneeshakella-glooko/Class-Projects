

/**
 * CMSC 212, 2008 Fall, Project #3
 * Public Test #14, public14.c
 * 
 * Tests replace().
 */

#include <stdio.h>
#include "string.h"
#include "node.h"

int main() {
  Linked_string s, t, u;
  char *str1 = "scream", *str2 = "scr", *str3 =str1;
  int retval;

  init(&s);
  init(&t);
  init(&u);
  copy_from_char_array(&s, str1);
  copy_from_char_array(&t, str2);
  copy_from_char_array(&u, str3);
  printf("s = \""); print(s); printf("\"\n");
  printf("t = \""); print(t); printf("\"\n");
  printf("u = \""); print(u); printf("\"\n");
  retval = replace(&s, t, u);
  printf("replace(s, t, u) returns %d\n", retval);
  printf("s = \""); print(s); printf("\"\n");
  printf("t = \""); print(t); printf("\"\n");
  printf("u = \""); print(u); printf("\"\n");
  clear(&s);
  clear(&t);
  clear(&u);

  return 0;
}
