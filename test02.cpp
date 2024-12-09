#include<iostream>

using namespace std;

int main()
{
	int n,m;

	cin>>n>>m;

	int j = m * n;

	int a=1;  //默认在最大公约数为1

	int times =0;

	if(n%m==0||m%n==0)  //若nm直接能整除，则最大公约数即是较小那个的数
	{
		times++;

		m=m<n?m:n;

	}
	
	while((a=n%m)!=0)
	{
		times++;

		n=m;

		m=a;
	}

	j = j / m;

	cout<<"循环次数为："<<times<<endl;

	cout<<"最大公约数为："<<m<<endl;

	cout<<"最小公倍数为："<<j<<endl;

	return 0;
}