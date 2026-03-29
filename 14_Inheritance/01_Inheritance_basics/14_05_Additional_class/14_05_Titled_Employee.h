//   Give a definition for a class TitledEmployee that is a derived class of the base
// class SalariedEmployee given in Display 14.4.The class TitledEmployee has
// one additional member variable of type string called title.It also has two
// additional member functions : getTitle, which takes no arguments and returns
// a string, and setTitle, which is a void function that takes one argument
// of type string.It also redefines the member function setName.You do not
// need to give any implementations, just the class definition.However, do give all
// needed #include directives and all using namespace directives.Place the class
// TitledEmployee in the namespace SavitchEmployees.

#include "../14_0_01_Employee/14_0_01_Salaried_Employee.h"

namespace myNamespaceEmployees
{
	 class TitleEmployee : public SalariedEmployee
	 {
	 public:
		TitleEmployee();
		TitleEmployee(	const std::string& theName,
						const std::string& theSsn,
						double theWeeklySalary,
						const std::string& theTitle);
	 	void setTitle(const std::string& newTitle);
		void setName(const std::string& newName);
	 	const std::string& getTitle() const;
	 private:
	 	std::string title;
	 };
} // myNamespaceEmployees
