#include <iostream>
class mystring{
private:
    int size;
    char* sentance;
public:
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
    friend std::ostream& operator<<(std::ostream& os, const mystring& str);
    //std::ostream& operator<<(std::ostream& os);
    bool operator<(const mystring&) const;
    bool operator>(const mystring&) const;
    bool operator==(const mystring&) const;
    bool operator>=(const mystring&) const;
    bool operator<=(const mystring&) const;
    char operator[](int index);

    //length function
    int len();	
};
