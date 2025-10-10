#include<stdio.h>
  
int main (){  
   int arr[5]={1,2,3,45,6};
   int *p = arr;
   for (int i=0;i<5;i++){
printf("%d\n",*p);
*p++;
}   
}
 
     