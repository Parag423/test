  //      *
  //     *** 
  //    ***** 
   



#include<iostream>
using namespace std;




void pattern(int n){
  for(int i=1;i<=n;i++){
 
    for(int j=1;j<=(n-i);j++){
     cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++){
      cout<<"*";
    }
    for(int l=1;l<=(n-i);l++){
      cout<<" ";
    }
    cout<<endl;
  }
}


int main(){

  cout<<"Enter the number want to print line of the pattern";
  int x;
  cin>>x;


  pattern(x);


  return 0;

}