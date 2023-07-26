#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{

//srand is for getting different out of fun rand() every time we run the code
 srand(time(NULL));  
//for taking random number 
//the shifting value is of no use here

    int random_number= rand()%9+0;
//to print the random value that was given by the fun "rand()".
    printf("”The Randomly Generated number is %d.”",random_number);

// to get the random alphabet
//i m not entirly sure how this fun works sir
char random_alphabet = 'a'+ rand()%26;
printf("the random cahr is %c",random_alphabet);

    return 0;
}
