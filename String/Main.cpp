#include<iostream>
#include<string>
//we cant pass string to function with "std::string input"
//because we make copy and this is not FAST
void PrintString(){

}
int main(){
    //C version for defining string
    //we cant extend name!!!!!
    //HAVE FIX SIZE
    const char* name = "Amirhossein";
    //if we want extend it , we should delete name by delete keyword
    //and create new string
    //but use delete just when use "new" keyboard before
    //delete name;
    char* name2 = "amirhossein";
    // name2[1] = 'a';
    std::cout << name2 << std::endl;
    char name3[6] = {'c' , 'x' , 'd' , 'd' , 0};
    std::cout << name3 << std::endl;
    //we can use standard library #include<string>
    std::string fami = "yousefi";
    fami+= "asem";
    //find pattern in string "find()"
    bool contain = fami.find("as") != std::string::npos;
    std::cout << contain << std::endl;
    std::cout << fami << std::endl;
}