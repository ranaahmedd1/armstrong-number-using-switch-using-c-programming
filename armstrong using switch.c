#include <stdio.h>
#include <math.h>

void main(){

    int y,counter=0,sum=0,reminder=0;
    int temp;
printf("enter a number\n");
scanf("%d",&y);
temp=y;
//this while to get the digits number and store in counter
while(temp!=0){
       counter++;
       temp=temp/10;
}
temp=y;
//this while to sum every digit to the power (number of digits)


while(temp!=0){

    reminder=temp%10;
    sum=sum+pow(reminder,counter);
    temp=temp/10;
}

switch(sum==y){
  case 1:printf("it's armsstrong");break;

    case 0:printf("it's nottt armsstrong");break;

}
}
