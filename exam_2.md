# C programming exam

>**Datatype storage size**

* int= 2 to 4
* float= 4 byte
* char= 1

>**Defining constants**
 
1. const int a;
2. #define pi 3.14

>**Logical Operators**

1. && and operator= Its true When both the condition is true.
2. || or operator= Its true When one of the condition is true
3. ! (condition)= Its the complement of the condition if the condition is true operator will make the condition false if its false it will make it true



>**For loop**

After the body of the 'for' loop executes, the flow of control jumps back up to the increment statement. This statement allows you to update any loop control variables. This statement can be left blank, as long as a semicolon appears after the condition.

the increment of the i is done after first execution completes and compiler come back for another for loop

## <b>Break statement</b>

When a break statement is encountered inside a loop, the loop is immediately terminated and the program control resumes at the next statement following the loop.
 
## <b>Continue Statement</b>

The continue statement in C programming works somewhat like the break statement. Instead of forcing termination, it forces the next iteration of the loop to take place, skipping any code in between.

## <b>Recursion example</b>

```
#include <stdio.h>

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

   int i;
	
   for (i = 0; i < 10; i++) {
      printf("%d\t\n", fibonacci(i));
   }
	
   return 0;
}
```
>**output**
```
0	
1	
1	
2	
3	
5	
8	
13	
21	
34     
```