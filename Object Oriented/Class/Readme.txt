Containe : 
Class in C++
CLASSES vs STRUCTS in C++
How to Write a C++ Class (LogClass directory) : 
    Log Class : debug perposes , print status o f code
    have different level of error messaging :
    Error , Warning  , Message
Static(Var or Method) in C++ (Static directory)
    Outside of class or STRUCTS:
        internal and only visible to that transation unit 
    Inside of class or STRUCTS:
        share mem with all the instances of class or struct
        INSIDE CLASS : 
            befor Variable : only one instance of Variable across all instances of class
            before Method : can be called without class instances
            static method cannot access to non static Variable
            in example file if we delete static before "static int x,y;"
            in Entity class and then call "Print2()" fucntion 
            we give an error because the Print2 is static Method
            but "x,y" is non static variables
    Local Static in C++ :
        Lifetime of variable : how long variable stick around and remain in mem before get deleted
        Scope of variable : refers to where we can actually access that variable 
        local static variable allows us to declear variable has lifetime essentially our entire program
        HOWEVER it's scope is limited be inside that function(or any kind of scope)
Constructors in C++:
    using for instanciate a object from class
    In other language like java primitive type automatically initialized and set to zero 
    BUT NOT IN CPP, we have to manaually initialized primitive types 
    would not run if we not instanciate object, so if we just use static method from class it WONT run
    talk about heib allocation
Destructors in C++:
    for cleaning mem and vipe out variables
    and delete object 
Inheritance in C++:
    have hirearchy of class which relate to each other
    so usefull because it helps us to avoid CODE DUPLICATION 
Visibility in C++: 
    in class default Visibility is PRIVATE : just main class
    Struct default Visibility = PUBLIC : everyOne!!
    Protected : main class and all subclasses in hirearchy

