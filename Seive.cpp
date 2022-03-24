//SeiveAlgorithm
#include<iostream>
using namespace std;

void Seive(int n,bool primes[]);
int main(){
    int n;
    cout<<"Enter the range to count prime"<<"\n";
    cin>>n;
    int count=0;
    bool primes[n+1];
    Seive(n,primes);        //Calling Seive Function
    for(int i=0;i<n;i++){
        if(primes[i]){
            count++;
        }
    }
    cout<<count;
}
void Seive(int n,bool primes[]){
    for(int i=0;i<n;i++){
        primes[i]=true;
    }
    primes[0]=primes[1]=false;
    for(int j=2;j*j<n;j++){
        if(primes[j]){
            for(int k=j*j;k<n;k+=j){
                primes[k]=false;
            }
        }
    }
}
