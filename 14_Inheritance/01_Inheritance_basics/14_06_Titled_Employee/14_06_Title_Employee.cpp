#include "14_06_Titled_Employee.h"

namespace myNamespaceEmployees
{
	TitleEmployee::TitleEmployee() : SalariedEmployee(), title("No title")
	{ /* Body intentionally left empty */ }

	TitleEmployee::TitleEmployee(const std::string& theName, 
								const std::string& theSsn,
								const double theWeeklySalary, 
								const std::string& theTitle)
								: SalariedEmployee(theName, theSsn, theWeeklySalary),
								title(theTitle)
	{ /* Body intentionally left empty */ }

	const std::string& TitleEmployee::getTitle() const { return title; }

	void TitleEmployee::setTitle(const std::string& newTitle) { title = newTitle; }

	void TitleEmployee::setName(const std::string& newName)
	{
		Employee::setName(title + " " + newName);
	}

} // myNamespaceEmployees
