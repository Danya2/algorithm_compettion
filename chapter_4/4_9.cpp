#include<stdio.h>
int sum(int *a, int *b);
int main()
{
  int a[] = {1,2,3,4,5,6,7};
  int value;
  value= sum(a+1,a+5);
  printf("sum value:%ld \n",value);
  return 0;
}

int sum(int *a , int *b)
{
  int n=*b-*a;
  int ans;
  for(int i=0; i<n;i++)
       ans+=a[i];
  return ans;
}

