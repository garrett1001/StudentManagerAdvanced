#include "student.h"

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

void student::addGrade(double grade)
{
    mGrades.push_back(grade);
}

double student::getScore()
{
    double score = 0;


    for(int i=0; i < mGrades.size(); i++)
    {
        score = score + mGrades[i];
    }
    
    if(score > 0)
    {
        score = score / mGrades.size();
    }

        return score;
}
