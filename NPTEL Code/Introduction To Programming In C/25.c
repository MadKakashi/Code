#include<stdio.h>

int main(){
    int prev; //previous number
    int curr; //currrent number
    int len; //keeping track of the length of the current subsequence
    int maxlen; //the maximum length of the subsequence

    scanf("%d",&prev); //store the value of previous number
    len = 1; //the len of the current subsequence is 1
    maxlen = 1; //the length of the maximum subsequence encountered so far is 1

    if (prev!=-1){
        do {
            scanf("%d",&curr); //storing the current number
            if (prev<curr){ //checking if the current number is greater than current
                len = len + 1; //increasing the current length of the subsequence by 1
            }
            else { 
                if(maxlen<len){
                    maxlen = len;
                }
                len = 1; //resetting the len of the current subsequence to 1 as the cur is smaller than prev
            }
            prev = curr;
            } while(curr!=-1);
            
    }
    // if (maxlen<len){
    //     maxlen = len;
    // }
    printf("%d",maxlen);


    return 0;
}