
#include <iostream>
using namespace std;
class search 
{
     public :
	int LSIterative(int* , int , int );
	int LSRecursive(int* , int , int );
};
int search::LSIterative(int *List, int key, int n )
{
	for(int i = 0; i < n; i++)
	{
		if(List[i] == key)
		return i;
	
	}
	return -1;
}
int search::LSRecursive(int *List, int key, int n)
{
	if(n>0)
	{
		if (List[n] ==key)
		return n ;
		else 
		return LSRecursive(List , key , n -1 );
	}
	return -1;
}
int main()
{
	search S;
	int A[10] = {4 ,2,6,12,9,10,1,5,7,8};
	cout <<"\n The Number 9 is in the postion " <<S.LSIterative(A, 9,10);
	cout <<"\n The Number 1 is in the postion " <<S.LSRecursive(A, 1,10);
	cout <<"\n ";
	return 0;
}
