#include <iostream>
#include<cstring>
#define LOG(x) std::cout << x << std::endl

int main(){
    int a  = 5;
    //a is created in stack mem
    int & ref  = a;
    ref = 2;
    //void  = type less variable 
    //pointer is an address 
    //void* is does not matter type of data and we 
    //want just hold the address
    //zero here is not valid mem address
    //we cant read from or write to zero mem addr
    //pointer is a variable hold address  , 
    //how pointer is big is all depends on (int or double or ,....)
    int var  = 8;
    int* ptr  = &var; 
    /*how change value of "var" variable ???*/
    *ptr = 10;
    // LOG(var);
    double* ptr2 = (double*)&var;
    // LOG(ptr2);
    char* buffer = new char[8];
    //double pointer
    char** ptr3 = &buffer;
    LOG(ptr3);
    delete[]buffer;
    memset(buffer , 0 , 8);


}