wc#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a five-digit number ";
	cin>>num;//input 5-digit number
	int sum=0;
	while(num>0)//using while loop
	{
		sum+=num%10;//separating all digit and adding each digit to sum
		num/=10;
}
    while (sum>9) // if the sum is greater than 9 perform the same function as above
	{
		int temp=sum; // assigning sum to a temprary variable
		sum=0; //now converting back sum to 0
		while(temp>0) //perform the same function as above
		{
		sum+=temp%10;
		temp/=10;
	}
}
	if(sum%3==0) //checking if sum is divisible by 3 or not
	{
		cout<<"the no is divisible by 3 "<<endl;
	}
	else
	{
		cout<<"the no is not divisible by 3"<<endl;
	}
	}

