Task 0: Write a function that prints a name.

Task 1: write a function that executes a function given as a parameter on each element of an array.

Task 2. write a function that searches for an integer.
	Returns the index of the first element for which the cmp function does not return 0.
	If no element is matched or size <= 0, the function returns -1.
Task 3. create a file containing the following five functions:
	op_add: Returns the sum of a and b.
	op_sub: Returns the difference of a and b.
	op_mul: Returns the product of a and b.
	op_div: Returns the division of a by b.
	op_mod: Returns the remainder of the division of a by b.

	3-get_op_func.c: This file should contain the function that selects the correct function to perform the operation asked by the user
	Prototype: int (*get_op_func(char *s))(int, int);
	where s is the operator passed as argument to the program
	This function returns a pointer to the function that corresponds to the operator given as a parameter.
	not allowed to use switch statements
	not allowed to use for or do ... while loops
	not allowed to use goto
	not allowed to use else
	allowed to use more than one if statement in your code
	not allowed to use more than one while loop in your code
	If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL

	3-op_functions.c
	This file should contain the 5 following functions (not more):
	op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b); 

	3-main.c: 
	This file should contain your main function only.
	You are not allowed to code any other function than main in this file
	You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
	You have to use atoi to convert arguments to int
	You are not allowed to use any kind of loop
	You are allowed to use a maximum of 3 if statements

