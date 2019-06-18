#include<iostream>
using namespace std;

int main()
{
int array_one[5];
int k,i;
cout<<"Enter 5 value of array:";
for(k=0;k<5;k++){
    cin>>array_one[k];
}
cout<<"\n1D array= ";
for(i=0;i<5;i++){
  cout<<array_one[i];

}
cout<<endl;
return 0;
}

