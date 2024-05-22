// class to represent a person's name

#include <string>	// for string
#include <sstream>	// for ostringstream class

class Name {
public:
	Name(std::string firstName, std::string middleName, 
			std::string surName, std::string salutation) {
		this->firstName = firstName;
		this->middleName = middleName;
		this->surName = surName;
		this->salutation = salutation;
	}

	Name () {}

	std::string toString() {
		std::ostringstream output;

		// format the name
		output << salutation << " " << surName << ", " 
			<< firstName << " " << middleName;
		return output.str();
	}

	void setfirstName(std::string firstName) {
		this->firstName = firstName;
	}

	void setMiddleName(std::string middleName) {
		this->middleName = middleName;
	}

private:
	std::string firstName;
	std::string middleName;
	std::string surName;
	std::string salutation;
};
