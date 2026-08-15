
#include <iostream>
using namespace std;

void func1(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 5; j <=i; j++)
        {
          cout<<i ;
        }
        cout<< endl; 
    }
    
}
void func2(){
    for (int i = 0; i <5; i++)
    {
        for (int j =4; j >=i; j--)
        {
          cout<<j;
        }
        cout<< endl; 
    }
}
void func3(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <(n-i-1); j++)
        {
          cout<<" ";
        }
       for (int j = 0; j <(2*i +1); j++)
        {
          cout<<"*";
        }


        for (int j = 0; j <(n-i-1); j++)
        {
          cout<<" ";
        }
        cout<< endl; 
    }
    
}                
void func4(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i; j++)
        {
          cout<<" ";
        }
       for (int j = 0; j <(2*n-(2*i +1)) ; j++)
        {
          cout<<"*";
        }


        for (int j = 0; j <i; j++)
        {
          cout<<" ";
        }
        cout<< endl; 
    }
    
}                
void func5(int n)  {
  func3(n);
  func4(n);
   

}
void func6(int n){
  for (int i = 0; i < (2*n+1 ); i++)
  {
    int stars =i;
    if (i>n ) stars = (2*n-i) ;
    for (int j = 0; j < stars; j++)
    {
      cout<<"*";
      
      
    }
     
   cout<<endl;

  }
}
void func7(int n){

  int s=1;
  for (int i = 0; i < n; i++)
  {
    if (i%2==0) s = 1 ;
    else  s = 0;
   for (int j = 0; j < i; j++)
   {
     cout<< s;
      s= 1- s;
   }
   cout << endl; 

  }
  
}
void func8(int n){
   for (int i = 0; i <= n; i++)
   {
     int k ;
    for (int j = 0; j <= i; j++)
    {
       cout << k;
       k++ ;
    }
    cout<<endl; 
   }
   

}
void func9(int n){
     for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <='A'+i; j++)
        {
          cout<< j ;
        }
        cout<< endl; 
    }
    
}
void func10(int n){
  
     for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <=('A'+(n- i-1)); j++)
        {
          cout<< j ;
          
        }
        cout<< endl; 
    }
  }
void func11(int n){
     for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <=('A'+i); j++)
        {
          cout<< (char)('A'+i) ;
        }
        cout<< endl; 
    }


}
void func12(int n){
    char s = 'A'; 
  for (int i = 0; i < n; i++)
  {
    int bk = (2*i+1)/2;
    for (int j = 0; j < (n-i-1); j++)
    {
       cout <<" ";
    }
     for (int j = 1; j <=(2*i+1); j++)
    { 
      if(j <=bk) {s++; } 
      else  { s--;}       
      cout <<s;    
    }

    for (int j = 0; j < (n-i-1); j++)
    {
       cout <<" ";
    }
     cout<< endl;

  }
  
}
int main () {
    int n =5;
    // func2();
    // func1();
    // func3(n);
    // func4(n);
    // func5(n);
    // func6(n);

    // func8(n);
    // func9(n);
    // func10(n);
    // func11(n);
    func12(n);
    return 0;
  };