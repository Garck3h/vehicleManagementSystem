/*作者：Garck3h    时间：2019/8/26  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct tx  //系统的数据的存储
{ int bh;
  char cph[16];
  char zt[8];
  char pp[12];
  char cx[8];
  char zcsk[20];
  int zcsc;
  int zj;
}TX;
TX t[20]={
1,"粤A-8979","未租出","兰博基尼","超跑", "0",0,999,
2,"粤B-11L4","已租出","玛莎拉蒂","超跑","2019/07/23//22:20",36,888};
int num=2;
typedef struct dl  //消费登录页面的账号密码存储
{
char yhm[20];
char mm[20];
}DL;
DL d[20]={"admin","1"};
int num1=1;
void dlym();

typedef struct gl  //管理员登录页面的账号密码存储
{
char gly[20];
char pa[20];
}GL;
GL g[20]={"admin","admin"};



void insert(TX t[])//  1.增加车辆
{
	int i;int flag=0;
	char a[12];
	system("cls");
	printf("请输入车牌号：");
	scanf("%s",&a);                           //通过输入需要查找的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
			flag=1;
            break;
		}
	}
	if(flag)
	{
printf("\033[40;31m该车辆信息已存在，无需重新添加!\n若需要修改数据，请使用功能‘2’!\n");
	}
	else{	num++;t[num-1].bh=num;
printf("请输入编号为%d的数据：\n",t[num-1].bh);
printf("请输入车牌号：");
scanf("%s",t[num-1].cph);
printf("请输入车辆状态(未租出或已租出)：");
scanf("%s",t[num-1].zt);
printf("请输入车辆品牌：");
scanf("%s",t[num-1].pp);
printf("请输入车辆车型：");
scanf("%s",t[num-1].cx);
printf("请输入车辆的租出时刻(格式为:XXXX/XX/XX//XX:XX 若未租出则写“0”)：");
scanf("%s",t[num-1].zcsk);
printf("请输入车辆需要租出的时长(若未租出则写“0”)：");
scanf("%d",&t[num-1].zcsc);
printf("请输入车辆租金(元)：");
scanf("%d",&t[num-1].zj);
printf("\n");
printf("\033[40;31m车辆信息已录入系统！\033[0m\n");
printf("\n");}
} 
void modify()         //2.数据信息修改
{
	char z[6];
	system("color a");

	{
	int i,j,p,flag=0;
	
	char a[12];
	system("cls");
	printf("请输入需要修改车辆的车牌号：");
	scanf("%s",&a);                           //通过输入需要修改信息的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
		flag=1;
        break;
		}
	}
	if(flag)
	{
 	        printf("\033[40;31m当前车辆车数据如下：\033[0m\n");
			printf("\033[40;32m  \n");
           	printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
		    p=i;
    printf("\n");
	printf("1.车牌号\n2.车辆状态\n3.车辆品牌\n4.车辆车型\n5.车辆的租出时刻\n6.车辆需要租出的时长\n7.车辆租金(元)\n\n请选择需要修改的项：");
	printf("\n");
	scanf("%d",&j);                                                  //选择修改的信息
	switch(j)                                                        //选择结构!
	{
		case 1:
            printf("\033[40;31m已选择车牌号修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车牌号修改为：");
			scanf("%s",t[p].cph);
			break;
			
		case 2:
			printf("\033[40;31m已选择车辆状态修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆状态修改为：");
			scanf("%s",t[p].zt);
			break;
		case 3:
			printf("\033[40;31m已选择车辆品牌修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆品牌修改为：");
			scanf("%s",t[p].pp);
			break;
		case 4:
			printf("\033[40;31m已选择车辆车型修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆车型修改为：");
			scanf("%s",t[p].cx);
			break;
		case 5:
			printf("\033[40;31m已选择车辆的租出时刻修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆的租出时刻修改为(格式为:XXXX/XX/XX//XX:XX 若未租出则写“0”)：");
            scanf("%s",&t[p].zcsk);
			break;
        case 6:
			printf("\033[40;31m已选择车辆需要租出的时长修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆需要租出的时长修改为(若未租出则写“0”)：");
			scanf("%d",&t[p].zcsc);
			break;
 		case 7:
		    printf("\033[40;31m已选择车辆租金修改\033[0m\n");
			printf("\033[40;32m  \n");
			printf("车辆租金(元)修改为：");
			scanf("%d",&t[p].zj);
			break;
	}
	printf("\n");
	printf("\033[40;31m恭喜您,修改成功!\033[0m\n\n");
	system("pause");
	system("cls");
	}
	else
	{
     	 printf("\n");
         printf("\033[40;31m对不起,系统暂未收录这辆车,请重新输入！\033[0m\n\n");	
	}
}
els:
	printf("\033[40;32m  \n");
    printf("1.重新输入\n0.返回主菜单\n\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
       modify();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}

}
void Delete()         //3.删除信息
{
char z[6];
system("color a");
	{
	int i,j,p,flag=0;
	char a[12];
	system("cls");
	printf("请输入需要删除的车辆的车牌号：");
	scanf("%s",&a);                           //通过输入需要修改信息的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
		flag=1;
        break;
		}
	}
	if(flag)
	{
 	        printf("\033[40;31m当前车辆车数据如下：\033[0m\n");
			printf("\033[40;32m  \n");
           	printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
		    p=i;
    printf("\n");
	printf("\033[40;31m1.确认删除!\033[0m\n");
    printf("\033[40;32m  \n");
	printf("2.取消删除!\n\n请选择需要修改的项：");
	printf("\n");
	scanf("%d",&j);                                                  //选择修改的信息
	switch(j)                                                        //选择结构!
	{
		case 1:
            {
			while(i<num)
			{
				t[i]=t[i+1];
				t[i].bh--;
				i++;
			}
			num-=1;
		}
		printf("\033[40;31m车辆信息已删除!\033[0m\n");
        printf("\n");
			break;
			
		case 2:
			printf("取消成功!");
			break;
		
	}
	printf("\n");
	system("pause");
	system("cls");
	}
	else
	{
     	 printf("\n");
         printf("\033[40;31m对不起,系统暂未收录这辆车,请重新输入！\033[0m\n\n");	
	}
}
els:
	printf("\033[40;32m  \n");
    printf("1.继续输入\n0.返回主菜单\n\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
       modify();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}	
}

void select(TX t[]) //4.输出数据
{{int i;
 printf("编号  车牌号    车辆状态    车辆品牌   车辆车型  车辆租出时刻(XXXX/XX/XX//XX:XX)  车辆需租出时长(小时)   车辆租金(元/天)   \n");
 printf("------------------------------------------------------------------------------------------------------------------------   \n");
 for(i=0;i<num;i++)
  printf("%-4d %-11s %-10s %-11s %-10s %-37s %-20d %-6d\n",
  t[i].bh,t[i].cph,t[i].zt,t[i].pp,t[i].cx,t[i].zcsk,t[i].zcsc,t[i].zj);
}
printf("\n");
printf("\033[40;31m信息显示完毕!\033[0m\n");
system("pause");
system("cls");
}
void statistics()   //5.统计未租出的车辆数
{
    int i,j=0;

	system("cls");//通过输入需要查看的车辆状态找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(t[i].zt,"未租出")==0)
		{ 
			j++;
            printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
			printf("\n");
		}
}
printf("\n");
printf("\033[40;31m共\033[0m");
printf("%d",j);
printf("\033[40;31m辆车未租出\033[0m\n\n\n");
printf("\033[40;31m统计完毕！\033[0m\n");
}
void find()           //6.查找车辆
{
	int i;
	int flag=0;
	char a[12];
	char z[6];
	system("cls");
	printf("查找车辆的车牌号：");
	scanf("%s",&a);                           //通过输入需要查找的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
			flag=1;
            break;
		}
	}
	if(flag)
	{      
		    printf("\033[40;31m当前车辆车数据如下：\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m对不起，系统没有收录这辆车，请重新输入！\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.重新输入\n0.返回主菜单\n\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
       find();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}

}

void sort()         //7.排序(租金)
{
	struct tx tmp;
	int i,j;
	printf("共排序%d组数据\n\n",num);
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)                 //for双循环对每一个值进行冒泡比较
		{
 
			if(t[i].zj>t[j].zj)  //前面的值如果大于后面的值就进行冒泡排序
			{
				tmp=t[i];                //交换内容
				t[i]=t[j];               //交换内容
				t[j]=tmp;                //交换内容
			}
		}
	}
	printf("\033[40;31m已按照租金排序,可使用功能'4'查看其效果！\033[0m\n");
	system("pause");
	system("cls");
}
void menu()
{char ch;
while(1)
{ system("cls");
  system("color a");
  printf("                            〓〓〓〓〓〓〓〓〓〓  ☆  车辆租赁系统主菜单  ☆  〓〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  1---增加车辆信息    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  2---车辆信息修改    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  3---删除车辆信息    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  4---车辆信息查询    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  5---未租出车辆数    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  6---查找车辆信息    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  7---按租金升排序    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  0---安全退出登录    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("\n");
  printf("请选择：");
  ch=getchar();
  switch(ch)
  {case '1':insert(t)/*printf("已选择数据插入\n")*/;system("pause");break;
   case '2':modify(t)/*printf("已选择数据修改\n")*/;system("pause");break;
   case '3':Delete(t)/*printf("已选择数据删除\n")*/;system("pause");break;
   case '4':select(t)/*printf("已选择数据查询\n")*/;system("pause");break;
   case '5':statistics(t)/*printf("已选择数据统计\n")*/;system("pause");break;
   case '6':find(t)/*printf("已选择数据查询\n")*/;system("pause");break;
   case '7':sort(t)/*printf("已选择数据查询\n")*/;system("pause");break;
  }
  if (ch=='0') {system("cls");printf("\n \033[40;31m已退出登录！\033[0m\n\n");break;}   //0.退出系统
}
}

void zuche()   //租用车辆
{
	int i,q;
	int flag=0;
	char a[12];
	char z[6];
	char p[8]="已租出";
	char *b[8];
	strcpy(b,p);
	system("cls");
	printf("想租用车辆的车牌号：");
	scanf("%s",&a);                           //通过输入需要查找的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
			flag=1;
            break;
		}
	}
	if(flag)
	{      
		    printf("\033[40;31m当前车辆车数据如下：\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
            printf("1.租用该车辆\n2.取消租用\n");
			printf("请选择:");
			scanf("%d",&q);
			if(q==1)
			{
			if(strcmp(t[i].zt,"未租出")==0)
				{
			printf("请输入车辆的租出时刻(格式为:XXXX/XX/XX//XX:XX)：");
            scanf("%s",t[i].zcsk);
			printf("请输入车辆需要租出的时长：");
            scanf("%d",&t[i].zcsc);
            printf("\n");
			printf("\033[40;31m恭喜您，租用成功！\033[0m\n");
				}
			if(strcmp(t[i].zt,"已租出")==0)
				{
				printf("\n");
				printf("\033[40;31m租用失败,车辆已租出,不可租用！\033[0m\n\n");
				}
			strcpy(t[i].zt,b);
			}
			if(q==2)
			{
				printf("取消成功！\n");
			}
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m对不起，系统没有收录这辆车，请重新输入！\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.重新输入车牌号\n0.返回主菜单\n\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
       zuche();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}
}
void huanche()  //归还车辆
{
int i,q;
	int flag=0;
	char a[12];
	char z[6];
	char p[8]="未租出";
	char *b[8];
    char f[20]="0";
	char *g[20];
	strcpy(b,p);
    strcpy(g,f);
	system("cls");
	printf("归还车辆的车牌号：");
	scanf("%s",&a);                           //通过输入需要查找的车牌号找到
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(a,t[i].cph)==0)
		{
			flag=1;
            break;
		}
	}
	if(flag)
	{      
		    printf("\033[40;31m当前车辆车数据如下：\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("车牌号：%s\n",t[i].cph);
	    	printf("车辆状态：%s\n",t[i].zt);
	     	printf("车辆品牌：%s\n",t[i].pp);
	    	printf("车辆车型：%s\n",t[i].cx);
            printf("车辆的租出时刻：%s\n",t[i].zcsk);
            printf("车辆需要租出的时长：%d\n",t[i].zcsc);
    		printf("车辆租金(元)：%d\n",t[i].zj);
            printf("1.归还该车辆\n2.继续使用该车辆\n");
			printf("请选择:");
			scanf("%d",&q);
			if(q==1)
			{
			   if(strcmp(t[i].zt,"已租出")==0)
				{
             strcpy(t[i].zcsk,g);
              t[i].zcsc=0;
			printf("\033[40;31m恭喜您，归还成功！\033[0m\n");
				}
			if(strcmp(t[i].zt,"未租出")==0)
				{
				printf("\n");
				printf("\033[40;31m车辆未租出,不用归还！\033[0m\n\n");
				}
			strcpy(t[i].zt,b);
			}
			if(q==2)
			{
				printf("选择成功！\n");
			}
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m对不起，系统没有收录这辆车，请重新输入！\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.重新输入归还车辆的车牌号\n0.返回主菜单\n\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
      huanche();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}
}

void xfdl()  //消费者的功能
{
char ch;
while(1)
{ system("cls");
  system("color a");
  printf("                            〓〓〓〓〓〓〓〓〓〓  ☆  车辆租赁系统主菜单  ☆  〓〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  1---租用车辆        ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  2---归还车辆        ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  3---未租出车辆数    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  4---车辆信息查询    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  5---查找车辆信息    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  6---按租金升排序    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("                            〓〓〓〓〓〓〓〓〓★  ☆  0---安全退出登录    ☆  ★〓〓〓〓〓〓〓〓〓\n");
  printf("\n");
  printf("请选择：");
  ch=getchar();
  switch(ch)
  {
   case '1':zuche(t)/*printf("已选择数据查询\n")*/;system("pause");break;
   case '2':huanche(t)/*printf("已选择数据统计\n")*/;system("pause");break;
   case '3':statistics(t)/*printf("已选择数据统计\n")*/;system("pause");break;
   case '4':select(t)/*printf("已选择数据查询\n")*/;system("pause");break;
   case '5':find(t)/*printf("已选择数据查询\n")*/;system("pause");break;
   case '6':sort(t)/*printf("已选择数据查询\n")*/;system("pause");break;
  }
  if (ch=='0') {system("cls");printf("\n \033[40;31m已退出登录！\033[0m\n\n");break;}   //0.退出系统
}


}

void dlxt(DL d[])   //1.登录系统
{

int i,j,x,k=0;
int flag=0;
int flag1=0;
char a[20];
char b[20];
char z[6];

int c,e,f=0;
int fla=0;
int fla1=0;
char q[20];
char h[20];
char p[6];

printf("\n");

printf("\033[43;30m1.消费者登录\n");
printf("\033[43;30m2.管理员登录\n\n");
printf("\033[43;30m请选择:");

scanf("%d",&x);


if(x==1)   //消费者登录
{
	printf("\n");
printf("\033[43;31m已选择消费者登录！\033[0m\n\n");
yonghu:
printf("\n");
printf("\033[43;30m请输入用户:");
scanf("%s",&a);
for(i=0;i<num1;i++)
{
	if(strcmp(a,d[i].yhm)==0)
	{
			flag=1;
            break;
	}
}
if(flag)
{
mima:
k++;
printf("\n");
printf("\033[43;30m请输入密码：");
scanf("%s",&b);
for(j=0;j<num1;j++)
{
	if(strcmp(b,d[j].mm)==0)
	 {
		flag1=1;
         break;
	}	
}
 if(flag1)
 {printf("登录成功！\n");xfdl();}
 else {printf("\n"); printf("\033[43;31m对不起，密码错误！请重新输入！\033[0m\n");
if(k==3)
{
dlym();
}
goto mima;
     }           
}

else
	{
	printf("\n");
	printf("\033[43;31m用户名不存在!\033[0m\n");
els:
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
      	goto yonghu;
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}

	}

}

if(x==2)  //管理员登录
{
	printf("\n");
printf("\033[43;31m已选择消管理员登录！\033[0m\n\n");
	yong:
printf("\n");
printf("\033[43;30m请输入用户:");
scanf("%s",&q);
for(c=0;c<num1;c++)
{
	if(strcmp(q,g[c].gly)==0)
	{
			fla=1;
            break;
	}
}
if(fla)
{
mi:
f++;
printf("\n");
printf("\033[43;30m请输入密码：");
scanf("%s",&h);
for(e=0;e<num1;e++)
{
	if(strcmp(h,g[e].pa)==0)
	 {
		fla1=1;
         break;
	}	
}
 if(fla1)
 {printf("登录成功！\n");menu();}
 else {printf("\n"); printf("\033[43;31m对不起，密码错误！请重新输入！\033[0m\n");
if(f==3)
{
dlym();
}
goto mi;
     }           
}

else
	{
	printf("\n");
	printf("\033[43;31m用户名不存在!\033[0m\n");
elss:
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&p);
	if(strcmp(p,"1")==0)
    {
      	goto yong;
    }
	if(strcmp(p,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto elss;
	}

	}

}


}

void cjyh()    //2.增加用户名
{
int i,j=0;
int flag=0;
int flag1=0;
char a[20];
char z[6];
num1++;
printf("\n");
printf("\033[43;31m已选择注册用户！\033[0m\n\n");
printf("\033[43;31m欢迎来到消费者用户注册页面！\033[0m\n");
yonghu:
flag=0;
printf("\n");
printf("\033[43;30m请输入用户名：");
scanf("%s",d[num1-1].yhm);
for(i=0;i<num1-1;i++)
	{
		if(strcmp(d[num1-1].yhm,d[i].yhm)==0)
		{
		flag=1;
        break;   
		}
	}
    if(flag)
	   {
		printf("\n");
	printf("\033[43;31m对不起，用户名已存在!\033[0m\n");
	els:
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
      	goto yonghu;
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;
	}
	}
    else
mima:	{
printf("\n");
printf("\033[43;30m  \n");
printf("请输入密码：");
     scanf("%s",d[num1-1].mm);
printf("请确认密码：");
     scanf("%s",a);
	
     if(strcmp(a,d[num1-1].mm)==0)
		{
		flag1=1;
		}
	 
	 if(flag1)
     {printf("\n");
     printf("\033[43;31m注册成功！\033[0m\n");
	 }
	 else
	 {
		 while(i<num1)
			{
				d[num1-1]=d[num1];
				i++;
			}
			num1-=1;
	 printf("\n");
     printf("\033[43;31m两次输入的密码不一致，请重新输入！\033[0m\n");
el:
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
      	 goto mima;
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto el;}
	 }
	}
}

void xgmm()    //3.修改用户密码
{
    int i,j,p;
	int flag=0;
    int flag1=0;
	char a[20];
	char *x[20];
	char *y[20];
	char q[6];
	char z[6];
    printf("\n\n");
	printf("\033[43;31m欢迎使用消费者用户密码修改！\033[0m\n");
    printf("\n");
    printf("\033[43;30m\n");
	printf("请输入需要修改密码的账号：");
	scanf("%s",&a);                           //通过输入需要修改密码的用户找到
	printf("\n");
	for(i=0;i<num1;i++)
	{
		if(strcmp(a,d[i].yhm)==0)
		{
		flag=1;
        break;
		}
	}
	if(flag)
	{
	     	printf("\033[43;31m当前密码：%s\n",d[i].mm);
			printf("\033[43;30m  \n");
		    p=i; 
chongxin:
	printf("\n");
	printf("1.修改密码\n");
	printf("0.退出系统\n\n");
	printf("请选择：");
	scanf("%d",&j);                                                  //选择修改的信息
	switch(j)                                                        //选择结构!
	{
		case 1:
			printf("\n");
			printf("密码修改为：");
			scanf("%s",x);
            printf("请确认密码：");
               scanf("%s",y);
	 if(strcmp(x,y)==0)
		{
		flag1=1;
		}
	 if(flag1)
     {
		// d[p].mm={};
      //d[p]={"admin","1"};
	 strcpy(d[p].mm,y);
	 printf("\n");
     printf("\033[43;31m修改成功！\033[0m\n");
	 }
    else
	 {
		 
	 printf("\n");
     printf("\033[43;31m修改失败,两次输入的密码不一致，请重新输入！\033[0m\n");
      
els:   
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&q);
 if(strcmp(q,"1")==0)
    {
      	goto chongxin; 
    }
if(strcmp(q,"0")==0)
	{}
else
	{
        printf("\n");
		printf("\033[40;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto els;}
	}
	 

			//printf("\n");
            //  printf("\033[43;31m修改成功!\033[0m\n");
			break;
        case 0:
			printf("\033[43;31m已退出!\033[0m\n");
			break;
        
	}
	
	system("pause");
	system("cls");
	}
	else
	{
		
     printf("\033[43;31m对不起，系统没有收录这个账号!\033[0m\n\n");
el:
	printf("\033[43;30m  \n");
    printf("1.重新输入\n");
    printf("0.返回主菜单\n");
    printf("请选择：");
	scanf("%s",&z);
	if(strcmp(z,"1")==0)
    {
      	 xgmm();
    }
	if(strcmp(z,"0")==0)
	{}
	else
	{
        printf("\n");
		printf("\033[43;31m暂无该选项,请重新输入!");
        printf("\033[40;32m  \n");
		goto el;}
	}
}

void kaifazhexxi()
{ 
  printf("\n\033[43;31m已选择查看开发者信息!\n");
  printf("\n");
  printf("Garck3h\n");
}
void dlym()  //
{

char c;
while(1)
{
 system("cls");
 system("color 60");
 printf("				Welcome to Vehicle Rental Management System!\n\n");
 printf("					欢迎登录车辆租赁管理系统！\n\n");
 printf("					###############################\n");
 printf("					####       1.登录系统      ####\n");
 printf("					####       2.注册用户      ####\n");
 printf("					####       3.修改密码      ####\n");
 printf("					####       4.开发者信息    ####\n");
 printf("					####       0.退出系统      ####\n");
 printf("					###############################\n\n\n");
 printf("请选择：");
 c=getchar();
 switch(c)
  {
   case '1':dlxt(d);system("pause");break;
   case '2':cjyh(d);system("pause");break;
   case '3':xgmm(d);system("pause");break;
   case '4':kaifazhexxi();system("pause");break;
 }
   if (c=='0') {system("cls");printf("已退出\n");break;}   //0.退出系统
}
}
main()
{
system("color 60");
dlym();
}