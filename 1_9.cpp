#include <iostream>
#include<vector>
using namespace std;
class Joseph
{
public:
	Joseph(int N, int M, int K = 1) :n(N), m(M), k(K) {}//��ʼ�� 
	void simulate();
private:
	int n;//��ų���
	int m;//�������
	int k;//��ʼλ�� 
};

void Joseph::simulate()
{
	int* a = new int[50];//�洢��������
	int lef = n;//ʣ���ǵ�����
	int p = k - 1;//ָ����ʼλ��
	int i = 0;
	int number = 0;
	int* flag = new int[50];

	//�����������ʼ��
	for (; i < n; i++)
	{
		a[i] = i + 1;//��� 
		flag[i] = 1;
	}
	for (i = n; i < 50; i++)
	{
		a[i] = 0;
		flag[i] = 0;
	}

	while (lef >= 1)
	{
		number = m;//������
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
//���Գ��� 
int main19()
{
	int n, m, k;
	cin >> n >> m >> k;
	Joseph obj(n, m, k);
	obj.simulate();
	return 0;
}