

// Enter Digit value and convert into equivalent value:


//=======================================================



#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;


int  main(void){

int num;
char o[9][10] ={"one","two","three","four","five","six","seven","eight","nine"};

printf("enter your no");
scanf("%d",&num);

if(num<10){
for(int i=0;i<=10;i++){
 
   if(i==num)
   printf("equvilient word of input digit is :%s",o[i-1]);
          
 }
}
return 0;

}




