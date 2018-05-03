#include "student.h"
#include <string>

void student::setName(std::string first, std::string last)
{
    mFirst = first;
    mLast = last;
}

std::string student::fullName()
{
    std::string full;
    full.append(mFirst);
    full.append(" ");
    full.append(mLast);

        return full;
}
