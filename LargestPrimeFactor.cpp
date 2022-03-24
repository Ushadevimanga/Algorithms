//Finding factors using Seive Algorithm
#include<iostream>
using namespace std;

int main(){
    int S=0;
    cout<<"Enter The Number";
    cin>>N;                             //input
    int arr[N+1];
    for(int i=0;i<=N;i++){
        arr[i]=i;
    }
    for(int j=2;j*j<=N;j++){
        if(arr[j]==j){
            for(int k=j*j;k<=N;k+=j){  //Replacing the multiples of j with j
                if(arr[k]!=k){
                    continue;          //skip the values when it is already replaced
                }
                arr[k]=j;
            }
        }
    }
    while(true){                        //Finding the largest Prime Factor
        if(arr[N]==N)
            break;
        S=N/arr[N];
            N=S;
    }
    cout<<"\n"<<N;
}
