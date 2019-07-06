#include<bits/stdc++.h>
using namespace std;
void print(int nr,int dr)
{
	if(dr==0 or nr==0)
		return;
	if(dr%nr==0)
	{
		cout<<"1/"<<dr/nr;
		return;
	}
	if(nr>dr)
	{
		cout<<nr/dr<<"+";
		print(nr%dr,dr);
		return;
	}
	if(nr<dr)
	{
		int n=(dr/nr)+1;
		cout<<"1/"<<n<<"+";
		print(nr*n-dr,n*dr);
	}
}
int main()
{
	int nr,dr;
	cin>>nr>>dr;
	print(nr,dr);
	return 0;
}