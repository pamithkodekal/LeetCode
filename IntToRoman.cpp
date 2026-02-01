#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter Number: ";
    cin>>num;

    int Int[]={1000,900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string symbols[] = {
            "M", "CM", "D", "CD", "C", "XC",
            "L", "XL", "X", "IX", "V", "IV", "I"
        };

        string result="";

        for (int i = 0; i<13;i++){    //   if Digit = 230
            while(num >= Int[i]){     //   230 > 1000? No so i ++ till I == 100 
                result += symbols[i]; //   Once I = 100 then 230 > !00 so 
                num -= Int[i];  
                cout<<"num is : "<<num<<endl;
            }       
        }

        cout<<result;
        return 0;
    
}