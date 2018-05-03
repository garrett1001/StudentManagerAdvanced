#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

class student
{
    private:
    std::string mFirst;
    std::string mLast;

    public:
    void setName(std::string,std::string);
    std::string fullName();

};

#endif
