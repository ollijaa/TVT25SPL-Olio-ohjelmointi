#ifndef SON_H
#define SON_H
#include "father.h"
#include <string>
using namespace std;

class Son : public Father
{
public:
    Son(string, string);
    ~Son();
    virtual void printEducation() override;

private:
    string sonName;
};

#endif // SON_H
