#include <string> // for string
#include "Date.h" // for Date
#include "Name.h" // for Name

class Student
{
public:
	Student(Name name, char sex, Date dateOfBirth,
			std::string regNumber, std::string email)
	{
		this->_name = name;
		this->_dateOfBirth = dateOfBirth;
		// use set functions to initialize the data members ..
		setSex(sex);
		setRegNumber(regNumber);
		setEmail(email);
	}

	void setSex(char sex)
	{
		this->sex = sex;
	}

	void setRegNumber(std::string regNumber)
	{

		this->regNumber = regNumber;
	}

	void setEmail(std::string email)
	{

		this->email = email;
	}

	std::string getName()
	{
		return _name.toString();
	}

	std::string getDateOfBirth()
	{
		return _dateOfBirth.toString();
	}

	char getSex()
	{
		return sex;
	}

	std::string getRegNumber()
	{
		return regNumber;
	}

	std::string getEmail()
	{
		return email;
	}

private:
	Name _name;
	Date _dateOfBirth;
	char sex;
	std::string regNumber;
	std::string email;
};
