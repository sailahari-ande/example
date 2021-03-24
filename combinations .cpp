

#include<bits/stdc++.h> 
using namespace std; 
int cou=0,innum;
void combinationUtil(int arr[], int data[], 
					int start, int end, 
					int index, int r); 

void printCombination(int arr[], int n, int r) 
{ 
	
	int data[r]; 

	
	combinationUtil(arr, data, 0, n-1, 0, r); 
} 

void combinationUtil(int arr[], int data[], 
					int start, int end, 
					int index, int r) 
{ 
	// Current combination is ready 
	// to be printed, print it 
	int sum =0,i=0;
	if (index == r) 
	{ 
		for (int j = 0; j < r; j++) //print all combinations
		{   sum = sum+ data[j];
		  	cout << data[j] << " "; 
		   
		}
		if(sum==innum)
		cou++;
		cout<< " sum = "<<sum<<endl;
		
		cout << endl; 
		
	//	return ; 
	  
	} 
	
   
	for (int i = start; i <= end && 
		end - i + 1 >= r - index; i++) 
	{ 
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1, 
						end, index+1, r); 
	} 
} 



int main() 
{ 
	int arr[100];
	cout<<"enter number of elements in array";
	 int n;
	 cin>>n;
	 cout<<"enter elements"<<endl;
	 for(int i=0;i<n;i++)
	 cin>>arr[i]; 
	int r = 4; 
    cout<<"enter innum";
    cin>>innum;
//	int n = sizeof(arr)/sizeof(arr[0]); 
	printCombination(arr, n, r); 
	if(cou!=0)
	{
		cout<<" count "<<cou<<endl;
	}
	else
	{
		cout<<"X";
	}
	
} 



