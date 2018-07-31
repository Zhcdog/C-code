#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,i,j,score;  //xyΪ������ 
	x=10;y=10;;score=0;
	int target=rand()%(25-3)+3; 
	char input;
	int fire=0;
	int killed=0;
	
	while(1)
	{
		targetOne:
		system("cls");  //���� 
		printf("�÷֣�%d\n",score);
		
		for(i=0;i<target;i++)
	    	printf(" ");
	    	printf("@\n");    //������� 
	    	
		if(fire==0)
		{
			for(i=0;i<x;i++)
				printf("\n");   //�ӵ�δ����
	    } 
		if(fire==1)
		{
			for(i=0;i<x;i++)
		    {
			for(j=0;j<y;j++)
				printf(" ");
			printf("  .\n");   //�ӵ����� 
		    }
		    fire=0;
		    if(y+2==target)
		    	killed=1;
	    }
	    
	    if(killed==1)   //ȷ�ϱ���ɱ
	    {
	    	system("cls");
	    	for(i=0;i<x;i++)
				printf("\n");
			killed=0;    
			score++;     //�������� 
			target=rand()%(25-3)+3; //��Χ3��25��������� 
			goto targetOne;  //������ת�Ƶ���һ�� 
		}
	    
		for(j=0;j<y;j++)
			printf(" ");
	        printf("  *\n");
	    for(j=0;j<y;j++)
			printf(" ");
	    	printf("*****\n");
	    for(j=0;j<y;j++)
			printf(" ");
	    	printf(" * *\n");  /*����ɻ���״*/ 
	    
		input=getch();  //���Ʋ������ 
		if(input=='s')  /*���Ʒɻ����ƶ�*/
			x++;
		if(input=='w')  /*���Ʒɻ����ƶ�*/
			x--;
		if(input=='a')  /*���Ʒɻ����ƶ�*/
			y--;
		if(input=='d')  /*���Ʒɻ����ƶ�*/
			y++;          
		if(input=='l')  //���Ʒɻ������ӵ� 
			fire=1; 
		
	}
	return 0;
}
