#include <stdio.h>
void main()
{ 
  int n,num,r=1,i;
  scanf("%d%d",&num,&n);
  int a=num;
  for(i=0;i<n;i++)
  {
    while(num>=9)
    {
      r=r*10;
      num/=10;
    }
    a=((a%r)*10)+num;
    num=a;
    r=1;
  }
  printf("%d",a);
}
