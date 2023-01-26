#include <stack>
#include <string>

using binary_int_function = int (*)(int, int);

int plus(    int a, int b);
int minus(   int a, int b);
int multiply(int a, int b);
int divide(  int a, int b);

using stack_type = std::stack<int>;

int pop_stack(stack_type &stack);

void change_stack_state(const binary_int_function &operation, stack_type &stack);

int evaluate(const std::string &s);