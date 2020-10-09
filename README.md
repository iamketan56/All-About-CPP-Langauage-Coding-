# All About C++ Langauage(Coding)
 This repo includes all the essential things with coding as well as theory in <b>README file</b>..... that everyone should know about that.
<b>C++ is a cross-platform language that can be used to create high-performance applications. C++ was developed by Bjarne Stroustrup, as an extension to the C language. C++ gives programmers a high level of control over system resources and memory.</b><br><br>
<b>1.ENUM</b><br>
Enumeration is a user defined datatype in C/C++ language. It is used to assign names to the integral constants which makes a program easy to read and maintain. The keyword “enum” is used to declare an enumeration.
<br>
<br>
<b>2.Typedef</b><br>
The typedef keyword allows the programmer to create new names for types such as int or, more commonly in C++, templated types--it literally stands for "type definition". Typedefs can be used both to provide more clarity to your code and to make it easier to make changes to the underlying data types that you use.<br><br>

<b>3.Conditional Statement</b><br>
Conditional statements, also known as selection statements, are used to make decisions based on a given condition. If the condition evaluates to True, a set of statements is executed, otherwise another set of statements is executed.<br>
<b>The if Statement:</b><br> The if statement selects and executes the statement(s) based on a given condition. If the condition evaluates to True then a given set of statement(s) is executed. However, if the condition evaluates to False, then the given set of statements is skipped and the program control passes to the statement following the if statement. The syntax of the if statement is
if (condition) {
  statement 1;
  statement 2;
  statement 3;
}
else
{

}
<b>4.Nested Conditonal Statement</b><br>
A nested if in C is an if statement that is the target of another if statement. Nested if statements means an if statement inside another if statement. Yes, both C and C++ allows us to nested if statements within if statements, i.e, we can place an if statement inside another if statement<br>
if{<br>
   statement:<br>
  if{<br>
    statement:<br>
    if{<br>
     statement:<br>
     }<br>
     }<br>
     }<br>
     else<br>
     {<br>
         }
         <br>
         
<b>5.Switch Statement</b><br>
A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.<br>
switch(expression) {<br>
<br>
   case constant-expression  :<br>
      statement(s);<br>
      break; /* optional */<br>
	
   case constant-expression  :<br>
      statement(s);<br>
      break; /* optional */<br>
  <br>
   /* you can have any number of case statements */<br>
   default : /* Optional */<br>
   statement(s);<br>
   <br>
}<br><br>
<b>6.Loops</b><br>
There may be a situation, when you need to execute a block of code several number of times. In general, statements are executed sequentially: The first statement in a function is executed first, followed by the second, and so on.<br>
Programming languages provide various control structures that allow for more complicated execution paths.<br>
A loop statement allows us to execute a statement or group of statements multiple times and following is the general from of a loop statement in most of the programming languages<br><br>
<b>while loop</b><br>
Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.<br><br>
<b>for loop</b><br>
Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.<br><br>
<b>do...while loop</b><br>
Like a ‘while’ statement, except that it tests the condition at the end of the loop body.<br><br>

<b>Foreach loop</b><br>
Foreach loop is used to access elements of an array quickly without performing initialization, testing and increment/decrement. The working of foreach loops is to do something for every element rather than doing something n times.<br><br>

<b>7.Break </b><br>
The break statement can also be used to jump out of a loop.<br><br>
<b>8.Continue</b></br>
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.<br><br>
<b>8.Pointers</b></br>
A pointer however, is a variable that stores the memory address as its value.<br>
A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.<br><br>
There are three ways to declare pointer variables, but the first way is preferred:<br>
int *a; // Preferred<br>
int* a;<br>
int * a;<br><br>
<b>Dereferencing</b>
In the example from the previous page, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):<br><br>
<b>Note</b> that the * sign can be confusing here, as it does two different things in our code:<br>
When used in declaration (int *a), it creates a pointer variable.<br>
When not used in declaration, it act as a dereference operator.<br><br>
<b>Modify the Pointer Value</b><br>
We can also change the pointer's value. But note that this will also change the value of the original variable:<br>
<b>Refer the examples Pointer1 and Pointer for better understanding</b><br><br> 

<b>Some practice example for implementation </b><br>
<b>1.Discountcalculation.cpp</b><br>
<b>2.leapyear.cpp</b><br>
<b>3.factorial.cpp</b><br>

<b>Pointer to function</b><br><br>
In C++, like normal data pointers (int *, char *, etc), we can have pointers to functions. Following is a simple example(Pointertofunction1.cpp & Pointertofunction2.cpp ) that shows declaration and function call using function pointer.<br><br>

<b>9.Array</b><br>
An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.<br>
In C++, the index of the first array element is always zero. As expected, an n array must be declared prior its use. A typical declaration for an array in C++ is:<br>
type name [elements];<br><br>
<b>Different ways to INITIALIZING ARRAYS</b><br>
int a [5] = { }; <br>
int a [5] = { 16, 2, 77, 40, 12071 };  <br>
int a [5] = { 10, 20, 30 };<br>
int a [] = { 16, 2, 77, 40, 12071 };<br>
<br>
<b>ARRAY ACCESSING</b><br>
The values of any of the elements in an array can be accessed just like the value of a regular variable of the same type. The syntax is:<br>
name[index]
<br><br>
int foo[5];         // declaration of a new array<br>
foo[2] = 75;        // access to an element of the array. <br> 

<b>Multidimensional arrays</b> can be described as "arrays of arrays". For example, a bi-dimensional array can be imagined as a two-dimensional table made of elements, all of<br> them hold same type of elements.<br>
The C++ syntax for this is<br>

int Table [3][5];<br><br>
<b>10.Templates in C++</b><br>
A template is a simple and yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. For example, if i need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.
<br>
C++ adds two new keywords to support templates: <b>‘template’ and ‘typename’</b> The second keyword can always be replaced by keyword ‘class’.<br>
	<b>For esay understanding check templeteclass.cpp file</b> <br>
	<br>
	
<b>11.Terminology</b>
<br>
	<b>Formal Parameter<b> : A variable and its type as they appear in the prototype of the function or method.<br>
	<b>Actual Parameter</b> : The variable or expression corresponding to a formal parameter that appears in the function or method call in the calling environment.<br>
	For esay understanding check argumnet2.cpp file<br>

<br>
<b>12.Important methods of Parameter Passing<b>

<b>Pass By Value</b> : This method uses in-mode semantics. Changes made to formal parameter do not get transmitted back to the caller. Any modifications to the formal 		parameter variable inside the called function or method affect only the separate storage location and will not be reflected in the actual parameter in the calling	 	environment<br<br>
<b>Pass by reference(aliasing)</b>
This technique uses in/out-mode semantics. Changes made to formal parameter do get transmitted back to the caller through parameter passing. Any changes to the formal 		parameter are reflected in the actual parameter in the calling environment as formal parameter receives a reference (or pointer) to the actual data. This method is also 	called as <em>call by reference. This method is efficient in both time and space.<br><br>
<b>Passing arguments by address</b><br>
There is one more way to pass variables to functions, and that is by address. Passing an argument by address involves passing the address of the argument variable rather 	than the argument variable itself.
	
