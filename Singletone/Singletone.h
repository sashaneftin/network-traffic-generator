#ifndef SINGLETONE_H_
#define SINGLETONE_H_

/********************************************************************************************************
 * 
 * This class illustrate Singletone implementation
 * 
 *******************************************************************************************************/
class Singletone
{
public:
	virtual ~Singletone();

	//Service function
	static Singletone* getInstance();

	virtual void SetData(int);
	virtual int GetData();

private:
	//Forbid the constructor and copy constructor
	Singletone();
	Singletone(const Singletone&);

	//
	static Singletone* m_instance;
	int m_data;

};

#endif /*SINGLETONE_H_*/
