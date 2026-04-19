/*
Give the definitions of the constructors for the class TitledEmployee that you
gave as the answer to Self - Test Exercise 5. Also, give the redefinition of the
member function setName.The function setName should insert the title into
the name.Do not bother with #include directives or namespace details.
*/

#include "../14_0_01_Employee/14_0_01_Salaried_Employee.h"

namespace myNamespaceEmployee
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
