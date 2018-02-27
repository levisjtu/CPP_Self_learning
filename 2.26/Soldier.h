#include"Person.h"
class Soldier:protected Person
{
public:
    Soldier();
	void work();
protected:
    int m_iAge;
};