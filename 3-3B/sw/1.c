#include <reg51.h>              //����ͷ�ļ�reg51.h
#define  OFF   1                    //OFF��ʾ����
#define  ON     0 				//ON��ʾ����
unsigned int a[9]={1,2,3,4,0,4,3,2,1};                   
unsigned char key=0;
sbit   light=P1^0;                  //����������P1.0
sbit   light_up=P0^0;            //���ȼ�ǿ��������P0.0
      //���ȼ�����������P0.1

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
	   if(light_up==0)				 //�ٴ��жϰ�������                  
	   if(a[key]==1) {i=500;j=0;};
	   if(a[key]==2) {i=375;j=125;};
   	   if(a[key]==3) {i=250;j=250;};
	   if(a[key]==4) {i=125;j=375;};
	   if(a[key]==0) {i=0;j=500;};
	    key++;
		if(key==9)	 {key=0;};
	   while(!light_up);
	   delay(1200); }
	        }
}  




