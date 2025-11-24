/*
Suppose you have the following array declaration in your program:
int yourArray[7];
Also, suppose that in your implementation of C++, variables of type int use
two bytes of memory. When you run your program, how much memory will
this array consume? Suppose that, when you run your program, the system
assigns the memory address 1000 to the indexed variable yourArray[0]. What
will be the address of the indexed variable yourArray[3]?
*/

// Answer:
// The array 'yourArray' has 7 elements, and each element of type int uses 2 bytes of memory.
// Therefore, the total memory consumed by the array is:
// Total memory = Number of elements * Size of each element
// Total memory = 7 * 2 bytes = 14 bytes
// If the memory address of yourArray[0] is 1000, then the address of yourArray[3] can be calculated as follows:
// The computer knows that youArray[3] is located three int variables past youArray[0]
// Address of yourArray[3] = Address of yourArray[0] + memory used by three int variables
// Address of yourArray[3] = Address of yourArray[0] + Bytes per int * [three] index variables before yourArray[3]
// Address of yourArray[3] = 1000 + (2 bytes * 3) = 1000 + 6 bytes = 1006
// Therefore, the address of yourArray[3] will be 1006.

int main() {
	return 0;
}