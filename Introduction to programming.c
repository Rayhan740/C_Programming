/* Translator program - 1. Compiler 2. Interpretor 3. Assembler
 Token  - keyword , escape sequence , function , operator , data type
 Input- Output = ( scanf , printf)
 Operator - Using arithmetic operator to solve different kind of math problems.
 Control statement - 1. Conditional(if , else if , switch) 2. Loop Control (while , for, do while)
 Array - 1. 1D array 2. 2D array.

 Translator program - The work of translator is to turn the source code(That we write) into object code(that our computers understand)
 Assembler / compiler / Interpretor - Which can turn the assembler language (Nemonic code) into machine language called Assembler. ( mov , inc , add - is called Nemonic code)

 Which language you can compile- C , C++ , Objective C , C# , Pascal , COBOL , ADA , Visual Basic , Smalltalk , Scheme.
 Which language you can interpret - Python , Ruby , Php , BASIC , Javascript ,perl.
 Source code -> Preprocessor -> Compiler -> Assembler -> Linker -> Binary Executable

 Difference between compiler and interpretor-
 Compiler - Total program translate at a time then execute , It will take less time , Usable for big computer.
Interpretor- Line by line translate then execute , it will take more time , Usable for micro computer

 C programming was invented by Denis Ritchi
 C programming quality-
 C programming is a middle level language and it's a system programming language , structural language , platform dependent , Case sensitive.
  C programming uses -
 can create translator , can create game , can create computer virus , text editor , Can create computer anti virus.
 IDE - Integrated development environment - Eclipse , Code blocks , Net beans.
 */

#include<stdio.h> // stdio.h is a header file and we include that function cause we are using library function(printf) that's why we are using header file and we are usng # to include that in this code.
// stdio.h = Standard input output . header

int main() // int is a key word int means integer.
{

    printf("Hello World");
    return 0; // Return is a keyword it's describe that code ends successfully. you can use getch() here.
}
