#include<iostream>
using namespace std;
int main()	
{
	int e=0;
	std::cout<<"請您輸入一個數字"<<std::endl;//請使用者輸入數字的訊息
        std::cin>>e;//把輸入的數字存進int e
	std::cout<<" "<<e;//先顯示第一個數字，並且不換行。
	for(int w=0;e!=1;)//用for迴圈列出數列
	{
	if(e%2==0)//如果數字除以二於數為零
	{
	e=e/2;//做此數除二
	}
	else//其他狀況
	{
	e=3*e+1;//做運算(三乘上此數並加一)。
	}
	std::cout<<" "<<e;//印出此數處理完的值。
	}
	return 0;//回傳值0。
	
}

