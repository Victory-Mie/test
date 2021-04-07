#include <iostream>
using namespace std;
//找鞍点 
int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	
	int a[x][y];
	int i, j;
	int m[x], n[y];
	
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cin >> a[i][j];
		}
	}
	
	/*	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout<< a[i][j];
		}
	}*/
	
	int u = 0;
	int b;
	int min1;
	int jus = 0;


	//行最大	
	int k=0,l = 0;
	int max1;
	for (i = 0; i < x; i++,k++, l++)
	{
		max1 = a[i][0];
		for (j = 0; j < y; j++)
		{
			if (max1 < a[i][j])
			{
			    max1 = a[i][j];
				m[k] = i;
			    n[l] = j;
			}
		}
		
	}
	
	
	//cout<<max1;
	//列最小 
	k=0;
	l = 0;
	int h = 0;
	for (i=m[k],j = n[l]; l < x; k++,l++)
	{
		i=m[k];
		j = n[l];
		min1 = a[i][j];
		for (i = 0; i < x; i++)
		{
			if (min1 < a[i][j])
			{
				b =min1;
				jus = 1;

			}
			else
			{
				jus = 0;
			}

		}
	if(jus==0)
		 h++;
		else{
		//cout<<jus;
		cout<<b<<" ";
		}
		
	}

	if (h ==x)
	cout<<"no"<<endl;

	return 0;
}
