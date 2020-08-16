#include<iostream>
#include<cstring>
#define LOG(x) std:: cout << x << std::endl;
//pass the mem address of value for modify it
void Increment(int* value)
{
    //with this parantices determine that 
    //we want first get value from address
    //then incerease it 
    (*value)++;
}
//pass the reference of value for modify it
//RECOMENDED
void IncrementType2(int& value){
    //DONT NEED PARANTEICES
    //cleaner and simpler 
    value++;
}
int main(){
    int a  = 5;
    int b = 8;
    //define a refernce variable 
    int& ref = a;
    //a = 8 , b = 8 
    //we dont have 2 variable here , JUST HAVE a ref = a
    Increment(&a);
    LOG(a);
    IncrementType2(a);
    LOG(a);
    //HOW change the reference from one variable 
    //to another ?
    int* ref2 = &a;
    *ref2 = 2;
    ref2 = &b;
    *ref2 = 1;
    std:: cout << "A  : " <<std::endl;
    LOG(a);
    std:: cout << "B  : " <<std::endl;
    LOG(b);

} 