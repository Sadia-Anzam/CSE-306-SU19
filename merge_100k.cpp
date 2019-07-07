#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

void merges(int arr[],int p,int q,int r)
{

    int no=q-p+1,i,j,k;
    int nu=r-q;

    int L[no],R[nu];

    for(i=0; i<no; i++)
    {
        L[i]=arr[p+i];
    }

    for(j=0; j<nu; j++)
    {
        R[j]=arr[q+j+1];
    }

    i=0,j=0;
    for(k=p; i<no&&j<nu; k++)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i++];
        }
        else
        {
            arr[k]=R[j++];
        }
    }

    while(i<no)
    {
        arr[k++]=L[i++];
    }
    while(j<nu)
    {
        arr[k++]=R[j++];
    }
}

void mergesort(int arr[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merges(arr,p,q,r);
    }
}

int main()
{
    int arr[100000],i,j,k;

    ofstream input;

    input.open("merge100k_input.txt");

    for(int i=0; i<100000; i++)
    {

        arr[i]=rand();
        input<<arr[i]<<endl;
    }


    clock_t start=clock();


    mergesort(arr,0,100000-1);

    clock_t ends=clock();

    double time=double (ends-start)/CLOCKS_PER_SEC;

    cout<<"Taken time for 100K numbers  =   "<<time<<" sec"<<endl;

    ofstream output;

    output.open("merge100k_output.txt");

    for(int i=0; i<100000; i++)
    {
        output<<arr[i]<<endl;
    }

    output.close();
    return 0;
}

