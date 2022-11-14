 #include<stdio.h>
 
 int main(){
    int prev; //previously read int
    int curr; //currently read int
    int len = 0; //length of current increasing subsequence
    int maxlen = 0; //intializing the max lenght variable to zero
    scanf("%d",&prev); //assign the first number to previous

    if (prev!=-1){
        len = 1; //the length of the current subequence is 1
        maxlen = 1; //the maxlen encountered so far is 1
        scanf("%d",&curr); //assign the 2nd number to current variable
    }
    while (curr!=-1){ //checking if current is equal to -1 or not and continue to loop untill it encounters a -1
        if (prev<curr){
            len = len + 1; //if the prev is less than curr then increase the current increasing subsequence by 1
        }
        else { 
            if (maxlen<len){ //if prev>curr then we check weather the len is greater than maxlen
            maxlen = len; 
            }
            len = 1; //if the pre is greater than curr then reset the len to 1
        }
        prev = curr; //assign the curr value to prev
        scanf("%d",&curr); //update the current variable by user input
    }
    if (maxlen<len){ //if the last subsequence is the largest then this if statement takes care of that and equates it to len
        maxlen = len;
    }
    printf("%d",maxlen);
    return 0;
 } 