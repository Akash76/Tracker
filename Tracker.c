#include<stdio.h>
int main()
{
	int ch,n,m,x,i=0,CN[50],det[50],y,j,count,a=0,b=0,c=0,d=0;
	char HQ[50][20],DC[50][20],V[50][20],R[50][20];
	char Q[4][30]={"Food packets","Water bottles","Bandages packets","Clothing packets"};
	while(1)
	{
		printf("1:Send\n2.Track\n3.Statical info\n4.exit\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:A:printf("\n1.Food packets\n2.Water bottles\n3.Bandages packets\n4.Clothing packets\nEnter what you want to send:");
					scanf("%d",&n);
					if(!(n>0&&n<=4))
					{
						printf("\n Enter valid number");
						goto A;
					}
					else
					{
						printf("\nEnter package id:");
						scanf("%d",&m);
						if(n==1){x=0;a++;}
						else if(n==2){x=100;b++;}
						else if(n==3){x=200;c++;}
						else{x=300;d++;}
						for(j=0;j<i;j++)
						{
							if(det[j]==x+m)
							{
								printf("Package taken\n");
								goto A;
							}
						}
						det[i]=x+m;
						printf("\n Enter name of head quarters:");
						scanf("%s",&HQ[i]);
						printf("\n Enter distribution centre name:");
						scanf("%s",&DC[i]);
						printf("\n Enter relief centre number:");
						scanf("%d",&CN[i]);
						printf("\n Enter name of volunteer:");
						scanf("%s",&V[i]);
						printf("\n Enter name of refugee:");
						scanf("%s",&R[i]);
						i++;
					}
					break;
			case 2:printf("1.Food packets\n2.Water bottles\n3.Bandages packets\n4.Clothing packets\nEnter what you want to track:");
					scanf("%d",&y);
					if(y==1){x=0;}
					else if(y==2){x=100;}
					else if(y==3){x=200;}
					else{x=300;}
					printf("Enter package id:");
					scanf("%d",&m);
					count=0;
					for(j=0;j<i;j++)
					{
						
						if(det[j]==(x+m))
						{
							count=1;
							printf("\n %s number %d went from %s to distribution centre %s, then to relief centre %d and then %s volunteer picked it up and handled it to refugee %s \n\n",Q[y-1],m,HQ[j],DC[j],CN[j],V[j],R[j]);
							break;
						}
					}
						if(count==0)
						{
							printf("Item not found\n");	
						}
					
					break;
			case 3:printf(" Food packets:%d\n Water bottles:%d\n Bandages packages:%d\n Clothing packets:%d\n\n",a,b,c,d);
					break;
			case 4:exit(0);
					break;
		}
	}
	
	return 0;
}