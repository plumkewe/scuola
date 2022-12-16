# Struct

In C++, a struct is a user-defined data type that defines a physically grouped list of variables to be placed under one name in a block of memory. A structure created using the struct keyword is termed a struct type. It is a convenient tool for handling a group of logically related data items. Structs are very similar to classes, but they differ in two ways: they default to public access, and they do not support inheritance.

Structs are primarily used to group related data items of different data types into a single unit. For example, if you wanted to store information about an employee, you might use a struct that contains the employee's name, employee ID number, address, and phone number. Structs enable you to do this in a single statement, instead of declaring individual variables for each item of information. Additionally, structs allow you to easily access and modify related data items.

The syntax for declaring a struct is as follows:

struct struct_name {

type member1;

type member2;

...

type memberN;

};

The members inside the struct can be of different data types. To access the members of a struct, use the dot (.) operator, like this:

struct_name.member1;

struct_name.member2;

...

struct_name.memberN;

```diff
! written by AI
```