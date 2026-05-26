
#include<iostream>
using namespace std ;


int main()
{    
    int Size = 0;
    float *Marks = NULL;
    int i = 0;

    cout<<"Enter number of Elements\n";
    cin>>Size;

    // Dynamic  Memory  Allocation
    Marks = new float[Size];
   
    
    cout<<"Enter Your Marks:\n";

      //   1    2     3
    for(i = 0; i < Size; i++)
    {
        cin>>Marks[i]; //4
    }  
    
    cout<<"Entered marks are :\n";
    
   for(i = 0; i < Size; i++)
    {
        cout<<Marks[i]<<"\n";
    }  

    delete [] Marks;

    return 0;
}