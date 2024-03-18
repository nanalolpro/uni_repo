/*
To access five+ characters using pointer to a string,
can do puts(pointer_name+4)

Variadic function:
#include <stdarg.h>
int func(...);
va_list arglist; - define arglist
long sum = 0;
va_start(arglist); - initialize arglist
int numArg = va_arg(arglist, int); - number of arguments
for (int i=0; i< numArg; i++) {
    int arg = va_arg(arglist, int);
    sum+=arg;
    printf("Arg[%i] = %i\n", i, arg);
} va_end(arglist); // Cleanup
return sum;

To iterate string from a pointer to string:
pass pointer to string 
int str_length = strlen(string);
while(*string) - since last character is 
string++
or 
for loop with i less than str_length
string += i

Pointer to a function looks like this:
int (* func_name)(int *this)
1 - return type
2 - function name, spec pointer
3 - parameters, that this function will tale (pointer to int here)

An array of pointers to functions:
int (* func_names[])(int) 
1 - return type
2 - function name, spec pointer, spec list
3 - parameters, that this function will tale (int here)

Command-line arguments
int main(int argc, char *argv[]); - asways passed as char strings 


*/