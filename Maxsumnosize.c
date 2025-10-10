#include <stdio.h>

int main(){
   int arr[5]={1,2,-3,4,-1};
   int maxsum=0;
   for(int i=0;i<5;i++){
     int curSum=0;
        for(int j=i;j<5;j++){
           curSum= curSum+arr[j];
           if(curSum>maxsum){
              maxsum=curSum;
           }
        }
 
       }

printf ("%d",maxsum);
}