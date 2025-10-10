#include <stdio.h>
 int main(){
    
    int arr[5]={3,12,52,70,5};

    int target=3;
    for(int i=0;i<5;i++){;
       if(arr[i]==target){
           printf("%d",arr[i]);
           break;
       }
    }
 }