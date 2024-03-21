#include <iostream>
class mystring{
private:
    int size;
    char* sentance;
public;
    //default constructor 
    mystring();

    //construtor to take a string as input
    mystring(const char*);

    //copy constructor
    mystring(const mystring&);

    //distructor
    ~mystring();

    //operator overloading 
    mystring& operator=(const mystring&);
    mystring operator+(const mystring);
    bool operator<(const mystring);
    bool operator>(const mystring);
    bool operator==(const mystring);
    bool operator>=(const mystring);
    bool operator<=(const mystring);
    char operator[](int index);

    //length function
    int len();	
};
