#include<iostream>

//solve that problem using enum like below : 
enum Example : unsigned char
{
    A = 0 , B = 2 , C = 6
};
//first of all these variables is not grouped 
int a = 0;
int b = 1;
int c = 2;
int main(){
    //before using Enum
    int value  = B;
    if (value == B){
        //Do something here
    }
    //after using Enum
    Example value2 = B;

}