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
