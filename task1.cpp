#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
using namespace std;

int main () {
  string s;
  
  ifstream reed ("marks.txt");

  int arr[5];
   int i=0;
   int sum=0;
   float avg=0;

  if (reed.is_open())
  {


    while ( getline (reed,s) )
    {
    	
      	
      arr[i] = std :: atoi (s.c_str());
      i++;
      
    }


for(int i=0 ; i < 5 ; i++ )
{
	sum += arr[i];
}

avg=sum/5.0;

    reed.close();
  }

  else cout << "PROGRAM ISNT OPEN"; 
  
  
	ofstream stu;

		stu.open("avg.txt");
		
		stu<<"Average of CLASS : ";
		stu<<avg<<endl;
		
		

  return 0;
}
