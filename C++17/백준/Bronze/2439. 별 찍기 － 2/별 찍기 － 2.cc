#include <stdio.h>

int main()
{
 int star;   
 scanf("%d",&star);
    for(int i=1;i<=star;i++)
    {
      for(int j=0;j<star-i;j++)
      {
        printf(" ");
      }
      for(int j=0;j<i;j++)
      {
        printf("*");
      }
      printf("\n");
    }
  return 0;
}
