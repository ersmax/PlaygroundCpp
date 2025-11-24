# Production Graph Program

Display 5.4 contains a program that uses an array and a number of array parameters.
This program for the Apex Plastic Spoon Manufacturing Company displays a bar
graph showing the productivity of each of its four manufacturing plants for any given
week. Plants keep separate production figures for each department, such as the teaspoon
department, soup spoon department, plain cocktail spoon department, colored
cocktail spoon department, and so forth. Moreover, each of the four plants has a different
number of departments.
As you can see from the sample dialogue in Display 5.4, the graph uses one asterisk
for each 1000 production units. Since output is in units of 1000, it must be scaled by
dividing it by 1000. This presents a problem because the computer must display a
whole number of asterisks. It cannot display 1.6 asterisks for 1600 units. We therefore
round to the nearest thousand. Thus, 1600 will be the same as 2000 and will produce
two asterisks.
The array production holds the total production for each of the four plants. In
C++, array indexes always start with 0. But since the plants are numbered 1 through
4, rather than 0 through 3, we have placed the total production for plant number n in
indexed variable production [n–1]. The total output for plant number 1 will be
held in production[0], the figures for plant 2 will be held in production[1], and
so forth.
Since the output is in thousands of units, the program will scale the values of the array
elements. If the total output for plant number 3 is 4040 units, then the value of
production[
2] will initially be set to 4040. This value of 4040 will then be scaled to
4 so that the value of production[2] is changed to 4, and four asterisks will be output
to represent the output for plant number 3. This scaling is done by the function
scale, which takes the entire array production as an argument and changes the values
stored in the array.
The function round rounds its argument to the nearest integer. For example,
round(2.3) returns 2, and round(2.6) returns 3. The function round was discussed
in Chapter 3, in the programming example entitled “A Rounding Function.”