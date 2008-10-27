#include "Singletone.h"

/********************************************************************************************************
 * 
 * This class illustrate Singletone implementation
 * 
 *******************************************************************************************************/ 
Singletone* Singletone::m_instance = 0;


Singletone::Singletone()
:m_data(0)
{
}

Singletone::~Singletone()
{
	if (m_instance)
		delete m_instance;
}

Singletone* Singletone::getInstance()
{
	if (! m_instance )
		m_instance = new Singletone();
	return m_instance;
}


//Service functions
void Singletone::SetData(int d)
{
	this->m_data = d;
}

int Singletone::GetData()
{
	return this->m_data;
}
