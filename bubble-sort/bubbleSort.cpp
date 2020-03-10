#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[12] = {3,5,27,0,42,253,123,14,101,22,45,12};  
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
return 0;
}
