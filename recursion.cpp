#include <iostream>

using namespace std;


    //A FUNCTION THAT CALLS ITSELF IS KNOW AS RECURSIVE FUNCTION:
   /* int sumn(int n){
    if(n==1)//Base case
        return 1;
        else if (n==0)
            return 0;
            else{
                return n+sumn(n-1);//Recursive call

        }

    }
    int main(){
    //variable declaration:
    int n,i,sum=0;
    cout<<"Using Loops:"<<endl;
    cout<<"Enter the value for upper bound"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    cout<<"\nSum is :"<<sum<<endl;
    cout<<"Using the recursion method :"<<endl;
    cout<<sumn(n);
    return 0;
}*/
int factorial(int);
int main(){
int n,result;
cout<<"Enter a non-negative integer"<<endl;
cin>>n;
result=factorial(n);
cout<<"Factorial of n "<<n<<"="<<result<<endl;
return 0;}
int factorial(int n){
if(n>1){
    return n*factorial(n-1);
}   else {
        return 1;
    }
}
