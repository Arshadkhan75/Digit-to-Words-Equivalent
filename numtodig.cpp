
// Enter Digit value and convert into words:
//=======================================================
//Arshad khan 

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;


void singledigit();
void twodigit();
void threedigit();
int  main(){

int num;
char o[9][10]   = {"one","two","three","four","five","six","seven","eight","nine"};
char t1[10][10] = {"ten","eleven","twelve","thirtenn","fourteen","fiftenn","sixteen","seventeen","eighteen", "ninteen"};
char t2[8][10]  = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};

int s;
  printf("Select Options \n:1\t One digit number \n:2\tTwo digit number  \n\t:3 Three digit number");
 scanf("%d",&s);
 
if(s == 1)
 singledigit();
else if(s==2)
  twodigit();
else if (s==3)
  threedigit();
return 0;

}

// one digit value into words.

void singledigit(){
int num;
char o[9][10] = {"one","two","three","four","five","six","seven","eight","nine"};
printf("Enter your no\n");
scanf("%d",&num);
if(num<10){
for(int i =0;i<=10;i++){
   if(i==num)
  printf("equvilient word of input digit is :%s",o[i-1]);
          
   }
 }
}

//two digit value into words
void twodigit(){
int num;
printf("Enter Number value\n");
scanf("%d",&num);
char t1[10][10] = {"ten","eleven","twelve","thirtenn","fourteen","fiftenn","sixteen","seventeen","eighteen", "ninteen"};
for(int j=0;j<10;j++)
{
int i=j+10;
if(i==num)
printf("output of the enter digit in words is=%s",t1[j]);
 }
}


// three digit value into words
void threedigit(){

int num;
char o[9][10]   = {"one","two","three","four","five","six","seven","eight","nine"};
char t1[10][10] = {"ten","eleven","twelve","thirtenn","fourteen","fiftenn","sixteen","seventeen","eighteen", "ninteen"};
char t2[8][10]  = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};	

printf("Enter three digit number value");
scanf("%d",&num);

int tens = num/10;
if(tens<10){
for(int i=0; i<10;i++){
if(i==tens)
printf("%s",t2[i-2]);
   }
 }

int sec = num%10;
if(sec<10) {
for(int x=0;x<10;x++){
 if(x==sec)
printf("%s",o[x-1]);

  }
      
 }

}


