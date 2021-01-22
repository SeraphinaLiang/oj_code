# include <stdio.h>
# include <string.h>


int main()
{
   char word[81], word1[81];
   int i, loop = 1, count, k, len, j;
     gets(word);
   len = strlen(word);
   for(i=0;i<len/2;i++)
   {
   if (word[i]!=word[len-i-1])
     {
   loop = 0;
    break;
     }
   }
   if (loop == 1)
    {
     printf("Y\n");
      return 0;
     }
     count=0;
     while(count!=len)
     {
     loop=1;
      k=0;
    for(i=0;i<len;i++)
     {
    if(count==i)
     {
     continue;
      }
   else
   {
     word1[k++] = word[i];
    }
}
    for(j=0;j<k;j++)
  {
  if(word1[j] != word1[k -j - 1])
   {
    loop = 0;
    break;
    }
  }
  if(loop == 1)
    {
      printf("Y\n");
   return 0;
    }
   count++;
   }
    printf("N\n");
 return 0;
}