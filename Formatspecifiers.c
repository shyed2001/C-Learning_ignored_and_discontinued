/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include <stdbool.h>
#include<ctype.h>


int main(void)

{

/**
https://iq.opengenus.org/integer-datatype-in-c/#:~:text=The%20format%20specifier%20of%20each%20variant%20of%20integer,a%29%3B%20printf%28%22%25d%22%2C%20b%29%3B%20printf%28%22%25lu%22%2C%20c%29%3B%20printf%28%22%25lld%22%2C%20d%29%3B%20%7D
https://stackoverflow.com/questions/28594606/scanning-and-printing-variable-data-type-double-in-c

https://www.google.com/search?client=opera&hs=mbc&sxsrf=ALeKk01i4Whd3cvlBusztiHVr2rdN98thw%3A1596615022635&ei=bmkqX8C2JomGyAOU8Ii4Cg&q=scanf+and+printf+of+double+and+float+in+c&oq=scanf+and+printf+of+double+and+float+in+c&gs_lcp=CgZwc3ktYWIQAzoECAAQRzoHCCMQsAIQJzoICAAQCBAHEB46CAgAEA0QBRAeOgQIIRAKUN-jAVjx8wFg-vkBaABwAXgAgAHJAogBlB2SAQgwLjE2LjMuMZgBAKABAaoBB2d3cy13aXrAAQE&sclient=psy-ab&ved=0ahUKEwjApZG6zoPrAhUJA3IKHRQ4AqcQ4dUDCAs&uact=5

https://stackoverflow.com/questions/19952200/scanf-printf-double-variable-c#:~:text=For%20variable%20argument%20functions%20like,and%20%25lf%20for%20double*%20.


https://www.tutorialspoint.com/format-specifiers-in-c

The format specifiers are used in C for input and output purposes. Using this concept the compiler can understand that what type of data is in a variable during taking input using the scanf() function and printing using printf() function. Here is a list of format specifiers.

Format Specifier	Type
%c	Character
%d	Signed integer
%e or %E	Scientific notation of floats
%f	Float values
%g or %G	Similar as %e or %E
%hi	Signed integer (short)
%hu	Unsigned Integer (short)
%i	Unsigned integer
%l or %ld or %li	Long
%lf	Double
%Lf	Long double
%lu	Unsigned int or unsigned long
%lli or %lld	Long long
%llu	Unsigned long long
%o	Octal representation
%p	Pointer
%s	String
%u	Unsigned int
%x or %X	Hexadecimal representation
%n	Prints nothing
%%	Prints % character
These are the basic format specifiers. We can add some other parts with the format specifiers. These are like below −

A minus symbol (-) sign tells left alignment

A number after % specifies the minimum field width. If string is less than the width, it will be filled with spaces

A period (.) is used to separate field width and precision

Example
 Live Demo

#include <stdio.h>
main() {
   char ch = 'B';
   printf("%c\n", ch); //printing character data
   //print decimal or integer data with d and i
   int x = 45, y = 90;
   printf("%d\n", x);
   printf("%i\n", y);
   float f = 12.67;
   printf("%f\n", f); //print float value
   printf("%e\n", f); //print in scientific notation
   int a = 67;
   printf("%o\n", a); //print in octal format
   printf("%x\n", a); //print in hex format
   char str[] = "Hello World";
   printf("%s\n", str);
   printf("%20s\n", str); //shift to the right 20 characters including the string
   printf("%-20s\n", str); //left align
   printf("%20.5s\n", str); //shift to the right 20 characters including the string, and print string up to 5 character
   printf("%-20.5s\n", str); //left align and print string up to 5 character
}
Output
B
45
90
12.670000
1.267000e+001
103
43
Hello World
Hello World
Hello World
Hello
Hello
We can use these format specifiers for the scanf() function also in the same manner. So we can take the input from scanf() like above how we have printed.


https://www.w3schools.in/c-tutorial/format-specifiers/



Format Specifier	Description
%d	Integer Format Specifier
%f	Float Format Specifier
%c	Character Format Specifier
%s	String Format Specifier
%u	Unsigned Integer Format Specifier
%ld	Long Int Format Specifier
The %d format specifier is implemented for representing integer values. This is used with printf() function for printing the integer value stored in the variable.

printf("%d",<variable name>);
The %f format specifier is implemented for representing fractional values. This is implemented within printf() function for printing the fractional or floating value stored in the variable. Whenever you need to print any fractional or floating data, you have to use %f format specifier.

printf("%f", <variable name>);
The %c format specifier is implemented for representing characters. This is used with printf() function for printing the character stored in a variable. When you want to print a character data, you should incorporate the %c format specifier.

printf("%c",<variable name>);
The %s format specifier is implemented for representing strings. This is used in printf() function for printing a string stored in the character array variable. When you have to print a string, you should implement the %s format specifier.

printf("%s",<variable name>);
The %u format specifier is implemented for fetching values from the address of a variable having unsigned decimal integer stored in the memory. This is used within printf() function for printing the unsigned integer variable.

printf("%u",<variable name>);
The %ld format specifier is implemented for representing long integer values. This is implemented with printf() function for printing the long integer value stored in the variable.

printf("%ld",<variable name>);


https://www.geeksforgeeks.org/format-specifiers-in-c/#:~:text=Format%20specifiers%20in%20C.%20The%20format%20specifier%20is,but%20there%20is%20some%20difference%20which%20we%20


Format specifiers in C
Difficulty Level : Easy
Last Updated : 08 Mar, 2021
The format specifier is used during input and output. It is a way to tell the compiler what type of data is in a variable during taking input using scanf() or printing using printf(). Some examples are %c, %d, %f, etc.
The format specifier in printf() and scanf() are mostly the same but there is some difference which we will see.

printf(char *format, arg1, arg2, …)
This function prints the character on standard output and returns the number of character printed the format is a string starting with % and ends with conversion character (like c, i, f, d, etc.).
Between both, there can be elements governing the printing format. Below is its description

A minus(-) sign tells left alignment.
A number after % specifies the minimum field width to be printed if the characters are less than the size of width the remaining space is filled with space and if it is greater than it printed as it is without truncation.
A period( . ) symbol separate field width with the precision.
Precision tells the maximum number of digits in integer, characters in string and number of digits after decimal part in floating value.
Lets see these..
Character format specifier : %c


#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("%c\n", ch);
    return 0;
}
Output:
A


For Signed Integer format specifier : %d, %i




#include <stdio.h>
int main()
{
    int x = 45, y = 90;
    printf("%d\n", x);
    printf("%i\n", x);
    return 0;
}
Output:
45
45


Unsigned Integer Format Specifier: %u:


#include <stdio.h>
int main()
{
    // The -10 value is converted into it's positive
    // equivalent by %u
    printf("%u\n", -10);
    printf("%u\n", 10);
    return 0;
}
Output: 4294967286
        10
Floating-point format specifier : %f, %e or %E


#include <stdio.h>
int main()
{
    float a = 12.67;
    printf("%f\n", a);
    printf("%e\n", a);
    return 0;
}
Output:
12.670000
1.267000e+01


Unsigned Octal number for integer : %o


#include <stdio.h>
int main()
{
    int a = 67;
    printf("%o\n", a);
    return 0;
}
Output:
103


Unsigned Hexadecimal for integer: %x, %X


#include <stdio.h>
int main()
{
    int a = 15;
    printf("%x\n", a);
    return 0;
}
Output:

f


String printing: %s


#include <stdio.h>
int main()
{
    char a[] = "geeksforgeeks";
    printf("%s\n", a);
    return 0;
}
Output:
geeksforgeeks


Address Printing: %p

When our intention is to print the memory address of a variable/pointer ‘%d’ will not work because ‘%d’ will try to format an address into a number and values like 0xbfdd812 is clearly not a number, ie we MUST use %p.


#include <stdio.h>
int main()
{
    int a = 10;
    printf("The Memory Address of a: %p\n",(void*)&a);
    return 0;
}
Output: The Memory Address of a: 0x7ffc85861624
More formatting

#include <stdio.h>
int main()
{
    char str[] = "geeksforgeeks";
    printf("%20s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n", str);
    return 0;
}
Output:
       geeksforgeeks
geeksforgeeks
               geeks
geeks


scanf(char *format, arg1, arg2, …)
This function take input using standard input (keyboard) and store it in variable accordingly. It returns the number of items successfully read. Formal parameter arg1, agr2, .. must be a pointer
decimal integer : %d


#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a); // input is 45
    printf("%d\n", a);
    return 0;
}
Integer may be octal or in hexadecimal : %i


#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%i", &a); // input is 017 (octal of 15 )
    printf("%d\n", a);
    scanf("%i", &a); // input is 0xf (hexadecimal of 15 )
    printf("%d\n", a);
    return 0;
}
Double floating-point number : %lf


#include <stdio.h>
int main()
{
    double a = 0.0;
    scanf("%lf", &a); // input is 45.65
    printf("%lf\n", a);
    return 0;
}
Output:
45.650000


String input : %s


#include <stdio.h>
int main()
{
    char str[20];
    scanf("%s", str); // input is geeksforgeeks
    printf("%s\n", str);
    return 0;
}
Output:
P@


Character input : %c


#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch); // input is A
    printf("%c\n", ch);
    return 0;
}
Many other format specifiers are also there
1.%u for an unsigned integer.
2.%lld for long long int.
3.%o octal integer without leading zero
4.%x hexadecimal integer without 0x before the number.


https://www.freecodecamp.org/news/format-specifiers-in-c/



Format specifiers define the type of data to be printed on standard output. You need to use format specifiers whether you're printing formatted output with printf() or  accepting input with scanf().

Some of the % specifiers that you can use in ANSI C are as follows:

SPECIFIER	USED FOR
%c	a single character
%s	a string
%hi	short (signed)
%hu	short (unsigned)
%Lf	long double
%n	prints nothing
%d	a decimal integer (assumes base 10)
%i	a decimal integer (detects the base automatically)
%o	an octal (base 8) integer
%x	a hexadecimal (base 16) integer
%p	an address (or pointer)
%f	a floating point number for floats
%u	int unsigned decimal
%e	a floating point number in scientific notation
%E	a floating point number in scientific notation
%%	the % symbol
Examples:
%c single character format specifier:
#include <stdio.h>

int main() {
  char first_ch = 'f';
  printf("%c\n", first_ch);
  return 0;
}
Output:

f
%s string format specifier:
#include <stdio.h>

int main() {
  char str[] = "freeCodeCamp";
  printf("%s\n", str);
  return 0;
}
Output:

freeCodeCamp
Character input with the %c format specifier:
#include <stdio.h>

int main() {
  char user_ch;
  scanf("%c", &user_ch); // user inputs Y
  printf("%c\n", user_ch);
  return 0;
}
Output:

Y
String input with the %s format specifier:
#include <stdio.h>

int main() {
  char user_str[20];
  scanf("%s", user_str); // user inputs fCC
  printf("%s\n", user_str);
  return 0;
}
Output:

fCC
%d and %i decimal integer format specifiers:
#include <stdio.h>

int main() {
  int found = 2015, curr = 2020;
  printf("%d\n", found);
  printf("%i\n", curr);
  return 0;
}
Output:

2015
2020
%f and %e floating point number format specifiers:
#include <stdio.h>

int main() {
  float num = 19.99;
  printf("%f\n", num);
  printf("%e\n", num);
  return 0;
}
Output:

19.990000
1.999000e+01
%o octal integer format specifier:
#include <stdio.h>

int main() {
  int num = 31;
  printf("%o\n", num);
  return 0;
}
Output:

37
%x hexadecimal integer format specifier:
#include <stdio.h>

int main() {
  int c = 28;
  printf("%x\n", c);
  return 0;
}
Output:

1c







**/

   char ch = 'B';
   printf("%c\n", ch); //printing character data
   //print decimal or integer data with d and i

     printf(R"( //print decimal or integer data with d and i )");
  printf("\n\n");

   int x = 45, y = 90;
   printf("%d\n", x);
   printf("%i\n", y);

   float f = 12.676767;
   printf("%.3f\n", f); ///print float value /// Printing to only 3rd position after . decimal position;
   printf("%f\n", f); //print float value
   printf("%e\n", f); //print in scientific notation

   int a = 67;
   printf("%o\n", a); //print in octal format
   printf("%x\n", a); //print in hex format

   char str[] = "Hello World";
   printf("%s\n", str);
   printf("%20s\n", str); //shift to the right 20 characters including the string
   printf("%-20s\n", str); //left align
   printf("%20.5s\n", str); //shift to the right 20 characters including the string, and print string up to 5 character
   printf("%-20.5s\n", str); //left align and print string up to 5 character









return 0;

}



/*

Every programming language has in-built types to differentiate between the nature of various data (input or output or intermediate). Integer is a common data type which is widely use in general programming and in scientific computing.

Integer is defined as a number which has no fractional component. Numbers which have a fractional component is known floating point numbers. Despite the fact that floating point numbers can represent numbers accurately, integers have their own place in the world of computing due to:

Integers consumes significantly less space than Floating point numbers
Calculations using integers are much faster (over 2 times) due to hardware architecture
In C programming language, integer data is represented by its own datatype known as int. It has several variants which differs based on memory consumption includes:

int
long
short
long long
Usage
In C, one can define an integer variable as:


int main()
{
   int a = 1;
   short b = 1;
   long c = 1;
   long long d = 1;
}CCopy
Signed and Unsigned version
As the range of numbers determined by a datatype like int is limited and both negative and positive numbers are required, we have two options:

signed integers: range is equally divided among negative and positive numbers (including 0)
unsigned integers: range starts from 0 to the upper positive number limit
Hence, unsigned integers are used when:

negative numbers are not required
increase the range of positive number by double
One can defined an unsigned integer by placing the keyword unsigned before the usual declaration/ initialization like:

int main()
{
   unsigned int a = 1;
   unsigned long b = 1;
}CCopy
The default declaration is the signed version signed.


Hence, there are 8 possible types for integer:

int
unsigned int
short
unsigned short
long
unsigned long
long long
unsigned long long
Format specifier
To print a value in C using printf, one needs to specify the datatype of the data to be printed. The format specifier of each variant of integer datatype is different in C.

For instance, int datatype has %d as the format specifier.

Following code demonstrates the idea:

int main()
{
   unsigned int a = 1;
   int b = 1;
   unsigned long c = 1;
   long long d = 1;
   printf("%u", a);
   printf("%d", b);
   printf("%lu", c);
   printf("%lld", d);
}CCopy
Range and memory consumption
One can find the memory consumed by a data type as follows:

int main()
{
    printf("size of int : %d\n",sizeof(int));
    printf("size of signed int : %d\n",sizeof(signed int));
    printf("size of unsigned long : %d\n",sizeof(unsigned long));
    return 0;
}CCopy
Ideally, memory consumed by the signed and unsigned variants are the same. It only differs in the range.

If Integer data type int is of 4 bytes, then the range is calculated as follows:

4 bytes = 4 X 8 = 32 bits

Each bit can store 2 values (0 and 1)

Hence, integer data type can hold 2^32 values

In signed version, the most significant bit is reserved for sign. So, 0 denotes positive number and 1 denotes negative number.

Hence

range of unsigned int is 0 to 2^32-1
range of signed int is -2^31 to 2^31-1
The exact value of memory and range depends on the hardware but remains same across several hardware types. Following table summarizes the values:

DATA TYPE	SIZE (IN BYTES)	RANGE	FORMAT SPECIFIER
int	4	-2147483648 to 2147483647	%d
unsigned int	4	0 to 4294967295	%u
short	2	-32768 to 32767	%hd
unsigned short	2	0 to 65535	%hu
long	8	-9223372036854775808 to 9223372036854775807	%ld
unsigned long	8	0 to 18446744073709551615	%lu
long long	8	-9223372036854775808 to 9223372036854775807	%lld
unsigned long long	8	0 to 18446744073709551615	%llu
In some platforms, long long and long refer to the same size but in other platforms, long long can be double the size of long.

In general, the rules are:

signed and unsigned version will have the same size
size of int is 4 bytes
size of short <= size of int
size of int <= size of long
size of long <= size of long long
Integer overflow
As we have seen that each integer datatype has a fixed range beyond which it will fail. In case, a number falls beyond the range of a datatype, then the code will wrap around to give an errorneous result.

Consider the case of int where the range is -2147483648 to 2147483647.

Key points to note in case of signed int are:

The number after 2147483647 is -2147483648.
The number after -2147483648 is -2147483647
2147483648 is represented as -2147483648 as it is wrapped around

*/
