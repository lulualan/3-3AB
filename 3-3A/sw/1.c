#include <reg51.h>              //����ͷ�ļ�reg51.h
#define  OFF   1                    //OFF��ʾ����
#define  ON     0                    //ON��ʾ����

sbit   light=P1^0;                  //����������P1.0
sbit   light_up=P0^0;            //���ȼ�ǿ��������P0.0
sbit   light_down=P0^1 ;      //���ȼ�����������P0.1

void delay(unsigned int i)     // ��ʱ���� 
{   unsigned  int k;
    for(k=0 ; k<i; k++)  ;   }
void main()			//������
{ int i ,j;
   i=0;j=500;                                    //���ʱ����ʱ������ֵ
   while(1) { light=ON; delay(i);   //��������ʱ
           light=OFF; delay(j);          //������ʱ
           light_up = 1; //
	if(light_up==0)                  //�������£�
            {  delay(100);                      //ȥ����
	   if(light_up==0)                  //�ٴ��жϰ�������
	   { j--;i++;                           //������ʱ����
	   if(j==0) {j=500;i=0;}        //�����������ٷ����
		 }  }
	if(light_down==0)      //�������£�
	{ delay(100);               //ȥ����
	  if(light_down==0)       //�ٴ��жϰ�������
	  {  j++;i--;             //������ʱ����
	     if(i==0) {i=500;j=0;}   //��������ٷ�������
		 }
              }  
        }   
   }






