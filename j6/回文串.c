#include "stdio.h"
#include "string.h"
main()
{ int i, j;
  char buf[100];
  scanf("%s",buf);
  for(i=0, j=strlen(buf)-1;i<j; i++, j--)
      if(buf[i]!=buf[j]) break;
  if(i>=j)
      printf("Y");
  else
      printf("N");
}
