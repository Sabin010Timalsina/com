#include<graphics.h>  
#include<stdio.h>  
#include<stdlib.h>   
#include<conio.h>
#include<dos.h>
int main()  
{  
    int gd=DETECT,gm,x,y,r=40;  
    char ch;  
    initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");  
    setbkcolor(3);  
    x=getmaxx()/2;  
    y=getmaxy()/2;  
    setfillstyle(1,RED);  
    circle(x,y,r);  
    floodfill(x,y,getmaxcolor());  
    while((ch=getch())!=13)  
      {  
        switch(ch)  
                     {  
            case 75:    if(x>=r+1)  
                                {  
                    cleardevice();  
                    circle(x-=10,y,r);  
                    floodfill(x,y,getmaxcolor());  
                          }  
                break;  
            case 72:    if(y>=r+1)  
                                {  
                    cleardevice();  
                    circle(x,y-=10,r);  
                    floodfill(x,y,getmaxcolor());  
                                  }  
                break;  
            case 77:    if(x<=(getmaxx()-r-10))  
                               {  
                    cleardevice();  
                    circle(x+=10,y,r);  
                    floodfill(x,y,getmaxcolor());  
                                }  
                break;  
            case 80:    if(y<=(getmaxy()-r-10))  
                               {  
                    cleardevice();  
                    circle(x,y+=10,r);  
                    floodfill(x,y,getmaxcolor());  
                 }  
        }  
    }  
    getch();
    return 0;  
}  