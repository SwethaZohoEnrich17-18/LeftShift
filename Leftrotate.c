#include <stdio.h>
#include<string.h>
void main(){
char a[100];
int n,i=0,size;
scanf ("%s%d",a,&n);
size=strlen(a);
for (i=n;i<size;i++){
printf("%c",a[i]);
}
for (i=0;i<n;i++){
printf ("%c",a[i]);
}
}
