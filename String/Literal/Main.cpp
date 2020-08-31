#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>

int main(){
    //we have 11 char in this string literal 
    //but shows 12 because the null str added to last
    const char name[12] = "amirhossein";
    const char name_two [13] = "Yousefi\0asem";
    //in C include stdlib
    //in C++ include cstring
    std::cout << strlen(name_two) << std::endl;
    //we see the output is 7 because \0 placed in 8th place
    char* name_three = "Amirhossein";
    //name_three[2] = 'a';
    std::cout << name_three << std::endl;

 
}