#include <bits/stdc++.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	long long int N, begin, end;
	long long int sum = 0;
	cin >> N;
	DWORD t_start, t_end;
	t_start = GetTickCount();
	//�Ӳ���ϵͳ������������elapsed���ĺ����������ķ���ֵ��DWORD��
	
	begin = (int)pow(10, N-1);
	end = 10*begin - 1;
	
	for(int i = begin; i <= end; i++){
		sum = 0;
		int t = i;
		while(t){
			int a = t % 10;
        	sum = (int)pow(a,N)+ sum;
        	t = t / 10; //����һλ�����ƶ�����λ��
    	}
		if(sum == i)
			cout << sum << endl;
	}
	t_end = GetTickCount();
	std::cout <<"Used "<< t_end - t_start <<"ms"<< std::endl;
	return 0;
}

