In other languages, such as C or C++, it may be surprising to learn that you
cannot assign a value of type char to a variable of type byte. This is because Java uses the Unicode
character set rather than the ASCII character set, and so Java reserves two bytes of memory for each
value of type char, but naturally only reserves one byte of memory for values of type byte. This is
one of the few cases where you might notice that Java uses the Unicode character set. Indeed, if you
convert from an int to a char or vice versa, you can expect to get the usual correspondence of ASCII
numbers and characters. It is also true that you cannot assign a value of type char to a variable of type
short, even though they both use two bytes of memory.