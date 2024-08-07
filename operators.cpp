//Sherlyn Tiwari
//PRN- 23070123119
//Exp 4 Operators 

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
