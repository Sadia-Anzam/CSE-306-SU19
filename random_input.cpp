#include <iostream>
#include<ctime>
#include<cstdlib>
#include <fstream>
#include<stdlib.h>

using namespace std;
int main()
{
    int random_integer1[10],i;
    ofstream myfile1;

    myfile1.open ("first_ten.txt");

    for(int i=0; i<10; i++)
    {
        random_integer1[i] = (rand()%100);

        myfile1 << random_integer1[i]<<endl;
    }
    myfile1.close();




    int random_integer2[100];
    ofstream myfile2;

    myfile2.open ("first_hundread.txt");

    for(int i=0; i<100; i++)
    {
        random_integer2[i] = (rand()%100)+1;

        myfile2 << random_integer2[i]<<endl;
    }
    myfile2.close();




    int random_integer3[1000];
    ofstream myfile3;

    myfile3.open ("first_thousand.txt");

    for(int i=0; i<1000; i++)
    {
        random_integer3[i] = (rand()%100);


        myfile3 << random_integer3[i]<<endl;
    }
    myfile3.close();




    int random_integer4[10000];
    ofstream myfile4;

    myfile4.open ("first_10k.txt");

    for(int i=0; i<10000; i++)
    {
        random_integer4[i] = (rand()%100);


        myfile4 << random_integer4[i]<<endl;
    }
    myfile4.close();





    long int random_integer5[100000];
    ofstream myfile5;
    srand(89344554);
    myfile5.open ("first_100k.txt");

    for(int i=0; i<100000; i++)
    {
        random_integer5[i] = (rand()%100);

        myfile5 << random_integer5[i]<<endl;
    }
    myfile5.close();





   /* long int random_integer6[1000000];
    ofstream myfile6;

    srand(98565465965);

    myfile6.open ("first_1m.txt");

    for(int i=0; i<100; i++)
    {
        random_integer6[i] = (rand()%100);


        myfile6 << random_integer6[i]<<endl;
    }
    myfile6.close();*/

    return 0;
}

