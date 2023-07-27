 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 #include<time.h>
 
 #define MIN_NUM_ASCII 48
 #define MAX_NUM_ASCII 57

 #define MIN_ALPHA_ASCII 65
 #define MAX_ALPHA_ASCII 70
 //sir i am using the soln of the last dpp for looping
 
get_rand(char);

get_rand(char)
 {
    char ch;
    bool toss;
    
    srand(time(NULL));
    toss=rand()%2;
    if(toss==true)
        ch=rand()%((MAX_ALPHA_ASCII-MIN_ALPHA_ASCII)+1)+MIN_ALPHA_ASCII;
        else
            ch=rand()%((MAX_NUM_ASCII-MIN_NUM_ASCII)+1)+MIN_NUM_ASCII;

    printf("the randomly generated character is %c",ch);
    return 0;

 }
 

 int main(void)
 {
   char str[11];
    //to get the random no of lenght of string
    int n,i;
    n=rand()%10+0;
    for(i=0;i<n;i++)
    {
        get_rand(str[i]);
    }
   //to print the string
    for(i=0;i<n;i++)
    {
    printf("the string is:%c"str[i]);
    }
 }