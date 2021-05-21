#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int countdivide (int y[],int len,int DIV)			//(主程式的陣列，陣列的長度，除數) 判斷是否整除 
{
	int c=0;										//每三個數分割一次陣列 c 紀錄要開幾格 
	if (len%3==0&&len>=3)	c=len/3;				//判斷幾格 
	else					c=len/3+1;				//判斷幾格 
	int k[c+1];										//宣告k為分割後的陣列並將陣列開大一格防止溢位 
	for (int i=0;i<c+2;i++)	k[i]=0;					//初始化 
	int temp=0,tt=0;								//以temp存取現在是第幾個數字要分割，每三個重置一次、 tt算是否要換下一格 
	for (int i=len-1;i>=0;i--)						//開始分割 
	{
		temp+=1;
		if 		(temp==1)			k[c-1-tt]+=y[i];
		else if (temp==2)			k[c-1-tt]+=y[i]*10;
		else if (temp==3&&i==0)
		{
			k[c-1-tt]+=y[i]*100;
			break;
		}
		else if (temp==3&&i!=0)
		{
			k[c-1-tt]+=y[i]*100;
			temp=0;
			tt++;
		}
	}
	int left=0;										//餘數 
	for (int i=0;i<c;i++)							//計算餘數 
	{
		left=k[i]%DIV;
		if (i!=c-1)	k[i+1]+=left*1000;				//沒整除的話乘以1000加到下一個數繼續算直到最後一個 
		else
		{
			if (left!=0)	return left;			//回傳餘數 
			else			return 0;				//整除 
		}
	}
}
int main (void)
{
	int n=0,sit=0,m[1001];
	char M[1001];
	for (int i=0;i<1001;i++)
	{
		m[i]=0;
		M[i]=' ';
	}
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
	{
		if (i==0)	getchar();									//catch enter
		int c=0;												//count the length of M
		while ((M[c]=getchar())!='\n')	c++;
		while (M[c-1]==' ')
		{
			c--;
			if (M[c-1]!=' ')	break;
		}
		for (int i=0;i<c;i++)	m[i]=(int)M[i]-48;				//transform char to int
		char div[1000];//divide
		for (int i=0;i<1000;i++)	div[i]=' ';
		gets(div);
		int ddiv=strlen(div);
		div[ddiv]=' ';
		ddiv++;
		int divide=0;
		int sit=0;														//sit:break or not
		for (int i=0;i<ddiv&&sit==0;i++)
		{
			if (div[i]!=' ')	divide=divide*10+(int)div[i]-48;		//計算除數 
			else														//相除 
			{
				sit+=countdivide(m,c,divide);
				divide=0;
			}
		}
		if (sit!=0)
		{
			for (int i=0;i<c;i++)	printf ("%d",m[i]);
			printf (" - Simple.\n");
		}
		else
		{
			for (int i=0;i<c;i++)	printf ("%d",m[i]);
			printf (" - Wonderful.\n");
		}
	}	
}
