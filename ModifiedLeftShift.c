#include<stdio.h>
#include<string.h>
int main() {
   char a[100];
   scanf("%s",a);
   int n,l;
   scanf("%d",&n);
   l=strlen(a);
   for(int i=0,j=0;j<l;j++,i++){
        printf("%c",a[(i+n)%l]);
   }
}
