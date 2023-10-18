#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;

    int choice;
    cout<<"Calculator"<<endl;
    cout<<"Enter:"<<endl;
    cout<<"1. For Addition"<<endl;
    cout<<"2. For Subtraction"<<endl;
    cout<<"3. For Division"<<endl;
    cout<<"4. For Multiplication"<<endl;
    cin>>choice;

    switch(choice){
    case 1: cout<<"Sum of the numbers is: "<<a+b;
        break;

    case 2: cout<<"Difference between the two numbers is: "<<((a>b)?a-b:b-a);
        break;
    
    case 3: cout<<a<<" when divided by "<<b<<" yields "<<a/b;
        break;

    case 4: cout<<"On multiplying the two numbers, we get: "<<a*b;
        break;    
    }

}