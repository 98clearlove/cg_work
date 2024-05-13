#include <iostream>
#include<vector>
using namespace std;
class Joseph
{
public:
	Joseph(int N, int M, int K = 1) :n(N), m(M), k(K) {}//初始化 
	void simulate();
private:
	int n;//编号长度
	int m;//间隔长度
	int k;//起始位置 
};

void Joseph::simulate()
{
	int* a = new int[50];//存储数的数组
	int lef = n;//剩余标记的人数
	int p = k - 1;//指向起始位置
	int i = 0;
	int number = 0;
	int* flag = new int[50];

	//将两个数组初始化
	for (; i < n; i++)
	{
		a[i] = i + 1;//编号 
		flag[i] = 1;
	}
	for (i = n; i < 50; i++)
	{
		a[i] = 0;
		flag[i] = 0;
	}

	while (lef >= 1)
	{
		number = m;//报号数
		while (number > 0)
		{
			if (flag[p] == 1)
			{
				number--;
				p++;
			}
			else if (p >= n)
				p = 0;
			else
				p++;
		}
		cout << a[p - 1] << " ";
		flag[p - 1] = 0;
		lef--;
	}
}
//测试程序 
int main19()
{
	int n, m, k;
	cin >> n >> m >> k;
	Joseph obj(n, m, k);
	obj.simulate();
	return 0;
}