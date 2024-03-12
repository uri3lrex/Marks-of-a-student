#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

//void const correct_array (char ca[], int size);

int main() {
  const int size= 5; char ca[size];
cout << "Enter the correct answers:" << endl;

for (int i=0;i<5;i++)
  {
    cin >> ca[i];
  }

int n= 0;
int s=0; int marks=0;
int student_no[100,5]; student_num[100]; 
cout << "Enter student number then your respective marks:";
cin >> n;

while (n>=0)
  { for (int i=1;i<=100;i++)
    {
      
    }
   s++;
       for (int j=0; j<5; j++)
         {
           cin >> student_no[s,j];
           
           if (student_no[s,j]== ca[j])
             marks= marks+2;
           else
             marks--;
             
         }
       cout << "Enter student number then your respective marks:";
       cin >> n;
     }
    
  }
  

