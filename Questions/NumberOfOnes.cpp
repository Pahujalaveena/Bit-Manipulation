//wap to count the number of ones in binary representation of a number
#include<iostream>
using namespace std;
int NumberOfOnes(int n)
{
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	cout<<NumberOfOnes(19)<<endl;
	return 0;
}