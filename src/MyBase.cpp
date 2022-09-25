#include "MyBase.h"

#include <iostream>
#include "MyBase.h"

using namespace std;

MyBase::MyBase(void)
{
    cout << "ctor for MybaseA" << endl;
}

void MyBase::DoHelp()
{    cout << "MybaseA  I Do Help ----- now do something One More Time!" << endl;
}
