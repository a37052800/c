#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int countdivide (int y[],int len,int DIV)			//(�D�{�����}�C�A�}�C�����סA����) �P�_�O�_�㰣 
{
	int c=0;										//�C�T�ӼƤ��Τ@���}�C c �����n�}�X�� 
	if (len%3==0&&len>=3)	c=len/3;				//�P�_�X�� 
	else					c=len/3+1;				//�P�_�X�� 
	int k[c+1];										//�ŧik�����Ϋ᪺�}�C�ñN�}�C�}�j�@�樾��� 
	for (int i=0;i<c+2;i++)	k[i]=0;					//��l�� 
	int temp=0,tt=0;								//�Htemp�s���{�b�O�ĴX�ӼƦr�n���ΡA�C�T�ӭ��m�@���B tt��O�_�n���U�@�� 
	for (int i=len-1;i>=0;i--)						//�}�l���� 
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
	int left=0;										//�l�� 
	for (int i=0;i<c;i++)							//�p��l�� 
	{
		left=k[i]%DIV;
		if (i!=c-1)	k[i+1]+=left*1000;				//�S�㰣���ܭ��H1000�[��U�@�Ӽ��~��⪽��̫�@�� 
		else
		{
			if (left!=0)	return left;			//�^�Ǿl�� 
			else			return 0;				//�㰣 
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
			if (div[i]!=' ')	divide=divide*10+(int)div[i]-48;		//�p�Ⱓ�� 
			else														//�۰� 
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
