# C++ Practice Playground

This repository contains practical exercises to practice C++ standard 14.
This section is for theoretical programs.
For project-oriented programs, see the other repo [Programming Projects CPP](https://github.com/ersmax/Programming_Projects_Cpp).
Feel free to explore each file for code examples and explanations.
Bullet list elements illustrate examples, while numbered list elements indicate small exercises.

## Important notes
Setup: Visual Studio 2026 with C++20 or later standard, CMake 3.25 or higher.

---

## Chapter 1 

### Ch.1 Section 2 Expressions

- [Cpp vs Java](01_Basics/02_Expressions/1_0_0_Cpp_vs_Java.cpp) - Explains differences between Java and C\+\+ handling of `char`/`byte` and Unicode.
- [Greetings](01_Basics/02_Expressions/1_0_1_Greetings.cpp) - Greeting program that asks how many languages the user used and responds.
- [Deposit](01_Basics/02_Expressions/1_0_2_Deposit.cpp) - Reads a deposit amount and computes the balance after one year with a fixed interest rate.
1. [Declarations](01_Basics/02_Expressions/1_1_Declaration_Int.cpp) - Shows two ways to declare and initialize `feet` and `inches` variables.
2. [Declarations double](01_Basics/02_Expressions/1_2_Declaration_Double.cpp) - Shows two ways to declare and initialize `count` (int) and `distance` (double).
3. [Uninitialized Variables](01_Basics/02_Expressions/1_3_Undefined_Behaviour_Undefined_Var.cpp) - Demonstrates undefined/garbage values from uninitialized local variables and behavior.
4. [Expressions Examples](01_Basics/02_Expressions/1_4_Expressions.cpp) - Converts simple mathematical formulas into C\+\+ expressions with user input.
5. [Output Characters](01_Basics/02_Expressions/1_5_Output.cpp) - Shows character assignments and outputs the resulting character sequence.
6. [Integer Division](01_Basics/02_Expressions/1_6_Output.cpp) - Demonstrates integer-division pitfalls using `(1/3) * 3`.
7. [Quotient and Remainder](01_Basics/02_Expressions/1_7_Output_and_remainder.cpp) - Reads two integers and prints the whole-number quotient and remainder.
8. [Temperature Conversion](01_Basics/02_Expressions/1_8_Temperature_conversion.cpp) - Shows a Celsius-to-Fahrenheit conversion bug due to integer division and correction.

### Ch.1 Section 3 Console In and Console Out

- [Age](01_Basics/03_Console_In_Out/1_3_0_1_Age.cpp) - Reads a dog's age and name, then computes the equivalent human years.
9. [Message](01_Basics/03_Console_In_Out/1_3_9_Message.cpp) - Outputs the multi-line phrase about Life, the Universe, and Everything being 42.
10. [Input Prompt](01_Basics/03_Console_In_Out/1_3_10_Input.cpp) - Prompts for and reads an integer into the variable `theNumber`.
11. [Formatting Statement](01_Basics/03_Console_In_Out/1_3_11_Statement.cpp) - Demonstrates setting `cout` to fixed notation, `showpoint`, and precision of 3.
12. [Greet](01_Basics/03_Console_In_Out/1_3_12_Greet.cpp) - Minimal program that prints `Hello world`.
13. [Tabs](01_Basics/03_Console_In_Out/1_3_13_tabs.cpp) - Outputs `A`, newline, `B`, a tab, and `C`.
14. [Fix Error](01_Basics/03_Console_In_Out/1_3_14_Fix_error.cpp) - Fixes input/output to read first and last name separately and display full name with age.
15. [String Concatenation Result](01_Basics/03_Console_In_Out/1_3_15_result.cpp) - Shows string concatenation of `"5"` and `"3"` producing `53`.

---

## Chapter 2 

### Ch.2 Section 1 Boolean expressions

1. [Boolean expressions](02_Flow_of_Control/01_Boolean_Expressions/2_1_boolean_exp.cpp) - Evaluates a set of Boolean expressions with `count = 0` and `limit = 10`, demonstrates short-circuiting and notes division-by-zero pitfalls.
2. [Boolean interval](02_Flow_of_Control/01_Boolean_Expressions/2_2_Boolean_interval.cpp) - Explains why `2 < x < 3` is incorrect in C\+\+ and shows the correct expression `2 < x && x < 3`.
3. [Quadratic positive region](02_Flow_of_Control/01_Boolean_Expressions/2_3_Quadratic_exp.cpp) - Shows the Boolean condition where `x^2 - x - 2` is positive: `x < -1 || x > 2`.
4. [Quadratic negative region](02_Flow_of_Control/01_Boolean_Expressions/2_4_Quadratic_exp_negative.cpp) - Shows the Boolean condition where `x^2 - 4x + 3` is negative: `x > 1 && x < 3`.

### Ch.2 Section 2 Branching

- [Temperatures](02_Flow_of_Control/02_Branching/2_0_1_temperatures.cpp) - Temperature-based branching example (if-else).
- [Vehicle class](02_Flow_of_Control/02_Branching/2_0_2_Vehicle_class.cpp) - Switch statement for vehicle toll classes.
- [Greetings (while)](02_Flow_of_Control/02_Branching/2_0_3_Greetings.cpp) - Repeated greetings using `while`.
- [Greetings once (do-while)](02_Flow_of_Control/02_Branching/2_0_4_Greetings_once.cpp) - At-least-once greetings using `do-while`.
- [Calories](02_Flow_of_Control/02_Branching/2_0_6_Calories.cpp) - Summing item calories with a loop.
5. [Division short-circuit](02_Flow_of_Control/02_Branching/2_5_Division_0.cpp) - Short-circuit boolean example preventing division by zero.
6. [High greater](02_Flow_of_Control/02_Branching/2_6_High_greater.cpp) - Simple if-else comparing `score` to 100.
7. [Solvent vs Bankrupt](02_Flow_of_Control/02_Branching/2_7_Solvent_Bankrupt.cpp) - Solvent vs Bankrupt logic updating `savings`.
8. [Passed/Failed](02_Flow_of_Control/02_Branching/2_8_Passed_Failed.cpp) - Compound condition for pass/fail.
9. [Temperature/Pressure](02_Flow_of_Control/02_Branching/2_9_Temperature_Pressure.cpp) - Warning/OK using logical OR.
10. [Outputs truthiness](02_Flow_of_Control/02_Branching/2_10_Outputs.cpp) - Demonstrates truthiness of 0, 1, -1 in `if`.
11. [Greetings options](02_Flow_of_Control/02_Branching/2_11_Greetings_options.cpp) - Nested `if` output/flow example.
12. [Sizes](02_Flow_of_Control/02_Branching/2_12_Sizes.cpp) - Multi-branch size classification example.
13. [Smaller sizes](02_Flow_of_Control/02_Branching/2_13_Smaller_sizes.cpp) - Variant for negative value.
14. [Larger sizes](02_Flow_of_Control/02_Branching/2_14_Larger_sizes.cpp) - Variant for zero value.
15. [Multiway If-else](02_Flow_of_Control/02_Branching/2_15_Multiway_If_else.cpp) - Multiway classification of integer `n`.
16. [Directions](02_Flow_of_Control/02_Branching/2_16_Directions.cpp) - Enum ordering demonstration.
17. [Updated directions](02_Flow_of_Control/02_Branching/2_17_Updated_directions.cpp) - Enum with explicit values and usage.

### Ch.2 Section 3 Loops

- [Negative numbers](02_Flow_of_Control/03_Loops/2_0_1_Negative_numbers.cpp) - Read 4 negative numbers, break on non\-negative input and sum the valid entries.
- [Negative continue](02_Flow_of_Control/03_Loops/2_0_2_Negative_continue.cpp) - Read 4 negative numbers, use `continue` to re\-prompt on non\-negative input and sum.
18. [Loop1 (post\-decrement)](02_Flow_of_Control/03_Loops/2_18_Loop1.cpp) - Demonstrates `while(count-- > 0)` output ordering.
19. [Loop2 (pre\-decrement)](02_Flow_of_Control/03_Loops/2_19_Loop2.cpp) - Demonstrates `while(--count > 0)` output ordering.
20. [Loop3 (do\-while with n++)](02_Flow_of_Control/03_Loops/2_20_Loop3.cpp) - `do`/`while` with post\-increment shows outputs ending at 4.
21. [Loop4 (do\-while with ++n)](02_Flow_of_Control/03_Loops/2_21_Loop4.cpp) - `do`/`while` with pre\-increment shows outputs ending at 3.
22. [Loop5](02_Flow_of_Control/03_Loops/2_22_Loop5.cpp) - `while` decrementing by 3 prints 10, 7, 4, 1.
23. [Loop6](02_Flow_of_Control/03_Loops/2_23_Loop6.cpp) - `while(x < 0)` with `x = 10` produces no output.
24. [Loop7 (do\-while)](02_Flow_of_Control/03_Loops/2_24_Loop7.cpp) - `do`/`while` variant that prints 10, 7, 4, 1.
25. [Loop8 (do\-while negative start)](02_Flow_of_Control/03_Loops/2_25_Loop8.cpp) - `do`/`while` with negative start prints the initial value once.
26. [While vs Do\-while](02_Flow_of_Control/03_Loops/2_26_Loop9.cpp) - Explains the key difference: condition check before vs after body.
27. [For loop 1](02_Flow_of_Control/03_Loops/2_27_For_loop1.cpp) - `for` producing 2 4 6 8.
28. [For loop 2](02_Flow_of_Control/03_Loops/2_28_For_loop2.cpp) - `for` decrementing by 2 printing `Hello` with the loop variable.
29. [For loop 3](02_Flow_of_Control/03_Loops/2_29_For_loop3.cpp) - `for` with `double` step prints 2 1.5 1 0.5.
30. [For loop rewrites](02_Flow_of_Control/03_Loops/2_30_For_loop4.cpp) - Rewrite `while`/`do` examples as `for` loops.
31. [For loop log](02_Flow_of_Control/03_Loops/2_31_For_loop5.cpp) - Counts doublings until a limit (prints `1024 10`).
32. [For loop with empty body](02_Flow_of_Control/03_Loops/2_32_For_loop6.cpp) - Demonstrates trailing semicolon producing an empty loop body.
33. [For loop infinite pitfall](02_Flow_of_Control/03_Loops/2_33_For_loop7.cpp) - Shows an unintended infinite loop when starting at 0 and multiplying.
34. [Loop choice guidance](02_Flow_of_Control/03_Loops/2_34_For_loop8.cpp) - Advice on when to use `while`, `do`/`while`, or `for`.
35. [Infinite growth example](02_Flow_of_Control/03_Loops/2_35_For_loop10.cpp) - `while` that increases the variable causing an infinite loop.
36. [Break statement](02_Flow_of_Control/03_Loops/2_36_Break_statement.cpp) - Explains `break` behavior in loops and `switch`.
37. [Nested loops output](02_Flow_of_Control/03_Loops/2_37_Output.cpp) - Nested `for` loops producing a multiplication table.

### Ch.2 Section 4 File Input

- [Read text](02_Flow_of_Control/04_File_Input/2_4_0_1_Read_text.cpp) - Reads `score`, `firstName`, `lastName` from `99_Text_files/0_player.txt` and prints them.
- [Read until end](02_Flow_of_Control/04_File_Input/2_4_0_2_Read_end.cpp) - Reads every word using `while (inputStream >> text)` and prints each on a line.
38. [Word output fix](02_Flow_of_Control/04_File_Input/2_38_Word_output.cpp) - Corrects a faulty read loop and explains why the original approach failed.
39. [Read entries](02_Flow_of_Control/04_File_Input/2_39_Read_entries.cpp) - Reads a count followed by name/score pairs and prints `Name, score` lines.
40. [Read highest](02_Flow_of_Control/04_File_Input/2_40_Read_highest.cpp) - Finds and prints the player with the highest score from the scores file.

---

## Chapter 3 

### Ch.3 Section 1 Predefined Functions

- [Dog house](03_Function/01_Predefined_Functions/3_0_1_Dog_house.cpp) - Compute the size of a square doghouse from the user's budget using `sqrt` and formatted output.
- [Weather forecast](03_Function/01_Predefined_Functions/3_0_2_Weather_forecast.cpp) - Seeded pseudorandom weather forecast with `srand`, `rand()` and `switch` with `do`/`while`.
- [Total cost](03_Function/01_Predefined_Functions/3_0_3_Total_cost.cpp) - Computes total bill including a 5\% sales tax via a `totalCost` function.
- [Rounding](03_Function/01_Predefined_Functions/3_0_4_Rounding.cpp) - `rounding` function that returns the nearest integer using `floor(n + 0.5)`.
1. [Arithmetic functions](03_Function/01_Predefined_Functions/3_1_Arithmetic_exp.cpp) - Demonstrates standard `<cmath>` functions like `sqrt`, `pow`, `fabs`, `ceil`, and `floor`.
2. [Math expressions](03_Function/01_Predefined_Functions/3_2_Math_expressions.cpp) - Converts mathematical expressions into C\+\+ arithmetic and uses `sqrt`, `pow`, and `fabs`.
3. [Square numbers](03_Function/01_Predefined_Functions/3_3_Sqaure_numbers.cpp) - Outputs square roots of the whole numbers 1 to 10.
4. [Function `exit` argument](03_Function/01_Predefined_Functions/3_4_Function_void.cpp) - Explains the meaning of the `int` argument passed to `exit`.
5. [Pseudorandom integers](03_Function/01_Predefined_Functions/3_5_Pseudorandom.cpp) - Produces pseudorandom integers in the range 5 to 10 inclusive using `rand()`.
6. [Pseudo random range](03_Function/01_Predefined_Functions/3_6_Pseudo_range.cpp) - Prompts for a seed and outputs pseudorandom float numbers in the range 0.0 to 1.0.

### Ch.3 Section 2 Programmer defined functions

- [Temperature conversion](03_Function/02_Programmer_Defined_Functions/3_0_1_Temp_conversion.cpp) - Celsius to Fahrenheit conversion using a helper function.
- [Ice cream division](03_Function/02_Programmer_Defined_Functions/3_0_2_Ice_cream_division.cpp) - Divide total ice cream among customers with zero-check.
- [Average yield (pea)](03_Function/02_Programmer_Defined_Functions/3_0_3_Avg_yield_pea.cpp) - Estimate total peas and yield using a helper.
- [Area of circle / Volume of sphere](03_Function/02_Programmer_Defined_Functions/3_0_4_Area_circle_volume_sphere.cpp) - Uses `constexpr double PI` for area and volume.
7. [Output example](03_Function/02_Programmer_Defined_Functions/3_7_Output.cpp) - Small function return example producing "Wow".
8. [Function sum](03_Function/02_Programmer_Defined_Functions/3_8_Function_sum.cpp) - Returns sum of three `int` arguments.
9. [Positive / Negative](03_Function/02_Programmer_Defined_Functions/3_9_Positive_negative.cpp) - Returns `'P'` or `'N'` based on a `double`.
10. [Function definition rule](03_Function/02_Programmer_Defined_Functions/3_10_Function_definition.cpp) - Notes that function definitions cannot be nested.
11. [Predefined vs user-defined](03_Function/02_Programmer_Defined_Functions/3_11_Predefined_vs_user_defined.cpp) - Comparison of invocation and differences.
12. [In-order check](03_Function/02_Programmer_Defined_Functions/3_12_Order_function.cpp) - `inOrder` checks ascending order for three `int`s.
13. [Even check](03_Function/02_Programmer_Defined_Functions/3_13_Even_function.cpp) - `even` returns whether an `int` is even.
14. [Is digit](03_Function/02_Programmer_Defined_Functions/3_14_Digits.cpp) - `isDigit` checks if a `char` is a decimal digit.
15. [Greetings examples](03_Function/02_Programmer_Defined_Functions/3_15_Greetings.cpp) - `friendly` and `shy` functions demonstrating control flow.
16. [Runtime error discussion](03_Function/02_Programmer_Defined_Functions/3_16_Runtime_error.cpp) - Omitting `return` in `void` and divide-by-zero pitfall.
17. [Display products](03_Function/02_Programmer_Defined_Functions/3_17_Display_products.cpp) - Void function that outputs product of three integers.
18. [Void vs int main](03_Function/02_Programmer_Defined_Functions/3_18_Void_vs_int.cpp) - Notes on `void main()` vs `int main()` and return behavior.
19. [Pre/Post condition (sqrt)](03_Function/02_Programmer_Defined_Functions/3_19_Pre_Post_condition.cpp) - Precondition/postcondition example for `sqrt`.

### Ch.3 Section 3 Scope rules

20. [Function variable declaration](03_Function/03_Scope_Rules/3_20_Function_var.cpp) - Where to declare a variable used in a function; prefer function-local unless broader access is needed.
21. [Function-local variables](03_Function/03_Scope_Rules/3_21_Function_variables.cpp) - Similar named local variables in different functions do not conflict; each has own scope.
22. [Comment purpose](03_Function/03_Scope_Rules/3_22_Principle_procedural_abstraction.cpp) - Explains a function declaration comment: purpose, parameters, and return value for users.
23. [Procedural abstraction](03_Function/03_Scope_Rules/3_23_Procedural_abstraction.cpp) - Principle of hiding implementation details so a function can be used like a black box.
24. [Black box](03_Function/03_Scope_Rules/3_24_Black_box.cpp) - Treating a function as a black box means relying on its interface, not its internals.
25. [Scope rules example](03_Function/03_Scope_Rules/3_25_Scope_rules.cpp) - Nested-block example demonstrating variable shadowing and the resulting output.

---

## Chapter 4

### Ch.4 Section 1 Parameters

- [Office billing program](04_Parameters_Overloading/01_Parameters/4_0_1_Office_Billing_Program.cpp) - Computes the bill from hours and minutes using `fee(int,int)` with quarter-hour rounding and `RATE = 150.00`.
- [Reverse by reference](04_Parameters_Overloading/01_Parameters/4_0_2_Reverse_by_reference.cpp) - Demonstrates reference parameters: input via references, swap using references.
- [Comparing argument mechanisms](04_Parameters_Overloading/01_Parameters/4_0_3_Comparing_Argument_Mechanisms.cpp) - Shows difference between call-by-value and call-by-reference with results.
- [Buying pizza](04_Parameters_Overloading/01_Parameters/4_0_4_Buying_Pizza.cpp) - Compares two pizza sizes by price per square inch (area computed using `PI`).
1. [Call-by-value definition](04_Parameters_Overloading/01_Parameters/4_1_Call_by_value_def.cpp) - Explains the call-by-value parameter mechanism and its effects.
2. [Inches conversion (by value)](04_Parameters_Overloading/01_Parameters/4_2_Inches_conversion_by_value.cpp) - Converts feet and inches to total inches; explains why pass-by-value is appropriate.
3. [Output pass/reference example](04_Parameters_Overloading/01_Parameters/4_3_Output_Pass_Reference.cpp) - Shows mixed call-by-reference and call-by-value effects with example output.
4. [Output by reference (variant)](04_Parameters_Overloading/01_Parameters/4_4_Output_by_reference_2.cpp) - Variant demonstrating effect of removing `&` from a parameter.
5. [Setter zero](04_Parameters_Overloading/01_Parameters/4_5_Setter_Zero.cpp) - `zeroBoth` sets two `int` variables to zero via reference parameters.
6. [Add tax to cost](04_Parameters_Overloading/01_Parameters/4_6_Tax_Cost.cpp) - `addTax` applies a percentage tax to a cost (modifies `cost` by reference).
7. [By-value vs by-reference change](04_Parameters_Overloading/01_Parameters/4_7_By_value_By_reference.cpp) - Explains output differences when `par2Ref` is changed to call-by-value.

### Ch.4 Section 2 Overloading
- [Average overload](04_Parameters_Overloading/02_Overloading/4_0_5_Average_overloading.cpp) - Overload `average` function by changing n of parameters
- [Pizza round vs rectangular](04_Parameters_Overloading/02_Overloading/4_0_6_Pizza_Round_Sqaure_Small_Large.cpp) - Compares unit price of round and 
   rectangular pizzas; demonstrates function overloading for `unitPrice`, use of `std::pair`/`std::vector`, 
   a comparator for `std::sort`, and formatted numeric output.
- [Default arguments](04_Parameters_Overloading/02_Overloading/4_0_7_Default_arguments.cpp) - Show the functioning of default argument
8. [Overloading by n parameters](04_Parameters_Overloading/02_Overloading/4_8_Function_overloading_n_parameters.cpp) - Overloads `score` function by changing n parameters.
9. [Overloading by type](04_Parameters_Overloading/02_Overloading/4_9_Function_overloading_types.cpp) - Overloads `theAnswer` function by changing parameter types.
10. [Pizza unit price](04_Parameters_Overloading/02_Overloading/4_10_Pizza_Square.cpp) - Computes unit price 
   of different pizza shapes (Round/Rectangular/Square) and size (Small/Large) using overloaded `unitPrice` 
   and `getData`, and assert the correct dimensions with `assert` to check whether preconditions are met.

### Ch.4 Section 3 Testing and Debugging functions
- [Driver Program and Stubs](04_Parameters_Overloading/03_Testing_Debugging_Functions/4_0_8_Driver_Program_and_Stubs.cpp) - Demonstrates a driver program and stubs to test functions before full implementation.
11. [Fundamental Rule for Testing Functions](04_Parameters_Overloading/03_Testing_Debugging_Functions/4_11_Fundamental_Rule_Testing.cpp) - Explains the fundamental rule for testing functions (unit testing): test each function independently so bugs are isolated and easy to find.
12. [Driver Program](04_Parameters_Overloading/03_Testing_Debugging_Functions/4_12_Driver_Program.cpp) - Defines a driver program and shows how to use a small test program to exercise a function in isolation.
13. [Stub](04_Parameters_Overloading/03_Testing_Debugging_Functions/4_13_Stub.cpp) - Defines a stub and explains its role as a simplified replacement used to test callers before the full implementation exists.
14. [Stub: Rain Likelihood](04_Parameters_Overloading/03_Testing_Debugging_Functions/4_14_Stub_Rain_likelihood.cpp) - Provides a short stub for `rainProb(pressure, humidity, temp)` that returns a fixed probability to allow testing of functions that call it.

--- 

## Chapter 5

### Ch.5 Section 1 Introduction to Arrays

- [Array Access](05_Arrays/01_Introduction_Arrays/5_0_1_Array_Access.cpp) \- Read two arrays, find the maximum, and print differences using index and range\-based loops.
1. [Array Size](05_Arrays/01_Introduction_Arrays/5_1_Array_Size.cpp) \- Explains the meaning of sizes in `int a[5]` vs `a[4]`.
2. [Array Declarations](05_Arrays/01_Introduction_Arrays/5_2_Array_Declarations.cpp) \- Identify array name, base type, declared size, index range, and an element.
3. [Array Pitfalls](05_Arrays/01_Introduction_Arrays/5_3_Array_Pitfalls.cpp) \- Highlights initialization errors and non\-constant size pitfalls for C\-style arrays.
4. [Array Loop](05_Arrays/01_Introduction_Arrays/5_4_Array_Loop.cpp) \- Prints characters from a small char array.
5. [Array Output](05_Arrays/01_Introduction_Arrays/5_5_Array_Output.cpp) \- Shows array element assignment and repeated outputs.
6. [Array Indices Output](05_Arrays/01_Introduction_Arrays/5_6_Array_Indeces_Output.cpp) \- Fills an array with `2*i` and prints all elements and every second element.
7. [Illegal Array Index](05_Arrays/01_Introduction_Arrays/5_7_Illegal_Array_Index.cpp) \- Demonstrates an out\-of\-range indexing bug.
8. [Index Out of Bounds](05_Arrays/01_Introduction_Arrays/5_8_Index_Out_of_Bounds.cpp) \- Fixes loop bounds to avoid accessing `a[10]`.
9. [Array Filling](05_Arrays/01_Introduction_Arrays/5_9_Array_Filling.cpp) \- Reads 20 integers from the keyboard into an array and prints them.
10. [Array Memory Address](05_Arrays/01_Introduction_Arrays/5_10_Array_Memory_Address.cpp) \- Explains array memory consumption and computes element addresses.

### Ch.5 Section 2 Arrays in Functions

- [Function with Array Parameter](05_Arrays/02_Arrays_in_Functions/5_0_2_Function_with_Array_Parameter.cpp) \- Demonstrates passing a fixed-size array by reference and the decayed pointer form, with examples to fill and display array contents.
- [Pitfall: Inconsistent Use of const](05_Arrays/02_Arrays_in_Functions/5_0_3_Pitfall_Inconsistent_Use_Const.cpp) \- Shows const-correctness pitfalls when array parameters are declared without `const` and the resulting type mismatches.
- [Production Graph](05_Arrays/02_Arrays_in_Functions/5_0_4_Production_Graph.cpp) \- Reads plant production, scales values to thousands with rounding, and displays a bar graph where each `*` represents 1000 units.
11. [Array Indexed Variables: Parameters](05_Arrays/02_Arrays_in_Functions/5_11_Array_Indexed_Variables_Parameters.cpp) \- Exercises passing array elements and variables by reference to a function (the `tripler` example) and shows valid/invalid calls.
12. [Array Indexed Variables: Pitfalls](05_Arrays/02_Arrays_in_Functions/5_12_Array_Indexed_Variables_Pitfalls.cpp) \- Highlights common off-by-one and indexing mistakes and compares equivalent parameter declarations for array parameters.
13. [Increase Array Parameter](05_Arrays/02_Arrays_in_Functions/5_13_Increase_Array_Parameter.cpp) \- Implements `oneMore` to increment every element of an integer array and demonstrates usage.
14. [Incorrect Function Calls: Array Parameter](05_Arrays/02_Arrays_in_Functions/5_14_Incorrect_Function_Calls_Array_Parameter.cpp) \- Lists examples of correct and incorrect calls to a function that fills an array, explaining bounds and syntax issues.
15. [Constant Array Parameter](05_Arrays/02_Arrays_in_Functions/5_15_Constant_Array_Parameter.cpp) \- Describes when to add `const` to array parameters and shows examples where `const` is appropriate or not.
16. [Out Of Order Array Parameter](05_Arrays/02_Arrays_in_Functions/5_16_Out_of_order_Array_Parameter.cpp) \- Implements `outOfOrder` to detect the first element violating ascending order and return its index or `-1`.

### Ch.5 Section 3 Programming with arrays

- [Reusable Functions Golf Scores](05_Arrays/03_Programming_with_Arrays/5_0_5_Reusable_Functions_Golf_Scores.cpp) \- Read up to 10 golf scores, compute the average and show each score's difference from the average.
- [Searching Array](05_Arrays/03_Programming_with_Arrays/5_0_6_Searching_Array.cpp) \- Reuses `fillArray` to read numbers and provides a linear search returning the index or `-1` if not found.
- [Selection Sort](05_Arrays/03_Programming_with_Arrays/5_0_7_Selection_Sort.cpp) \- Implements selection sort with a helper to find the smallest element and sorts the partially filled array.
- [Bubble Sort](05_Arrays/03_Programming_with_Arrays/5_0_8_Bubble_Sort.cpp) \- Demonstrates bubble sort by repeatedly swapping adjacent out-of-order elements until the array is sorted.
17. [Read Array](05_Arrays/03_Programming_with_Arrays/5_17_Read_Array.cpp) \- Reads up to 10 nonnegative integers with input validation and prints the entered values.
18. [Reverse Letters](05_Arrays/03_Programming_with_Arrays/5_18_Reverse_Letters.cpp) \- Reads up to 10 letters until a period sentinel and prints them in reverse order.
19. [Search Array Alternative](05_Arrays/03_Programming_with_Arrays/5_19_Search_Array_Alternative.cpp) \- Alternative `search` version that returns `bool` and sets `where` by reference; includes validated input for robustness.

### Ch.5 Section 4 Multidimensional Arrays

- [Display two-dimensional array](05_Arrays/04_Multidimensional_Arrays/5_0_09_Display_Multidimensional_Arrays.cpp) \- Simple program that displays a 2D `char` array (`page`) row by row.
- [Two-Dimensional Grading Program](05_Arrays/04_Multidimensional_Arrays/5_0_10_Two_Dimensional_Grading_Program.cpp) \- Reads quiz scores into a 2D array, computes student and quiz averages, and prints a formatted report.
20. [Two-Dimensional Array Output](05_Arrays/04_Multidimensional_Arrays/5_20_Two_Dimensional_Array_Output.cpp) \- Fills a 4x4 array with column indices and prints the matrix output.
21. [Fill In Array](05_Arrays/04_Multidimensional_Arrays/5_21_Fill_In_Array.cpp) \- Reads a 4x5 integer array from input (five numbers per line over four lines) and prints the values.
22. [Echo Multidimensional Array](05_Arrays/04_Multidimensional_Arrays/5_22_Display_Multidimensional_Array.cpp) \- Implements `echo` to print a 4x5 integer array in the same four-lines-of-five-numbers format.

---

## Chapter 6

### Ch.6 Section 1 Structures

- [Certificate Deposit](06_Structures_Classes/01_Structures/6_0_1_Certificate_Deposit.cpp) - Demonstrates struct-based CD account calculation and helper functions.
- [Certificate Deposit with Dates](06_Structures_Classes/01_Structures/6_0_2_Certificate_Deposit_Dates.cpp) - Hierarchical structs example: `CDAccount` contains a `Date` member.
1. [Structure Member types](06_Structures_Classes/01_Structures/6_1_Struct_Member_Types.cpp) - Defines `ShoeType` struct with `brand`, `style`, `size`, and `price` members.
2. [Shoe price](06_Structures_Classes/01_Structures/6_2_Shoe_price.cpp) - Demonstrates `ShoeType` assignment and price update; prints original and adjusted price.
3. [Pitfall: Struct Definition](06_Structures_Classes/01_Structures/6_3_Pitfall_Struct_Definition.cpp) - Shows missing semicolon after a struct definition (syntax pitfall).
4. [Struct Initialization](06_Structures_Classes/01_Structures/6_4_Struct_Initialization.cpp) - Aggregate initialization example (`A x = {1, 2}`).
5. [Pitfall: Struct Initialization](06_Structures_Classes/01_Structures/6_5_Pitfall_Struct_Initialization.cpp) - Demonstrates initialization defaulting to zero and error for too many initializers.
6. [Employee Record](06_Structures_Classes/01_Structures/6_6_Employee_Record.cpp) - Defines `EmployeeRecord` with `rate`, `accruedVacation`, and `status` (`'H'`/`'S'`).
7. [Shoes Recording](06_Structures_Classes/01_Structures/6_7_Shoes_Recording.cpp) - Implements `readShoeRecord` to populate a `ShoeType` from input.
8. [Shoe Discount](06_Structures_Classes/01_Structures/6_8_Shoe_Discount.cpp) - `discount` returns a discounted `ShoeType`; includes `showOffer` to display values.

### Ch.6 Section 2 Classes
- [Class Birthday](06_Structures_Classes/02_Classes/6_0_3_Class_Birthday.cpp) - Simple class example `DayOfYear` showing public data members and a member function `output()` to display the date.
- [Encapsulation Birthday](06_Structures_Classes/02_Classes/6_0_4_Encapsulation_Birthday.cpp) - Encapsulation demo: `DayOfYear` with private data, public setters/getters, input validation, and `input()`/`output()` methods.
- [Test Encapsulation](06_Structures_Classes/02_Classes/6_0_5_Test_Encapsulation.cpp) - Variant of encapsulation example that stores the first three letters of the month as private characters and verifies proper encapsulation.
9. [Input Member Function](06_Structures_Classes/02_Classes/6_9_Input_Member_Function.cpp) - Adds and implements `input()` for `DayOfYear`, demonstrating member function definitions and usage.
10. [Set Temperature](06_Structures_Classes/02_Classes/6_10_Set_Temperature.cpp) - `Temperature` class with a `set()` member that assigns temperature value and scale, illustrating simple mutators.
11. [Scope Dot Operator](06_Structures_Classes/02_Classes/6_11_Scope_Dot_Operators.cpp) - Explanation of the difference between the dot operator (`.`) for object access and the scope resolution operator (`::`) for member definitions.
12. [Pitfalls Encapsulation](06_Structures_Classes/02_Classes/6_12_Pitfalls_Encapsulation.cpp) - Shows visibility rules: which members are part of the interface versus implementation and examples of allowed/disallowed accesses.
13. [Pitfalls Public members](06_Structures_Classes/02_Classes/6_13_Pitfalls_Public_members.cpp) - Demonstrates effects of making member variables public versus private and the resulting changes to allowed operations.
14. [Access Specifiers Private Public](06_Structures_Classes/02_Classes/6_14_Access_Specifiers_Public_Private.cpp) - Short explanation of `public:` and `private:` access specifiers and their formal meanings.
15. [Required public private sections](06_Structures_Classes/02_Classes/6_15_Required_Public_Private_Sections.cpp) - Self-test discussion on how many `public:` and `private:` sections a class needs and best practices.
16. [Private public members](06_Structures_Classes/02_Classes/6_16_Private_Public_Members.cpp) - Guidance on which members should be `private` (data) and which should be `public` (interface), with rationale.
17. [Interface API](06_Structures_Classes/02_Classes/6_17_Interface_API.cpp) - Conceptual note: what forms the public interface of a class versus implementation details (private members and definitions).

---

## Chapter 7

### Ch.7 Section 1 Constructors

### Ch.7 Section 2 More Tools

### Ch.7 Section 3 Vectors - A preview of the STL

