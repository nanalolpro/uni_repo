// Commands:
// -------------------------------
// Ctrl + C - discard current line
// tab (x2 - to show all possiblities for autocomletion)
// Ctrl + L - clear screen 
// Ctrl + R - reverse history search
// Ctrl + S - scroll lock
// Ctrl + Q - scroll unlock
// -------------------------------
// pwd - path to current directory
// man {command} - manuals for the command
// -------------------------------
// ls - list all files in the current directory
// ls -a - show hidden files
// ls -l - show more information about the files
// ls -al - show hidden files and more information about them
// ls * - show all items except hidden
// ls *.* - show all items with dot except hidden
// ls .* - show all items including hidden
// --------------------------------
// cd dir_name - move to another directory
// cd ~ or cd - move to home diretory
// cd .. - go one directory up 
// --------------------------------
// mkdir dir_name - create new directory
// rm file_name - move file to bin
// rm -f file_name - move file to bin (do not ask for confirmation)
// rm -r folder_name - remove everything from the folder
// rm -rf folder_name - remove everything from the folder recursively (no bin)
// -------------------------------
// mv file_name dir_name\ - move file to another directory
// mv file_name file_name_1 dir_name\ - move file to another directory
// mv file_name dir_name\new_file_name - move file to another directory
// mv file_name new_file_name - rename file
// mv older_folder_name new_folder_name - rename directory
// --------------------------------
// cp file_name file_name_2(opt) dir_name - copy file to another directory
// cp file_name dir_name\new_file_name - cope file to another diretory and rename
// --------------------------------
// gcc file_name1 file_name2 - compile files
// gcc file_name -o new_name - compile file and rename 
// make - compile project
// Makefile: 
// hello: hello.c
//        gcc hello.c -o hello 
// (hello already exists and it should depend on hello.c)
// --------------------------------
// RAM: 8-bits/1-byte or sometimes 16-bits are accessed by the same address
// decimal -> binary : divide by 2, remainder, inverse
// binary -> decimal : sum(x[i]*2^i)
// --------------------------------
// Base-10 system:
// KB = 1000 Bytes; MB = 1000 KB; GB = 1000 MB; TB = 1000 GB
// Base-2 system:
// KB = 1024 Bytes; MB = 1024 KB; GB = 1024 MB; TB = 1024 GB
// Decinal to binary: 1 decimal TB/ 1 binary TB (in Bytes)
// -------------------------------
// preprocessor (cpp)
// compiler (gcc)
// assembler (cp)
// linker (ld)
// -------------------------------
// compile-time error:
// typos, incorrect usage of C; will report locations; no executable
// compile-time warning:
// reported by the operating system; will create executable
// run-time error:
// error when running executable
// link-time error:
// no executable will be created; linker can not compile all object files together
// -------------------------------
// range of (16-bit machine or 32-bit machine)
// char - 2^8 (1)
// short - 2^16 (2)
// int - 2^16 or 2^32
// long - 2^32
// long long - 2^64
// float - 3.4*10^38
// double - 1.8*10^308
// long double - 1.19*10^4932
// ---------------------------
// hexadecimal - 
// 1 byte or 4 bits (used for addresses in c); uses 16 different symbols to represent values
// octal - 
// 3 bits; uses 8 different symbols to represent numbers
// ---------------------------
// overflow
// number overflows allowed starage capacity, it starts over (wraps around)
// i.e. from 0 for unsigned
// ---------------------------
// when two numbers are of different type, they will be casted to a larger type
// long double > double > float > unsigned long > long > unsigned > int 
// Special case: sizeof(long) == sizeof(unsigned) long will be promoted to unsigned
// --------------------------
// #include <some_lib.h>
// #define some_var value
// #undef some_var value
// #ifdef somme_var
// #endif
// ------------------------
// && - and; || - or; ! - not
// & - bitwise and; | - bitwise or; ^ - xor (0 if 1 and 1); ~ -bitwise not
// y++ or y-- perform opertation than change variable
// ++y or --y change variable than perform operation
// x << 1 shift x bit 1 bit to the left (same as multiplying by 2)
// x >> 1 shift x bit 1 bit to the right (same as dividing by 2)
// ------------------------
// int x = (y==z) ? y : z; if y==z x=y, else x=z
// int z = x, t, e; e gets assigned to z
// -----------------------
// arrays: storage
// int x[100]
// int y[200]
// x[100] = 1; - y[0] is 1 (only for the same type)
// x[10][2] - is stored sequentially x[0][0], x[0][1], x[1][0] etc
// arrays: initialization
// #include <string.h>
// int x[10];
// memset(x, 0, 10*sizeof(int))
// disignated initializer:
// int x[4] = {
    // [2] = 3;
    // [3] = 1;
// }; - other places will be assigned to 0 
// arrays: operations and operators
// #include <string.h>
// memcpy(); memmove(); - copy n bytes from source to dest and return dest
// memcmp(); - works if two regions overlap
// string: boundries
// char m[] = "Helo";
// char m[5]; - not initialized
// char m[5] = {0,}; - initialized with zeros
// #include <string.h>
// strlen(str); - length of string
// strncmp(x, y); - compare two strings
// strncpy(x, y); - copy string y to x
// strlen(); 
// strcpy(); stpcpy(); -copy- strnspy() - copy up to n bytes
// strcat(); - concat - strncat() - concat up to n bytes
// strcmp(); - compare - strncmp() - compare up to n bytes
// strchr(), strpbrk(), strrchr(), strstr() - search string in string
// strcspn(), strdup(), strfry(), strsep(), strspn(), strtok(), strxfrm() - other
// char *strcpy(char *dest, const char *src);
// char *strncpy(char *dest, const char *src, size_t n);
// ----------------------
// pointers: dereference
// int x = 10;
// int * pt = &x; - stores address of x
// int y = *pt; - assighn value in the address pt points to 
// int *pt = NULL; int * pt =0; - null pointer (no address), derefenrcing will abort immidiatly, same as false in logic operations;
// pointer should be of the same type as the variable they are pointing to;
// void *pt; - no specific type
// int x=10, y;
// pt = &x; y = *(int *) pt; - casting type before dereferncing 
// int x[10] = {0,};
// int *pt = x; stores address of x (*pt same as printing x[0])
// int (*pt)[][] - for multidimensional arrays;
// pointers to pointers
// int x = 2080; int *pt = NULL; int **pt = &pt; - *ptt == pt, **pt==*pt=x;
// *ptt = &x; - stores address of x, so pt==&x
// int y = *pt; y is equal 2080
// **ptt = 10; x=10;
// pointer arithmetic
// ++ pointer; -- pointer - increase or decrease pointer by 1*sizeof(pointer type)
// *(var + i) - pointer + i*sizeof(pointer type)
// can subtract pointers of the same size - return number*sizeof(pointer type)
// subtracting void pointers will return number in bytes;
// -----------------------
// struct
// typedef struct SomeStruct StructName;
// struct SomeStruct {
    // int i;
// };
// can be assigned to another struct of the same struct type but can not be comapred
// can use struct inside of the other struct
// struct and pointers 
// StructName * pStruct = NULL; - pointer struct
// pStruct = &myStruct; - points to my struct
// (*pStruct).field = 1; - accessing field
// pStruct -> field = 1; - shortcut to what is above
// int *pt = &myStruct.field; - can have pointers pointing to single fields
// -----------------------
// union - storing multiple variables in the same memory space
// union myUnion {
    // int i;
    // char k;
// }
// union myUnion newUnion = {2080}; - will get assigned to the first variable
// ----------------------
// for loop
// for (;;) - infinite loop, have to break
// int i = 0;
// for (;i<num;)
// i++
// continue - skips the rest of code, reavaluating if else statement
// ------------------------
// switch - same as if else if condition to one variable
// if (x==0) {} else if (x==1){}
// switch(x) {case 0: ;case1 ;}
// ------------------------
// goto - if else, whe repeating same procedure
// if () {goto proced_1;} if () {goto proceed_2;} proceed_1: ...; proceed_2: ...;
// -----------------------
// while do - evaluate code once before loop
// do {} wile(condition);
// -------------------------
// de morgan's law
// not (A and B) equals not A or not B
// not (A or B)  equals not A and not B
// P and (Q or D) equals (P and Q) or (P and D)
// P or (Q and D) equals (P or Q) and (P or D)
// -----------------------
// all bits on	
// ~0 or -1
// one bit on in position n, all others off
// 1 << n
// n least significant bits on, all others off
// (1 << n) - 1
// most significant bit on, all others off
// (1 << 31)
// k most significant bits on, all others off
// (~0 << (32 - k)) or ~(~0U >> k)
// ------------------------
// 1 << x	2 to the power x
// ~x + 1
// -x, arithmetic negation
// x >> 31
// -1 if x is negative, 0 otherwise
// x &= (x - 1)
// clears lowest "on" bit in x
// (x ^ y) < 0
// true if x and y have opposite signs
