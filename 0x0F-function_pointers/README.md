This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

Prototype: int (*get_op_func(char *s))(int, int);
where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
