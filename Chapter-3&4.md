# Decision Control Instruction
In many programs we need one set of instructions executed for one situation and other set of instructions for other situation. For such situations we use decision control instruction.
## The if-else statement
C uses if and else keywords to implement decision control instruction.

General form of if-else statement:
```
if(condition)
  statement1;
else
  statement2;
```
if condition is true statement1 will be executed else statement2 will be executed.

Conditions are expressed using relational operators.
```
this expression    is true if
x==y               x is equal to y
x!=y               x is not equal to y
x<y                x is less than y
x>y                x is greater than y
x<=y               x is less than or equal to y
x>=y               x is greater than or equal to y
```
### Multiple Statements within if-else
If multiple statements are to be executed, then statements must be placed within a pair of braces.
```
if(condition)
  {
    statement1;
    statement2;
  }
else
  {
    statement3;
    statement4;
  }
```
## Nested if-elses
We can also write another if-else statement within a if block or else block.This is known as nesting.
```
if(condition1)
  {
    if(condition2)
      {
        inner if block statements;
      }
    else
       {
         inner else block statements;
       }
  }
else
  {
    outer else block statements;
  }
```
* Never write a semocolon(;) after if statement. Compiler doesn't show any error but irrespective of the condition all the statements will be executed.
## else-if ladder
```
if(condition1)
  statement1;
else if(condition2)
  statement2;
else if(condition3)
  statement3;
      .
      .
      .
 else if(conditionn)
    statementn;
 else
    default statement;
 ```
 ## Hierarchy of operators
 ```
 Operators     Type
 !             Logical NOT
 * / %         Arithmetic and modulus
 + -           Arithmetic
 < > <= >=     Relational
 == !=         Relational
 &&            Logical AND
 ||            Logical OR
 =             Assignment
 ```
 ## The Conditional Operators
 The conditional operators ? and : are also called as ternary operations.
 
 ```
 expression1 ? expression2 : expression3
 ```
 if expression1 is true then expression2 will be executed else expression3 will be executed.
 
