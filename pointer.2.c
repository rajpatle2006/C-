#include<stdio.h>
  
int main (){  
   int arr[5]={1,2,3,45,6};
   int *p=arr;
   printf("%d\n",*(p));
   printf("%d\n",*(p+1));
   printf("%d\n",*(p+2));
   printf("%d\n",*(p+3));
   printf("%d\n",*(p+4));
 }
     