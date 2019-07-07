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

    int arr1[10];

    ofstream input1;

    input1.open("merge10_input.txt");

    for(int i=0; i<10; i++)
    {

        arr1[i]=rand();
        input1<<arr1[i]<<endl;
    }


    clock_t start1=clock();


    mergesort(arr1,0,10-1);

    clock_t ends1=clock();

    double time1=double (ends1-start1)/CLOCKS_PER_SEC;

    cout<<"Taken time for 10 numbers  =   "<<time1<<" sec"<<endl;

    ofstream output1;

    output1.open("merge_10.txt");

    for(int i=0; i<10; i++)
    {
        output1<<arr1[i]<<endl;
    }

    output1.close();








    int arr2[100];

    ofstream input2;

    input2.open("merge100_input.txt");

    for(int i=0; i<100; i++)
    {

        arr2[i]=rand();
        input2<<arr2[i]<<endl;
    }


    clock_t start2=clock();


    mergesort(arr2,0,100-1);

    clock_t ends2=clock();

    double time2=double (ends2-start2)/CLOCKS_PER_SEC;

    cout<<"Taken time for 100 numbers  =   "<<time2<<" sec"<<endl;

    ofstream output2;

    output2.open("merge_100.txt");

    for(int i=0; i<100; i++)
    {
        output2<<arr2[i]<<endl;
    }

    output2.close();







    int arr3[1000];

    ofstream input3;

    input3.open("merge1k_input.txt");

    for(int i=0; i<1000; i++)
    {

        arr3[i]=rand();
        input3<<arr3[i]<<endl;
    }


    clock_t start3=clock();


    mergesort(arr3,0,1000-1);

    clock_t ends3=clock();

    double time3=double (ends3-start3)/CLOCKS_PER_SEC;

    cout<<"Taken time for 1k numbers  =   "<<time3<<" sec"<<endl;

    ofstream output3;

    output3.open("merge_1k.txt");

    for(int i=0; i<1000; i++)
    {
        output3<<arr3[i]<<endl;
    }

    output3.close();







    int arr4[10000];

    ofstream input4;

    input4.open("merge10k_input.txt");

    for(int i=0; i<10000; i++)
    {

        arr4[i]=rand();
        input4<<arr4[i]<<endl;
    }


    clock_t start4=clock();


    mergesort(arr4,0,10000-1);

    clock_t ends4=clock();

    double time4=double (ends4-start4)/CLOCKS_PER_SEC;

    cout<<"Taken time for 10k numbers  =   "<<time4<<" sec"<<endl;

    ofstream output4;

    output4.open("merge_10k.txt");

    for(int i=0; i<10000; i++)
    {
        output4<<arr4[i]<<endl;
    }

    output4.close();




    int arr5[100000];

    ofstream input5;

    input5.open("merge100k_input.txt");

    for(int i=0; i<100000; i++)
    {

        arr5[i]=rand();
        input5<<arr5[i]<<endl;
    }


    clock_t start5=clock();


    mergesort(arr5,0,100000-1);

    clock_t ends5=clock();

    double time5=double (ends5-start5)/CLOCKS_PER_SEC;

    cout<<"Taken time for 100K numbers  =   "<<time5<<" sec"<<endl;

    ofstream output5;

    output5.open("merge_100k.txt");

    for(int i=0; i<100000; i++)
    {
        output5<<arr5[i]<<endl;
    }

    output5.close();




    int arr6[1000000];

    ofstream input6;

    input6.open("merge1M_input.txt");

    for(int i=0; i<1000000; i++)
    {

        arr6[i]=rand();
        input6<<arr6[i]<<endl;
    }


    clock_t start6=clock();


    mergesort(arr6,0,1000000-1);

    clock_t ends6=clock();

    double time6=double (ends6-start6)/CLOCKS_PER_SEC;

    cout<<"Taken time for 1M numbers  =   "<<time6<<" sec"<<endl;

    ofstream output6;

    output6.open("merge_1M.txt");

    for(int i=0; i<1000000; i++)
    {
        output6<<arr6[i]<<endl;
    }

    output6.close();


    return 0;
}


