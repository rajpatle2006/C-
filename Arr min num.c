#include <stdio.h>

int main(){
    
    int arr[5]={3,12,52,70,5};
    int min = arr[0];
    int a=5;
    for(int i=1;i>=5;i++){
       if(arr[i]>min){
          min = arr[i];
       }
    }
    printf("%d",min );
       
}