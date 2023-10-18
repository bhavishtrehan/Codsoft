#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = rand();

    int guess;
   
    while(1){
         cin>>guess;
         if(guess>num)
            cout<<"Too High"<<endl;
         else if(guess<num)
            cout<<"Too Low"<<endl;
         else
            {
                cout<<"Number guessed correctly";
                break;
            }
    }
}