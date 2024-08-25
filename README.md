# Experiment-3

AIM: To study and implement operators C++

SOFTWARE: Visual Studio Code

THEORY: These are basically symbols that operate on operands. There basic types of operators in c++ which is also used in the codes:

1.Arithmetic operators (+,-,*,/,%). 

The code performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus. These operations are demonstrated with two integers, a and b, which the user inputs.

2.Increment and decrement operators(++,--)
   
a++ increments a after using its current value. a-- decrements a before using its new value.
   
3.Assigment operators(=,+=,-=,*=,/=). 

+= adds a value to the current variable .

-= subtracts a value from the current variable .

*= multiplies the variable by a value.

/= divides the variable by a value .

%= takes the modulus of the variable by a value.


4.Comparision operators (==,<=,>=,!=).
   
"=="checks if values are equal.

"!="checks if values are not equal.

">"checks if one value is greater than another.

"<"checks if one value is less than another.

">="checks if one value is greater than or equal to another.

"<="checks if one value is less than or equal to another.

   
5.Logical operators (&&,||,!). 

&& (logical AND) evaluates to true if both conditions are true.

|| (logical OR) evaluates to true if at least one condition is true.

! (logical NOT) inverts the result of a condition.

CODE:

```
#include <iostream>
using namespace std;
int main()
{
    int a,b,sum=0,diff=0,prod=0,q=0,modulus=0;
    cout<<"Enter the first no.:";
    cin>>a;
    cout<<"Enter the second no.:";
    cin>>b;
   
    sum=a+b;
    cout<<"Sum of the given nos. is:"<<sum<<endl;
     diff=a-b;
    cout<<"Difference of the given nos. is:"<<diff<<endl;
     prod=a*b;
    cout<<"Product of the given nos. is:"<<prod<<endl;
     q=a/b;
    cout<<"Division of the given nos. is:"<<q<<endl;
    modulus=a%b;
    cout<<"Modulus of the given nos. is:"<<modulus<<endl;

     int c,d;
     c=a++;
     cout<<"Increment of a is:"<<a++<<endl;
     d=--a;
     cout<<"Decrement of a is:"<<--a<<endl;
     
     //assignment operators
    int e=4,f=6,g=8,h=2,i=2;
    e+=4;
    cout<<"value of e is:"<<e<<endl;
    f-=7;
    cout<<"value of f is:"<<f<<endl;
    g*=3;
    cout<<"value of g is:"<<g<<endl;
    h/=2;
    cout<<"value of h is:"<<h<<endl;
    i%=4;
    cout<<"value of i is:"<<i<<endl;
   
  //comparison operators
  if(a==b){
      cout<<"a is equal to b"<<endl;
  }
  else if (a!=b);{
      cout<<"a is not equal to b"<<endl;
 
    }
     if (e>f){
         cout<<"e is greater than f"<<endl;
         
     }
     else if (e<f);{
         cout<<"e is less than f"<<endl;
         }
     if(a>=b){
         cout<<"a is greater or equal to b"<<endl;
         
     }
     else if(a<=b);{
          cout<<"a is less or equal to b"<<endl;
     }
    //logical operators
int x,y,z;
    x=(e>5 && f<8);
 cout<<"Logical AND:"<<x<<endl;
    
    
     y=(e>5||f>6);
        cout<<"Logical OR:"<<y<<endl;
       
    
    z=!(e>b||e>a);
       cout<<"Logical NOT:"<<z<<endl;
    
   
    return 0;
}
```
OUTPUT :  ![image](https://github.com/user-attachments/assets/7ec3d2ab-78f1-4228-aa46-636149e0da02)


CONCLUSION:

The C++ arithmetic, assignment, comparison, and logical operators are all effectively shown in the code. It takes two integer inputs from the user, manipulates them, and outputs the output. Assignment operators and logical operators are included for showing how to work with and analyze values in various situations.
