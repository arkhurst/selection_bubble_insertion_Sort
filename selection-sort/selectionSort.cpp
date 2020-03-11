#include<iostream>  
//10665476

using namespace std;  
int findSmallest (int[],int);  
int main ()  
{  
    int myarray[12] = {3,5,27,0,42,253,123,14,101,22,45,12};  
    int pos,temp;  
    cout<<"\n Input list of elements to be Sorted\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    for(int i=0;i<10;i++)  
    {  
        pos = findSmallest (myarray,i);  
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
    }  
    cout<<"\n Sorted list of elements is\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 

    return 0;  
}  
int findSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<10;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}  

