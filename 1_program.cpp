#include <iostream>
using namespace std;

int main(){
/*
    cout<<"Nameste Duniya"<<endl; 
    cout << '\n';

    int a=5;
    cout << a <<endl;

    char b='t';              // char me sirf ek he character aa sakta hai
    cout << b << endl;

    bool bl= true ;
    cout << bl << endl ;

    float f=5.3;
    cout << f << endl;

    double d=6.46;
    cout << d << endl;

    int size = sizeof(f);
    cout << "size of f is : " << size << endl;
*/
/*
   int a='a';            // this a is typecasted in integor 
   cout << a << endl;

    char b= 98;
    cout << b << endl;
    
    char c = 123456;    // when size of number is greater than number it can store then we know that char has 1 byte so it can store till
    cout << c << endl;  // 64 hence the output will be @ which is corresponding value of 64 in ascii table 

    unsigned int = 45;  // undigned is used for only positive integors  and main benefit is that we get an extra bit negative numbers can't
                        // be stored ... very huge number will be displayed

*/
/*
    OPERATORS :
    1. Arithmetic operators : + - * / %
    --- isme thoda dyan bas / wale me dena hota hai 2/5 karenge to 0 ayega because int ko int se divide kiya hai 
    --- but agar float ko int se karte to float output ata 
    --- agar float ko int se karte aur usko int me store karvate to bhi 0 ata
    2. Relational operators : < > <= >= != 
    ---> 
    int a = 2;
    int b = 5;
    bool first = (a==b);
    cout << first << endl;

    bool second = (a>=b);
    cout << second << endl; 

    bool third = (a<=b);
    cout << third << endl;

    bool fourth = (a>b);
    cout << fourth << endl;

    bool fifth = (a<b);
    cout << fifth << endl;
    
    bool sixth = (a!=b);
    cout << sixth << endl;  

    3. Assignment operator --> =
    4. Logical Operators : && || ! 
    --> Multiple condition ek sath checck karni ho to 
        for example ,, kya app 18 plus ho and 90 se niche ho 
*/
/*
    if else , else if 

    a=cin.get();                         // cin.get() se hum space ,tab , enter etc ko. bhi input le sakte hai
    cout << a << endl; 
    cin >> a ;
    if (a>0){
        cout<< "a is positive" << endl ; 
    }
*/
/*   
    char n ;
    cout << "enter the value of n : " ;
    cin >> n;
    if (n>='a' && n <='z'){
        cout << "this is lower case " << endl ;
    }
    else if (n>='A'&& n <='Z'){
        cout << "this is uper case " << endl;
    }
    else if (n>='1' && n<='9'){
        cout << "this is numeric" << endl; 
    }
*/
/*
    //while loop (jab tak ye condition true hai)
    // sum of n even numbers 
    int n;
    cin >> n ;
    int i=2 , sum = 0;
    while (i<=n){
        sum = sum + i ;
        i=i+2;
    }
    cout << sum ;
*/
/*
    // find whether a number is prime or not 
    int n;
    cin >> n;
    int i=2 ;
    int flag =0 ;
    while (i<n){
        if (n%i==0){
            cout << "number is not prime "<< endl;
            flag = 1;
            break;
        }
        else {
            flag = 0;
        }
        i++;
    }
    if (flag==0){
        cout << "number is a prime number " << endl;
    }
*/
    
}
