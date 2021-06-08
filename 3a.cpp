//union and intersection of the array
#include<iostream>
using namespace std ;


void unionarr(int arr1[],int n, int arr2[],int m)
{int i=0,j=0;
cout<<"\nunion of arrays are  ";
   while(i!=n&&j!=m)
	{
		if(arr1[i]<arr2[j])
		{ cout<<arr1[i]<<" "; 
		   i++;
	}
	    else if(arr1[i]>arr2[j])
	    {
	    	cout<<arr2[j]<<" ";
	    	j++;
		}
		else
		{cout<<arr1[i]<<" ";
		i++;
		j++;
		}
	}
	while(j<m){
	cout<<arr2[j]<<" ";j++;
	}
	while(i<n){
	cout<<arr1[i]<<" ";i++;	
	}
}
void intersectionarr(int arr1[],int n, int arr2[],int m)
{ cout<<"intersection of arrays are ";
	int i=0,j=0;
	while(i!=n&&j!=m)
	{
		if(arr1[i]<arr2[j])
		{  
		   i++;
	}
	    else if(arr1[i]>arr2[j])
	    {
	    	
	    	j++;
		}
		else
		{cout<<" "<<arr1[i];
		i++;
		j++;
		}
	}
}





int main()
{
  int arr1[]={1,3,4,5,7};
  int arr2[]={2,3,5,6};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
   intersectionarr(arr1,n,arr2,m);
    unionarr(arr1,n,arr2,m);
    return 0;
}

