#include <reg51.h>              //包含头文件reg51.h
#define  OFF   1                    //OFF表示灯灭
#define  ON     0 				//ON表示灯亮
unsigned int a[9]={1,2,3,4,0,4,3,2,1};                   
unsigned char key=0;
sbit   light=P1^0;                  //灯泡连接至P1.0
sbit   light_up=P0^0;            //亮度加强按键连接P0.0
      //亮度减弱按键连接P0.1

void delay(unsigned int i)     // 延时函数 
{   unsigned  int k;
    for(k=0 ; k<i; k++)  ;   }

void main()			//主函数
{ int i ,j;
   i=0;j=500;                                    //灯最暗时的延时参数初值
   while(1) { light=ON; delay(i);   //灯亮，延时
           light=OFF; delay(j);          //灯灭，延时
           light_up = 1; //
	if(light_up==0)                  //按键按下？
            {  delay(100);                      //去抖动
	   if(light_up==0)				 //再次判断按键按下                  
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




