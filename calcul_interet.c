#include <stdio.h>

int main() 
{
    int an[20], i;
    int s=1000;
    i=1;
    while(i<=20 && i>=1)
    {
       s=s+s*0.02;
       an[i] = s;
       i++;
    }
    i=1;
    while(i<=20 && i>=1)
    {
      printf("Après %d ans, tu auras %d$.\n", i, an[i]);
      i++;
    }  
  return 0; 
}