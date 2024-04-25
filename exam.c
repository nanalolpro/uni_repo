/*
Function prortoype:
float calcAvgScore(int numStudents, float testScores[]);

Liabrary structure:
{h-file} function prototype, comments
calcAvgScore.h
float calcAvgScore(int numStudents, float testScores[]);

{c-file} function implementation
calcAvgScore.c
#include "calcAvgScore.h"
float calcAvgScore(int numStudents, float testScores[]) { // Compute the average test score for test.
float sumScores = 0.0;
for (int i=0; i<numStudents; i++)
sumScores += testScores[i];
float avgScore = sumScores / numStudents; return avgScore;
}

{main file} funtion usage (include only h-file)
#include <stdio.h>
 #include "calcAvgScore.h"
 int main(void) {
    // ...
printf("Average test 1 score = %f\n", calcAvgScore(numStudents, testScores)); return 0;
RG 2080 12 }

{compile only main and c files}
gcc -o funcprototype main.c calcAvgScore.c

Passing parameters to function
pass by value
(sum - function)
sum(a, b);
pass by reference
sum(*a, *b)
sum(&a, &b);
Arrays and char strings are represented by pointers 
so they are always passed by reference

Variable argument list 
SumInt(int numArg, ...)

struct VarArgs {
   enum Type_t {SHORT, INT, LONG, FLOAT, DOUBLE} Type;
   void *pArg;
};

Function pointer
void AddOne(int *px) {
   (*px)++; // works for any int object passed in.
}
AddOne(&a);
AddOne(&b);

check more on function pointer








*/