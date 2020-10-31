# All About C++ Langauage(Coding)
<i>
 This repo includes all the essential things with coding as well as theory in <b>README file</b>..... that everyone should know about that.<br><br>
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
<b>9.Pointers</b></br>
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

<b>10.Array</b><br>
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
<b>11.Templates in C++ </b><br>
A template is a simple and yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. For example, if i need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.
<br>
C++ adds two new keywords to support templates: <b>‘template’ and ‘typename’</b> The second keyword can always be replaced by keyword ‘class’.<br>
	<b>For esay understanding check templeteclass.cpp file</b> <br>
	<br>
	
<b>12.Terminology</b>
<br>
	<b>Formal Parameter</b> : A variable and its type as they appear in the prototype of the function or method.<br>
	<b>Actual Parameter</b> : The variable or expression corresponding to a formal parameter that appears in the function or method call in the calling environment.<br><br>
	For esay understanding check argumnet2.cpp file<br>

<br>
<b>13.Important methods of Parameter Passing</b>
<br>
<b>(i).Pass By Value</b> : This method uses in-mode semantics. Changes made to formal parameter do not get transmitted back to the caller. Any modifications to the formal 		parameter variable inside the called function or method affect only the separate storage location and will not be reflected in the actual parameter in the calling	 	environment<br><br>
<b>(ii).Pass by reference(aliasing)</b><br>
This technique uses in/out-mode semantics. Changes made to formal parameter do get transmitted back to the caller through parameter passing. Any changes to the formal 		parameter are reflected in the actual parameter in the calling environment as formal parameter receives a reference (or pointer) to the actual data. This method is also 	called as <em>call by reference. This method is efficient in both time and space.<br><br>
<b>(iii).Passing arguments by address</b><br>
There is one more way to pass variables to functions, and that is by address. Passing an argument by address involves passing the address of the argument variable rather 	than the argument variable itself.<br><br>
<b>14.Class and Object</b><br>
	<b>A class in C++ is a user-defined type or data structure declared with keyword class that has data and functions</b> (also called member variables and member<br> functions) as its members whose access is governed by the three access specifiers private, protected or public. By default access to members of a C++ class is private. The<br> private members are not accessible outside the class; they can be accessed only through methods of the class. The public members form an interface to the class and are<br> accessible outside the class.<br>
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated<br><br>
<br>For better understanding Refer to class.cpp file <br><br>
<b>15.Data-Hiding</b><br>
In simple words, data hiding is an object-oriented programming technique of hiding internal object details i.e. data members. Data hiding guarantees restricted data access
<br>to class members & maintain object integrity.<br>For better understanding Refer to DataHiding1.cpp file<br>
<b>16.Getter and Setter</b><br>
Getters and Setters allow you to effectively protect your data. This is a technique used greatly when creating classes. For each variable, a get method will return its value<br> and a set method will set the value. ... The getters and setters are usually public and the variables are made private.<br><br>For better understanding Refer to DataHiding2.cpp file
<br><br>
<b>17.Constructor</b><br>
A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is<br> special member function of the class.<br>

<i>How constructors are different from a normal member function?</i><br>

A constructor is different from normal functions in following ways:<br>
1.Constructor has same name as the class itself<br>
2.Constructors don’t have return type<br>
3.A constructor is automatically called when an object is created.<br>
If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).<br><br>
<b>18Parameterized Constructors:</b><br>
It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply <br>add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object.<br><br>
For better understanding refer to Parameterizedconstructor.cpp<br>
<br>
<b>19.Copy Constructor</b><br>
A copy constructor is a special constructor for creating a new object as a copy of an existing object. Copy constructors are the standard way of copying objects in C++, as opposed to cloning, and have C++-specific nuances.<br><br>
For better understanding refer to Parameterizedconstructor.cpp<br><br>
<b>20.Scope Resolution Operator </b><br>
The :: (scope resolution) operator is used to get hidden names due to variable scopes so that you can still use them. The scope resolution operator can be used as both unary and binary. You can use the unary scope operator if a namespace scope or global scope name is hidden by a particular declaration of an equivalent name during a block or class.<br>
<br>
For better understanding refer to scope_resolution.cpp<br>
<b>21.Inline function</b><br>
C++ inline function is powerful concept that is commonly used with classes. If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.
<br><br>
To inline a function, place the keyword inline before the function name and define the function before any calls are made to the function. The compiler can ignore the inline qualifier in case defined function is more than a line.<br>
For better understanding refer to InlineFunction.cpp<br><br>
<b>22.This Pointer</b><br>
In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.<br>
1.It can be used to pass current object as a parameter to another method.<br>
2.It can be used to refer current class instance variable.<br>
3.It can be used to declare indexers.<br>
<br>
For better understanding refer to ThisPointer.cpp<br><br>
<b>23.Strcture And Class</b><br>
In C++, a structure is the same as a class except for a few differences. The most important of them is security. A Structure is not secure and cannot hide its implementation details from the end user while a class is secure and can hide its programming and designing details<br>
Members of a class are private by default and members of a struct are public by default.<br>
When deriving a struct from a class/struct, default access-specifier for a base class/struct is public. And when deriving a class, default access specifier is private.<br><br>
For better understanding refer to StructureAndClass.cpp<br><br>
<b>24.Inheritance</b><br>
In object-oriented programming, inheritance is the mechanism of basing an object or class upon another object or class, retaining similar implementation. Also defined as deriving new classes from existing ones such as super class or base class and then forming them into a hierarchy of classes.<br>
<br>
<b>25.Access Specifiers</b><br>
C++ access specifiers are used for determining or setting the boundary for the availability of class members (data members and member functions) beyond that class.<br>
For example, the class members are grouped into sections, private protected and public. These keywords are called access specifiers which define the accessibility or visibility level of class members.<br><br>
<b>(i).Public Access Specifier</b><br>
If public access specifier is used while deriving class then the public data members of the base class becomes the public member of the derived class and protected members becomes the protected in the derived class but the private members of the base class are inaccessible.<br><br>
For better understanding refer to Public_Access_Specifier.cpp.cpp<br><br>
<b>(ii).Protected Access Specifier</b><br>
If protected access specifier is used while deriving class then the public and protected data members of the base class becomes the protected member of the derived class and private member of the base class are inaccessible.
<br>
In this case, the members of the base class can be used only within the derived class as protected members except for the private members.<br><br>
For better understanding refer to Protected_Access_Specifier.cpp.cpp<br><br>
<b>(iii).Private Access Specifier</b><br>
If private access specifier is used while creating a class, then the public and protected data members of the base class become the private member of the derived class and private member of base class remains private.<br>
In this case, the members of the base class can be used only within the derived class and cannot be accessed through the object of derived class whereas they can be accessed by creating a function in the derived class.<br><br>
For better understanding refer to Private_Access_Specifier.cpp<br><br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/As.png)
<br><br>
<b>26.Single Inheritance</b><br>
If a single class is derived from one base class then it is called single inheritance.<br> In C++ single inheritance base and derived class exhibit one to one relation.<br><br>
For better understanding refer to single_inheritance.cpp<br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/single.jpg)
<br><br>
<b>27.Hierarchical Inheritance</b><br>
When several classes are derived from common base class it is called hierarchical inheritance.<br>
In C++ hierarchical inheritance, the feature of the base class is inherited onto more than one sub-class.<br>
For example, a car is a common class from which Audi, Ferrari, Maruti etc can be derived.<br><br>
For better understanding refer to Hierarchical_inheritance.cpp<br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/hierachical.jpg)
<br><br>
<b>28.Multilevel Inheritance</b><br>
If a class is derived from another derived class then it is called multilevel inheritance. <br>So in C++ multilevel inheritance, a class has more than one parent class.<br>

For example, if we take animals as a base class then mammals are the derived class which has features of animals and then humans are the also derived class that is derived from sub-class mammals which inherit all the features of mammals.<br><br>
For better understanding refer to multilevel_inheritance.cpp<br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/Multilevel.jpg)<br><br>
<b>29.Mutiple Inheritance</b><br>
To put it in simple words, in multilevel inheritance, a class is derived from a class which is also derived from another base class. And these levels of inheritance can be extended. On the contrary, in multiple inheritance, a class is derived from two different base classes.<br><br>
For better understanding refer to Multiple_inheritance.cpp<br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/Multiple.jpg)<br><br>
<b>30.Hybrid Inheritance</b>
The inheritance in which the derivation of a class involves more than one form of any inheritance is called hybrid inheritance. Basically C++ hybrid inheritance is combination of two or more types of inheritance. It can also be called multi path inheritance.<br><br>
For better understanding refer to Hybrid_inheritance.cpp<br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/Hybrid.jpg)<br><br>
<b>31.Polymorphism</b><br>
Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions. In C++ we have two types of polymorphism:<br>
1) Compile time Polymorphism – This is also known as static (or early) binding.<br>
Function overloading and Operator overloading are perfect example of Compile time polymorphism.<br><br>
2) Runtime Polymorphism – This is also known as dynamic (or late) binding.<br>
Function overriding is an example of Runtime polymorphism.<br>
<br>
<b>32.Function Overloading</b>
<br>
Function overloading is a C++ programming feature that allows us to have more than one function having same name but different parameter list.<br>
For better understanding refer to FunctionOverloading.cpp<br><br>
<b>33.Function Overriding</b><br>
Function overriding is a feature that allows us to have a same function in child class which is already present in the parent class. A child class inherits the data members and member functions of parent class, but when you want to override a functionality in the child class then you can use function overriding. It is like creating a new version of an old function, in the child class.<br><br>
For better understanding refer to FunctionOverriding.cpp<br><br>
<b>34.Operators Overloading</b><br>
Operators Overloading in C++... we can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.<br>
Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.<br>
<br>
For better understanding refer to OperatorOverloading.cpp<br><br>
<b>35.Operator Overloading using a Friend function:</b><br>
In this approach, the operator overloading function must precede with friend keyword, and declare a function class scope. ll the working and implementation would same as binary operator function except this function will be implemented outside of the class scope.<br><br>
For better understanding refer to OperatorOverloadingUsingFriendFunction.cpp<br><br>
<b>36.Virtual Function</b><br>
A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.<br><br>

For better understanding refer to VirtualFunction.cpp and Polymorphism.cpp<br><br>
<b>37.Abstract Class</b><br>
An abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that has no definition). The classes inheriting the abstract class must provide a definition for the pure virtual function; otherwise, the subclass would become an abstract class itself.<br><br>

For better understanding refer to VirtualFunction.cpp and Abstract_Class.cpp<br><br>
<b>38.Friend Function</b><br>
A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.<br>

A friend can be a function, function template, or member function, or a class or class template, in which case the entire class and all of its members are friends.<br><br>
For better understanding refer to Friend_function.cpp<br><br>
<b>39.Friend Class</b><br>
A friend class in C++ can access the private and protected members of the class in which it is declared as a friend.A significant use of a friend class is for a part of a data structure, represented by a class, to provide access to the main class representing that data structure. The friend class mechanism allows to extend the storage and access to the parts, while retaining proper encapsulation as seen by the users of the data structure.<br><br>
For better understanding refer to  Friend_class.cpp<br><br>
<b>40.Static Members</b><br>
We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.<br>
A static member is shared by all objects of the class. All static data is initialized to zero when the first object is created, if no other initialization is present. We can't put it in the class definition but it can be initialized outside the class as done in the following example by redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.<br><br>
For better understanding refer to  Static_member.cpp<br><br>
<b>41.Static Members Function</b><br>
By declaring a function member as static, you make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.<br>
A static member function can only access static data member, other static member functions and any other functions from outside the class.<br><br>
For better understanding refer to  Static_member_function.cpp<br><br>
<b>42.Nested Class</b><br>
A nested class is a class that is declared in another class. The nested class is also a member variable of the enclosing class and has the same access rights as the other members. However, the member functions of the enclosing class have no special access to the members of a nested class.<br><br>
For better understanding refer to Nested_Class.cpp<br><br>
<b>43.Anonymous Class</b><br>
 A class with no name provided is known as an anonymous class in c++. An anonymous class is a special class with one basic property.<br>
As there is no name given to the class there is no constructor allocated to it, though a destructor is there for deallocating the memory block.<br>
The class cannot be used as an element of a function i.e. we cannot pass it as an argument or cannot accept values return from the function.<br><br>
For better understanding refer to Anonymous_Class.cpp<br><br>
<b>44.Exception Handling </b><br>
An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero.<br>
Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and throw.
<br><br>
throw − A program throws an exception when a problem shows up. This is done using a throw keyword.<br>

catch − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.<br>

try − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.<br><br>
Assuming a block will raise an exception, a method catches an exception using a combination of the try and catch keywords. A try/catch block is placed around the code that might generate an exception. Code within a try/catch block is referred to as protected code, and the syntax for using try/catch<br><br>
For better understanding refer to Exception Handling.cpp , Communicate_between_try_and_throw_with_function , All_About_Throw.cpp and All_about_Catch.cpp
<br><br>
<b>45.Namespaces in c++</b><br>
A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.<br><br>
For better understanding refer to Namespace.cpp<br><br>
<b>46.Constructor and Destructor in C++</b><br>
A class constructor is a special member function of a class that is executed whenever we create new objects of that class.<br>
A constructor will have exact same name as the class and it does not have any return type at all, not even void. Constructors can be very useful for setting initial values for certain member variables.<br><br>
A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.<br>
A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither return a value nor can it take any parameters. Destructor can be very useful for releasing resources before coming out of the program like closing files, releasing memories etc.<br><br>
For better understanding refer to Destructor.cpp<br><br>
<b>47.Order Of Execution</b><br>
C++ constructor call order will be from top to down that is from base class to derived class .<br>
But c++ destructor call order will be in reverse order.<br><br>
For better understanding refer to Order_of_Execution.cpp<br><br>
<b>48.Virtual destructors</b><br>
Destructors in the Base class can be Virtual. Whenever Upcasting is done, Destructors of the Base class must be made virtual for proper destrucstion of the object when the program exits.<br>
Virtual destructors are useful when you might potentially delete an instance of a derived class through a pointer to base class.<br>
NOTE: Constructors are never Virtual, only Destructors can be Virtual.<br><br>
For better understanding refer to Virtual_Destructor.cpp<br><br>
<b>49.Input/output streams</b><br>
C++ input/output streams are primarily defined by iostream, a header file that is part of the C++ standard library (the name stands for Input/Output Stream). In C++ and its predecessor, the C programming language, there is no special syntax for streaming data input or output. Instead, these are combined as a library of functions. Like the cstdio header inherited from C's stdio.h, iostream provides basic input and output services for C++ programs. iostream uses the objects cin, cout, cerr, and clog for sending data to and from the standard streams input, output, error (unbuffered), and log (buffered) respectively. As part of the C++ standard library, these objects are a part of the std namespace.<br><br>
<b>50.Stream class hierarchy in c++</b><br>
![](https://github.com/iamketan56/All-About-CPP-Langauage-Coding-/blob/main/stream-class-hierarchy.jpeg)<br><br>
<b>51.Data type</b><br>
<b>(i).ofstream</b><br>
This data type represents the output file stream and is used to create files and to write information to files.<br>
 <b>(ii).ifstream</b><br>
This data type represents the input file stream and is used to read information from files.<br>	
<b>(iii).fstream</b><br>
This data type represents the file stream generally, and has the capabilities of both ofstream and ifstream which means it can create files, write information to files, and read information from files.<br><br>

<b>52.Opening a File</b><br>
A file must be opened before you can read from it or write to it. Either ofstream or fstream object may be used to open a file for writing. And ifstream object is used to open a file for reading purpose only.<br><br>

Following is the standard syntax for open() function, which is a member of fstream, ifstream, and ofstream objects.<br>

<b>void open(const char *filename, ios::openmode mode);</b></br>
Here, the first argument specifies the name and location of the file to be opened and the second argument of the open() member function defines the mode in which the file should be opened.
<br><br>
<b>53.Mode Flag & Description</b><br>
i) ios::app<br>
Append mode. All output to that file to be appended to the end.
<br>
ii) ios::ate<br>
Open a file for output and move the read/write control to the end of the file.
<br>
iii) ios::in
<br>
Open a file for reading.<br>

iv) ios::out
<br>
Open a file for writing.
<br>

v) ios::trunc
<br>
If the file already exists, its contents will be truncated before opening the file.<br><br>
For better understanding refer to File_Handling.cpp ,File_Handling1.cpp and File_Handling2.cpp  <br><br>
</i>	
	
