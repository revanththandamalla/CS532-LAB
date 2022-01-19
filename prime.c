#include<stdio.h>
int main(){
    int isPrime(int num,int div,int count){
        if(div==0){
            return count;
        }
        else
        if(num%div==0){
            count++;
            return isPrime(num,div-1,count);
        }
        else
        return isPrime(num,div-1,count);
    }
    int num,div;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num==0||num==1){
        printf("The number neither prime nor composite");
    return 0;
    }
    div=num;
    count= isPrime(num,div,count);
    if(count!=2){
        printf("The number is not prime"); 
    }
    else{
    printf("The number is prime");
    }
    return 0;
}