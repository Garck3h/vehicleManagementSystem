/*���ߣ�Garck3h    ʱ�䣺2019/8/26  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct tx  //ϵͳ�����ݵĴ洢
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
1,"��A-8979","δ���","��������","����", "0",0,999,
2,"��B-11L4","�����","��ɯ����","����","2019/07/23//22:20",36,888};
int num=2;
typedef struct dl  //���ѵ�¼ҳ����˺�����洢
{
char yhm[20];
char mm[20];
}DL;
DL d[20]={"admin","1"};
int num1=1;
void dlym();

typedef struct gl  //����Ա��¼ҳ����˺�����洢
{
char gly[20];
char pa[20];
}GL;
GL g[20]={"admin","admin"};



void insert(TX t[])//  1.���ӳ���
{
	int i;int flag=0;
	char a[12];
	system("cls");
	printf("�����복�ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ���ҵĳ��ƺ��ҵ�
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
printf("\033[40;31m�ó�����Ϣ�Ѵ��ڣ������������!\n����Ҫ�޸����ݣ���ʹ�ù��ܡ�2��!\n");
	}
	else{	num++;t[num-1].bh=num;
printf("��������Ϊ%d�����ݣ�\n",t[num-1].bh);
printf("�����복�ƺţ�");
scanf("%s",t[num-1].cph);
printf("�����복��״̬(δ����������)��");
scanf("%s",t[num-1].zt);
printf("�����복��Ʒ�ƣ�");
scanf("%s",t[num-1].pp);
printf("�����복�����ͣ�");
scanf("%s",t[num-1].cx);
printf("�����복�������ʱ��(��ʽΪ:XXXX/XX/XX//XX:XX ��δ�����д��0��)��");
scanf("%s",t[num-1].zcsk);
printf("�����복����Ҫ�����ʱ��(��δ�����д��0��)��");
scanf("%d",&t[num-1].zcsc);
printf("�����복�����(Ԫ)��");
scanf("%d",&t[num-1].zj);
printf("\n");
printf("\033[40;31m������Ϣ��¼��ϵͳ��\033[0m\n");
printf("\n");}
} 
void modify()         //2.������Ϣ�޸�
{
	char z[6];
	system("color a");

	{
	int i,j,p,flag=0;
	
	char a[12];
	system("cls");
	printf("��������Ҫ�޸ĳ����ĳ��ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ�޸���Ϣ�ĳ��ƺ��ҵ�
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
 	        printf("\033[40;31m��ǰ�������������£�\033[0m\n");
			printf("\033[40;32m  \n");
           	printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
		    p=i;
    printf("\n");
	printf("1.���ƺ�\n2.����״̬\n3.����Ʒ��\n4.��������\n5.���������ʱ��\n6.������Ҫ�����ʱ��\n7.�������(Ԫ)\n\n��ѡ����Ҫ�޸ĵ��");
	printf("\n");
	scanf("%d",&j);                                                  //ѡ���޸ĵ���Ϣ
	switch(j)                                                        //ѡ��ṹ!
	{
		case 1:
            printf("\033[40;31m��ѡ���ƺ��޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("���ƺ��޸�Ϊ��");
			scanf("%s",t[p].cph);
			break;
			
		case 2:
			printf("\033[40;31m��ѡ����״̬�޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("����״̬�޸�Ϊ��");
			scanf("%s",t[p].zt);
			break;
		case 3:
			printf("\033[40;31m��ѡ����Ʒ���޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("����Ʒ���޸�Ϊ��");
			scanf("%s",t[p].pp);
			break;
		case 4:
			printf("\033[40;31m��ѡ���������޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("���������޸�Ϊ��");
			scanf("%s",t[p].cx);
			break;
		case 5:
			printf("\033[40;31m��ѡ���������ʱ���޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("���������ʱ���޸�Ϊ(��ʽΪ:XXXX/XX/XX//XX:XX ��δ�����д��0��)��");
            scanf("%s",&t[p].zcsk);
			break;
        case 6:
			printf("\033[40;31m��ѡ������Ҫ�����ʱ���޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("������Ҫ�����ʱ���޸�Ϊ(��δ�����д��0��)��");
			scanf("%d",&t[p].zcsc);
			break;
 		case 7:
		    printf("\033[40;31m��ѡ��������޸�\033[0m\n");
			printf("\033[40;32m  \n");
			printf("�������(Ԫ)�޸�Ϊ��");
			scanf("%d",&t[p].zj);
			break;
	}
	printf("\n");
	printf("\033[40;31m��ϲ��,�޸ĳɹ�!\033[0m\n\n");
	system("pause");
	system("cls");
	}
	else
	{
     	 printf("\n");
         printf("\033[40;31m�Բ���,ϵͳ��δ��¼������,���������룡\033[0m\n\n");	
	}
}
els:
	printf("\033[40;32m  \n");
    printf("1.��������\n0.�������˵�\n\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}

}
void Delete()         //3.ɾ����Ϣ
{
char z[6];
system("color a");
	{
	int i,j,p,flag=0;
	char a[12];
	system("cls");
	printf("��������Ҫɾ���ĳ����ĳ��ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ�޸���Ϣ�ĳ��ƺ��ҵ�
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
 	        printf("\033[40;31m��ǰ�������������£�\033[0m\n");
			printf("\033[40;32m  \n");
           	printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
		    p=i;
    printf("\n");
	printf("\033[40;31m1.ȷ��ɾ��!\033[0m\n");
    printf("\033[40;32m  \n");
	printf("2.ȡ��ɾ��!\n\n��ѡ����Ҫ�޸ĵ��");
	printf("\n");
	scanf("%d",&j);                                                  //ѡ���޸ĵ���Ϣ
	switch(j)                                                        //ѡ��ṹ!
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
		printf("\033[40;31m������Ϣ��ɾ��!\033[0m\n");
        printf("\n");
			break;
			
		case 2:
			printf("ȡ���ɹ�!");
			break;
		
	}
	printf("\n");
	system("pause");
	system("cls");
	}
	else
	{
     	 printf("\n");
         printf("\033[40;31m�Բ���,ϵͳ��δ��¼������,���������룡\033[0m\n\n");	
	}
}
els:
	printf("\033[40;32m  \n");
    printf("1.��������\n0.�������˵�\n\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}	
}

void select(TX t[]) //4.�������
{{int i;
 printf("���  ���ƺ�    ����״̬    ����Ʒ��   ��������  �������ʱ��(XXXX/XX/XX//XX:XX)  ���������ʱ��(Сʱ)   �������(Ԫ/��)   \n");
 printf("------------------------------------------------------------------------------------------------------------------------   \n");
 for(i=0;i<num;i++)
  printf("%-4d %-11s %-10s %-11s %-10s %-37s %-20d %-6d\n",
  t[i].bh,t[i].cph,t[i].zt,t[i].pp,t[i].cx,t[i].zcsk,t[i].zcsc,t[i].zj);
}
printf("\n");
printf("\033[40;31m��Ϣ��ʾ���!\033[0m\n");
system("pause");
system("cls");
}
void statistics()   //5.ͳ��δ����ĳ�����
{
    int i,j=0;

	system("cls");//ͨ��������Ҫ�鿴�ĳ���״̬�ҵ�
	printf("\n");
	for(i=0;i<num;i++)
	{
		if(strcmp(t[i].zt,"δ���")==0)
		{ 
			j++;
            printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
			printf("\n");
		}
}
printf("\n");
printf("\033[40;31m��\033[0m");
printf("%d",j);
printf("\033[40;31m����δ���\033[0m\n\n\n");
printf("\033[40;31mͳ����ϣ�\033[0m\n");
}
void find()           //6.���ҳ���
{
	int i;
	int flag=0;
	char a[12];
	char z[6];
	system("cls");
	printf("���ҳ����ĳ��ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ���ҵĳ��ƺ��ҵ�
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
		    printf("\033[40;31m��ǰ�������������£�\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m�Բ���ϵͳû����¼�����������������룡\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.��������\n0.�������˵�\n\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}

}

void sort()         //7.����(���)
{
	struct tx tmp;
	int i,j;
	printf("������%d������\n\n",num);
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)                 //for˫ѭ����ÿһ��ֵ����ð�ݱȽ�
		{
 
			if(t[i].zj>t[j].zj)  //ǰ���ֵ������ں����ֵ�ͽ���ð������
			{
				tmp=t[i];                //��������
				t[i]=t[j];               //��������
				t[j]=tmp;                //��������
			}
		}
	}
	printf("\033[40;31m�Ѱ����������,��ʹ�ù���'4'�鿴��Ч����\033[0m\n");
	system("pause");
	system("cls");
}
void menu()
{char ch;
while(1)
{ system("cls");
  system("color a");
  printf("                            ��������������������  ��  ��������ϵͳ���˵�  ��  ��������������������\n");
  printf("                            ��������������������  ��  1---���ӳ�����Ϣ    ��  �������������������\n");
  printf("                            ��������������������  ��  2---������Ϣ�޸�    ��  �������������������\n");
  printf("                            ��������������������  ��  3---ɾ��������Ϣ    ��  �������������������\n");
  printf("                            ��������������������  ��  4---������Ϣ��ѯ    ��  �������������������\n");
  printf("                            ��������������������  ��  5---δ���������    ��  �������������������\n");
  printf("                            ��������������������  ��  6---���ҳ�����Ϣ    ��  �������������������\n");
  printf("                            ��������������������  ��  7---�����������    ��  �������������������\n");
  printf("                            ��������������������  ��  0---��ȫ�˳���¼    ��  �������������������\n");
  printf("\n");
  printf("��ѡ��");
  ch=getchar();
  switch(ch)
  {case '1':insert(t)/*printf("��ѡ�����ݲ���\n")*/;system("pause");break;
   case '2':modify(t)/*printf("��ѡ�������޸�\n")*/;system("pause");break;
   case '3':Delete(t)/*printf("��ѡ������ɾ��\n")*/;system("pause");break;
   case '4':select(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
   case '5':statistics(t)/*printf("��ѡ������ͳ��\n")*/;system("pause");break;
   case '6':find(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
   case '7':sort(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
  }
  if (ch=='0') {system("cls");printf("\n \033[40;31m���˳���¼��\033[0m\n\n");break;}   //0.�˳�ϵͳ
}
}

void zuche()   //���ó���
{
	int i,q;
	int flag=0;
	char a[12];
	char z[6];
	char p[8]="�����";
	char *b[8];
	strcpy(b,p);
	system("cls");
	printf("�����ó����ĳ��ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ���ҵĳ��ƺ��ҵ�
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
		    printf("\033[40;31m��ǰ�������������£�\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
            printf("1.���øó���\n2.ȡ������\n");
			printf("��ѡ��:");
			scanf("%d",&q);
			if(q==1)
			{
			if(strcmp(t[i].zt,"δ���")==0)
				{
			printf("�����복�������ʱ��(��ʽΪ:XXXX/XX/XX//XX:XX)��");
            scanf("%s",t[i].zcsk);
			printf("�����복����Ҫ�����ʱ����");
            scanf("%d",&t[i].zcsc);
            printf("\n");
			printf("\033[40;31m��ϲ�������óɹ���\033[0m\n");
				}
			if(strcmp(t[i].zt,"�����")==0)
				{
				printf("\n");
				printf("\033[40;31m����ʧ��,���������,�������ã�\033[0m\n\n");
				}
			strcpy(t[i].zt,b);
			}
			if(q==2)
			{
				printf("ȡ���ɹ���\n");
			}
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m�Բ���ϵͳû����¼�����������������룡\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.�������복�ƺ�\n0.�������˵�\n\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}
}
void huanche()  //�黹����
{
int i,q;
	int flag=0;
	char a[12];
	char z[6];
	char p[8]="δ���";
	char *b[8];
    char f[20]="0";
	char *g[20];
	strcpy(b,p);
    strcpy(g,f);
	system("cls");
	printf("�黹�����ĳ��ƺţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ���ҵĳ��ƺ��ҵ�
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
		    printf("\033[40;31m��ǰ�������������£�\033[0m\n");
			printf("\033[40;32m  \n");
		    printf("���ƺţ�%s\n",t[i].cph);
	    	printf("����״̬��%s\n",t[i].zt);
	     	printf("����Ʒ�ƣ�%s\n",t[i].pp);
	    	printf("�������ͣ�%s\n",t[i].cx);
            printf("���������ʱ�̣�%s\n",t[i].zcsk);
            printf("������Ҫ�����ʱ����%d\n",t[i].zcsc);
    		printf("�������(Ԫ)��%d\n",t[i].zj);
            printf("1.�黹�ó���\n2.����ʹ�øó���\n");
			printf("��ѡ��:");
			scanf("%d",&q);
			if(q==1)
			{
			   if(strcmp(t[i].zt,"�����")==0)
				{
             strcpy(t[i].zcsk,g);
              t[i].zcsc=0;
			printf("\033[40;31m��ϲ�����黹�ɹ���\033[0m\n");
				}
			if(strcmp(t[i].zt,"δ���")==0)
				{
				printf("\n");
				printf("\033[40;31m����δ���,���ù黹��\033[0m\n\n");
				}
			strcpy(t[i].zt,b);
			}
			if(q==2)
			{
				printf("ѡ��ɹ���\n");
			}
	}
	else
	{
		 printf("\n");
         printf("\033[40;31m�Բ���ϵͳû����¼�����������������룡\033[0m\n\n");	 
	}
	els:
	printf("\033[40;32m  \n");
    printf("1.��������黹�����ĳ��ƺ�\n0.�������˵�\n\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}
}

void xfdl()  //�����ߵĹ���
{
char ch;
while(1)
{ system("cls");
  system("color a");
  printf("                            ��������������������  ��  ��������ϵͳ���˵�  ��  ��������������������\n");
  printf("                            ��������������������  ��  1---���ó���        ��  �������������������\n");
  printf("                            ��������������������  ��  2---�黹����        ��  �������������������\n");
  printf("                            ��������������������  ��  3---δ���������    ��  �������������������\n");
  printf("                            ��������������������  ��  4---������Ϣ��ѯ    ��  �������������������\n");
  printf("                            ��������������������  ��  5---���ҳ�����Ϣ    ��  �������������������\n");
  printf("                            ��������������������  ��  6---�����������    ��  �������������������\n");
  printf("                            ��������������������  ��  0---��ȫ�˳���¼    ��  �������������������\n");
  printf("\n");
  printf("��ѡ��");
  ch=getchar();
  switch(ch)
  {
   case '1':zuche(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
   case '2':huanche(t)/*printf("��ѡ������ͳ��\n")*/;system("pause");break;
   case '3':statistics(t)/*printf("��ѡ������ͳ��\n")*/;system("pause");break;
   case '4':select(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
   case '5':find(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
   case '6':sort(t)/*printf("��ѡ�����ݲ�ѯ\n")*/;system("pause");break;
  }
  if (ch=='0') {system("cls");printf("\n \033[40;31m���˳���¼��\033[0m\n\n");break;}   //0.�˳�ϵͳ
}


}

void dlxt(DL d[])   //1.��¼ϵͳ
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

printf("\033[43;30m1.�����ߵ�¼\n");
printf("\033[43;30m2.����Ա��¼\n\n");
printf("\033[43;30m��ѡ��:");

scanf("%d",&x);


if(x==1)   //�����ߵ�¼
{
	printf("\n");
printf("\033[43;31m��ѡ�������ߵ�¼��\033[0m\n\n");
yonghu:
printf("\n");
printf("\033[43;30m�������û�:");
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
printf("\033[43;30m���������룺");
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
 {printf("��¼�ɹ���\n");xfdl();}
 else {printf("\n"); printf("\033[43;31m�Բ�������������������룡\033[0m\n");
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
	printf("\033[43;31m�û���������!\033[0m\n");
els:
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}

	}

}

if(x==2)  //����Ա��¼
{
	printf("\n");
printf("\033[43;31m��ѡ��������Ա��¼��\033[0m\n\n");
	yong:
printf("\n");
printf("\033[43;30m�������û�:");
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
printf("\033[43;30m���������룺");
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
 {printf("��¼�ɹ���\n");menu();}
 else {printf("\n"); printf("\033[43;31m�Բ�������������������룡\033[0m\n");
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
	printf("\033[43;31m�û���������!\033[0m\n");
elss:
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto elss;
	}

	}

}


}

void cjyh()    //2.�����û���
{
int i,j=0;
int flag=0;
int flag1=0;
char a[20];
char z[6];
num1++;
printf("\n");
printf("\033[43;31m��ѡ��ע���û���\033[0m\n\n");
printf("\033[43;31m��ӭ�����������û�ע��ҳ�棡\033[0m\n");
yonghu:
flag=0;
printf("\n");
printf("\033[43;30m�������û�����");
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
	printf("\033[43;31m�Բ����û����Ѵ���!\033[0m\n");
	els:
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;
	}
	}
    else
mima:	{
printf("\n");
printf("\033[43;30m  \n");
printf("���������룺");
     scanf("%s",d[num1-1].mm);
printf("��ȷ�����룺");
     scanf("%s",a);
	
     if(strcmp(a,d[num1-1].mm)==0)
		{
		flag1=1;
		}
	 
	 if(flag1)
     {printf("\n");
     printf("\033[43;31mע��ɹ���\033[0m\n");
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
     printf("\033[43;31m������������벻һ�£����������룡\033[0m\n");
el:
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto el;}
	 }
	}
}

void xgmm()    //3.�޸��û�����
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
	printf("\033[43;31m��ӭʹ���������û������޸ģ�\033[0m\n");
    printf("\n");
    printf("\033[43;30m\n");
	printf("��������Ҫ�޸�������˺ţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ�޸�������û��ҵ�
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
	     	printf("\033[43;31m��ǰ���룺%s\n",d[i].mm);
			printf("\033[43;30m  \n");
		    p=i; 
chongxin:
	printf("\n");
	printf("1.�޸�����\n");
	printf("0.�˳�ϵͳ\n\n");
	printf("��ѡ��");
	scanf("%d",&j);                                                  //ѡ���޸ĵ���Ϣ
	switch(j)                                                        //ѡ��ṹ!
	{
		case 1:
			printf("\n");
			printf("�����޸�Ϊ��");
			scanf("%s",x);
            printf("��ȷ�����룺");
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
     printf("\033[43;31m�޸ĳɹ���\033[0m\n");
	 }
    else
	 {
		 
	 printf("\n");
     printf("\033[43;31m�޸�ʧ��,������������벻һ�£����������룡\033[0m\n");
      
els:   
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[40;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto els;}
	}
	 

			//printf("\n");
            //  printf("\033[43;31m�޸ĳɹ�!\033[0m\n");
			break;
        case 0:
			printf("\033[43;31m���˳�!\033[0m\n");
			break;
        
	}
	
	system("pause");
	system("cls");
	}
	else
	{
		
     printf("\033[43;31m�Բ���ϵͳû����¼����˺�!\033[0m\n\n");
el:
	printf("\033[43;30m  \n");
    printf("1.��������\n");
    printf("0.�������˵�\n");
    printf("��ѡ��");
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
		printf("\033[43;31m���޸�ѡ��,����������!");
        printf("\033[40;32m  \n");
		goto el;}
	}
}

void kaifazhexxi()
{ 
  printf("\n\033[43;31m��ѡ��鿴��������Ϣ!\n");
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
 printf("					��ӭ��¼�������޹���ϵͳ��\n\n");
 printf("					###############################\n");
 printf("					####       1.��¼ϵͳ      ####\n");
 printf("					####       2.ע���û�      ####\n");
 printf("					####       3.�޸�����      ####\n");
 printf("					####       4.��������Ϣ    ####\n");
 printf("					####       0.�˳�ϵͳ      ####\n");
 printf("					###############################\n\n\n");
 printf("��ѡ��");
 c=getchar();
 switch(c)
  {
   case '1':dlxt(d);system("pause");break;
   case '2':cjyh(d);system("pause");break;
   case '3':xgmm(d);system("pause");break;
   case '4':kaifazhexxi();system("pause");break;
 }
   if (c=='0') {system("cls");printf("���˳�\n");break;}   //0.�˳�ϵͳ
}
}
main()
{
system("color 60");
dlym();
}