#include <reg51.h>              //包含头文件reg51.h
#define  OFF   1                    //OFF表示灯灭
#define  ON     0                    //ON表示灯亮

sbit   light=P1^0;                  //灯泡连接至P1.0
sbit   light_up=P0^0;            //亮度加强按键连接P0.0
sbit   light_down=P0^1 ;      //亮度减弱按键连接P0.1

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
	   if(light_up==0)                  //再次判断按键按下
	   { j--;i++;                           //调整延时参数
	   if(j==0) {j=500;i=0;}        //调动最亮，再返回最暗
		 }  }
	if(light_down==0)      //按键按下？
	{ delay(100);               //去抖动
	  if(light_down==0)       //再次判断按键按下
	  {  j++;i--;             //调整延时参数
	     if(i==0) {i=500;j=0;}   //调动最暗，再返回最亮
		 }
              }  
        }   
   }






