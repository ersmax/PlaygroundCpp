/*
For each of the following situations, tell which type of loop (while, do-while,
or for) would work best.
a. Summing a series, such as 1/2 + 1/3 + 1/4 + 1/5 + … + 1/10.
b. Reading in the list of exam scores for one student.
c. Reading in the number of days of sick leave taken by employees in a
department.
d. Testing a function to see how it performs for different values of its
arguments.
*/
// My answer:
// a. A `for` loop would work best for summing a series with a known
// number of terms, as it allows for easy initialization, condition checking,
// and incrementing in a single line.
// (b) and (c) : in general the list may be empty, so a while fits nicely.
// b. A `while` loop would be suitable for reading in exam scores,
// as the number of scores may not be known in advance, and the loop can
// continue until a specific condition is met (e.g., end of input).
// c. A `while` loop would also be appropriate for reading in the number of
// days of sick leave, as the number of employees may vary, and the loop can
// continue until all employees' data has been processed.
// d. A do while loop would be ideal for testing a function with different arguments,
// as it ensures that the function is tested at least once before checking the
// condition for further tests.


int main() {
	return 0;
}