#include "mystring.hh"
int strlen(const char* str)
{
    int len=0;
    const char* ptr=str;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
void strcpy(char* final,const char* intial)
{
    while(*intial!='\0')
    {
        *final = *intial;
        final++;
        intial++;
    }
    final='\0';
}
void strapp(char* final, const char* intial) {
  while (*final != '\0') {
    final++;
  }
  while (*intial != '\0') {
    *final = *intial;
    final++;
    intial++;
  }
  *final = '\0';
}
int strcmp(const char* str1, const char* str2) {
  while (*str1 != '\0' && *str2 != '\0') {
    if (*str1 < *str2) {
      return -1;
    } else if (*str1 > *str2) {
      return 1;
    }
    str1++;
    str2++;
  }
  if (*str1 == '\0' && *str2 == '\0') {
    return 0;
  }
  return (*str1 == '\0') ? -1 : 1;
}
mystring::mystring()
{
    size = 0;
    sentance=new char[size];
}
mystring::mystring(const char* str)
{
    size = strlen(str);
    sentance = new char[size];
    strcpy(sentance,str);
}
mystring::mystring(const mystring& str)
{
    sentance = new char[str.size];
    size=str.size;
    sentance=str.sentance;
}
mystring::~mystring()
{
    delete[] sentance;
    size=0;
    sentance=NULL;
}
std::ostream& operator<<(std::ostream& os,const mystring& str)
{
    os << str.sentance;
    return os;
}
mystring& mystring::operator=(const mystring& str)
{
    sentance = new char[str.size];
    size=str.size;
    sentance=str.sentance;
    return *this;
}
mystring mystring::operator+(const mystring str)
{
    mystring final;
    final.size=size+str.size;
    final.sentance = new char [final.size];
    strcpy(final.sentance,sentance);
    strapp(final.sentance,str.sentance); 
    return final;
}
bool mystring::operator<(const mystring & str) const
{
    int result = strcmp(sentance,str.sentance);
    return (result==1);
}
bool mystring::operator>(const mystring & str) const
{
    int result = strcmp(sentance,str.sentance);
    return (result==-1);
}
bool mystring::operator==(const mystring & str) const
{
    int result = strcmp(sentance,str.sentance);
    return (result==0);
}
bool mystring::operator<=(const mystring & str) const
{
    int result = strcmp(sentance,str.sentance);
    return (result>=0);
}
bool mystring::operator>=(const mystring & str) const
{
    int result = strcmp(sentance,str.sentance);
    return (result<=0);
}
char mystring::operator[](int index)
{
    return sentance[index];
}
int mystring::len()
{
    return size;
}