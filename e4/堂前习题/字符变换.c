
#include <stdio.h>
#include <ctype.h>
 
int main()
{
char c;
char str[5];
for(int i=0;i<5;i++){
scanf("%c",&c);
str[i]=c;}

   int i=0;
 
   while( str[i] ) 
   {
      putchar(tolower(str[i]));
      i++;
   }
 
   return(0);
}