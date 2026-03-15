// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     return 0;
// }

////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"this is " << "om";
//     return 0;
// }

/////////////////////////////////////////////////////////////////////

// /*    DATA TYPES   */
// #include <iostream>
// using namespace std;
// int main(){
//     int age = 19;
//     float height = 172.6;
//     char grade = 'A';
//     double PI  = 3.14;
//     cout<<"the age is"<< age
//     <<" height is " << height
//     <<" grade is "<< grade;
//     return 0;
// }

////////////////////////////////////////////////////////////////////

// /*      BOOLEAN      */
// // 1  -  True
// // 0  -  False

// #include<iostream>
// using namespace std;
// int main(){
//     bool isstudent = true;
//     cout<<"user is student if output is 1 \n " << isstudent;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////

// /*      typecasting (explicit)      */

// #include <iostream>
// using namespace std;
// int main(){
//     float price = 58.79;
//     int newprice = (int)price;
//     cout<<newprice;
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////

// /*          INPUT          */

// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age : ";
//     cin>>age;

//     cout<<"You are "<<age << " years old";
//     return 0;
// }

///////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     string name;
//     int semester;
//     float sgpa;
//     cout << "Enter your age : ";
//     cin >> age;
//     cout << "Enter your name : ";
//     cin >> name;
//     cout << "Enter previous semester : ";
//     cin >> semester;
//     cout << "Enter your sgpa : ";
//     cin >> sgpa;
//     cout<<"\n";
//     cout<<"User details: \n NAME:"<<name<<"\n AGE:"<<age<<"\n Semester:"<<semester<<"\n sgpa:"<<sgpa;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////

// sum of 2 no.s

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the first number: ";
//     cin>>a;
//     cout<<"enter the second number: ";
//     cin>>b;
//     cout<<"\nTHE SUM IS = "<<a+b;

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

/*[q]Find character is uppercase or lowercase*/

// #include<iostream>
// using namespace std;
// int main(){
//     char input;
//     cout<<"Enter a charcter :";
//     cin>>input;
//     if(input>='a' && input<='z'){
//         cout<<"charcter is lowercase";
//     }else if(input>='A' && input<='Z'){
//         cout<<"charcter is UPPERCASE";
//     }

//     return 0;
// }

/*using ASCII value*/

// #include <iostream>
// using namespace std;
// int main(){
//     char input;
//     cout<<"Enter a charcter :";
//     cin>>input;
//     if(input>=65 && input<=90){
//     cout<<"charcter is UPPPERCASE";
//     }else{
//         cout<<"charcter is lowercase";
//     }
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////

/*      TERNARY OPERATOR      */

// //[q]find positive or negative integer
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<< (a>0?"positive":"negative");
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////

/*      while loop      */

// #include<iostream>
// using namespace std;
// int main(){
//     int count = 1;
//     while(count<11){
//         cout<<count<<" ";
//         count++;
//     }
//     return 0;
// }

/*      for loop      */

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 21;
//     for(int i = 1;i<n;i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }

/*      do-while loop      */

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10,i=1;
//     do{
//         cout<<i;
//         cout<<" ";
//         i++;
//     }while(i<=n);

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////

/*      [q1] sum of numbers from 1 to n     */

// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i = 1; i<=n ;i++){
//         sum=sum+i;
//     }
//     cout<<"The sum of numbers from 1 to n is = "<<sum;
//     return 0;
// }

/*      [q2]Sum of all odd numbers from 1 to n        */

// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i = 1; i<=n ; i=i+2){
//         sum=sum+i;
//     }
//     cout<<sum;
//     return 0;
// }

/*      [q3]Check if a number is prime or not       */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a;
//     cout << "enter a number n : ";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "number is NOT prime";
//         return 0;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         a = n % i;
//         if (a == 0)
//         {
//             cout << "number is NOT prime";
//             return 0;
//         }
//     }
//     cout << "Number is prime";
//     return 0;
// }

// or

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, n;
//     bool isPrime = true;
//     cout << "enter a number n : ";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "number is NOT prime";
//         return 0;
//     }
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime == true)
//         {
//             cout << "PRIME";
//         }
//         else
//         {
//             cout << "NOT prime";
//         }

//         return 0;
//     }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*          PATTERN PRINTING          */

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of lines: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"* * * * * *"<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter the number of lines : ";
//     cin>>n;
//     cout<<"Enter the number of stars in the line : ";
//     cin>>m;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1; j<=m ; j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

///////////////////////////////////////////

/*      {q}sum of all numbers from 1 to n which are divisible by 3         */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,sum = 0;
//     cout << "Enter the number n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             sum += i;
//         }
//     }
//     cout<<"Sum = "<<sum;

//     return 0;
// }


/////////////////////////////////////////////////

/*      {q}Print factorial of a number n             */

// #include<iostream>
// using namespace std;
// int main(){
//     int fact=1,n;
//     cout<<"Enter the number for which you need factorial= ";
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         fact*=i;
        
//     }
//     cout<<"factorial of "<<n<<" = "<<fact;
//     return 0;
// }



////////////////////////////////////////////////////////////////////////////////////////////////

/*      q]PATTERN PRINTING             */


// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter number of lines: ";
//     cin>>n;
//     cout<<"Enter number of charcters in the line: ";
//     cin>>m;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

////////////////////////

/*      q]cont. number pattern          */

// #include<iostream>
// using namespace std;
// int main(){
//     int n,num=1;
//     cout<<"ENter no. of line: "; 
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

////////////////////////

/*character continous printing*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char num=65;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


///////////////////////////////

/*      q]Triangle pattern          */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
 

///////////////////////////////////////

/*Number triangle*/


// #include <iostream>
// using namespace std;
// int main(){
//     int n,num=1;
//     cout<<"Enter number n: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<num<<" ";
//         }
//         cout<<endl;
//         num++;
//     }
//     return 0;
// }

/////////////////////////

/*letter triangle*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char m = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<m<<" ";

//         }
//         cout<<endl;
//         m++;


//     }
//     return 0;
// }

//////////////////

/*
1
12
123
1234
*/

// //using 3loops
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             for(int m=1;m<=i+1;m++){
//                 cout<<m<<" ";
            
//             }
//             cout<<endl;
//             break;
//         }
//     }
//     return 0;
// }


//using 2 loops
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int num =1;
//         for(int j=0; j<i+1; j++){
//             cout<<num<<" ";
//             num++;
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }


//////////////////////////

/*      Reverse triangle pattern    */
/*1
  2 1
  3 2 1
  4 3 2 1*/

  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cin>>n;
  //   int num=n;
  //   for(int i=0; i<n; i++){
  //       for(int j=i+1; j>0; j--){
  //         cout<<j<<" ";
  //       }
  //       cout<<endl;
  //   }

  //   return 0;
  // }


  //////////////

  /*    FLOYD'S TRIANGLE  
  1
  2 3
  4 5 6
  7 8 9 10
  
  */

  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n,num = 1;
  //   cin>>n;
  //   for(int i=0; i<n; i++){
  //     for(int j=0; j<i+1; j++){
  //       cout<<num<<" ";
  //       num++;
  //     }
  //     cout<<endl;
  //   }

  //   return 0;
  // }



#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char letter = 65;
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout<<letter<<" ";
      letter++;
    }
    cout<<endl;
  }
  return 0;
}

  ////////////////////////////////////////////////////



