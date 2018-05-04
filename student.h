#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

class student
{
    private:
    std::string mFirst;
    std::string mLast;
    std::vector<double> mGrades;

    public:
    void setName(std::string,std::string);
    std::string fullName();
    void addGrade(double);
    double getScore();

};

#endif
