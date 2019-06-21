#include<iostream>
using namespace std;

int main()
{

int k,i,size1;

cout<<"Enter the size:";
cin>>size1;
int *arrayy=new int [size1];
cout<<"\nEnter the values of array:";

for(k=0;k<size1;k++){
    cin>>arrayy[k];
}
cout<<"\n1D array= ";
for(i=0;i<size1;i++){
  cout<<arrayy[i];

}
cout<<endl;
delete[]arrayy;
return 0;
}

