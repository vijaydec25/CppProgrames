#include"sevensegment.h"
 main()
{

int st=0;
sevensegment s1,s2,s3,s4,s5,s6;
s1.setdata(100,200,50,4,10);
s2.setdata(200,200,50,4,10);
s3.setdata(350,200,50,4,10);
s4.setdata(450,200,50,4,10);
s5.setdata(600,200,50,4,12);
s6.setdata(700,200,50,4,12);
sevensegment s7,s8,s9,s10,s11,s12,s13,s14;
s7.setdata(50,350,40,4,14);
s8.setdata(140,350,40,4,14);
s9.setdata(250,350,40,4,14);
s10.setdata(340,350,40,4,14);

s11.setdata(450,350,40,4,14);
s12.setdata(540,350,40,4,14);
s13.setdata(630,350,40,4,14);
s14.setdata(720,350,40,4,14);


time_t tim;
   struct tm *detl;
   char buf[80];
   
   
initwindow(850,600);

setcolor(5);
settextstyle(1, 0, 6);
outtextxy( 90,  500,"DIGITAL CLOCK");
setfillstyle(1,12);
circle(300,225,15);
floodfill(300,225,5);
circle(300,275,15);
floodfill(300,275,5);
circle(550,225,15);
circle(550,275,15);
int k,m;
int j;
int l;
for(int i=0;i<=99999;i++){
time( &tim );	
detl = localtime( &tim );
   //strftime(buf, 20, "%x ", detl);
   //printf("Date  after formatting : %s", buf );
   //strftime(buf, 20," %I:%M%p", detl);
   //printf(" time after formatting : %s", buf );
strftime(buf, 20, "%I", detl);// hour
int hour = atoi(buf); // Using atoi() 
j=hour/10;
s1.display(j);
l=hour%10;
s2.display(l);
 
strftime(buf, 20, "%M", detl);//min
int min = atoi(buf); // Using atoi()
  
j=min/10;
s3.display(j);
l=min%10;
s4.display(l);


strftime(buf, 20, "%S", detl);//second
int sec = atoi(buf); // Using atoi()

j=sec/10;
s5.display(j);
l=sec%10;
s6.display(l);

strftime(buf, 20, "%p", detl);//second
settextstyle(1, 0, 3);
outtextxy( 780,  240, buf);

strftime(buf, 20, "%d", detl);// day
int day = atoi(buf); // Using atoi() 

j=day/10;
s7.display(j);
l=day%10;
s8.display(l);


strftime(buf, 20, "%x", detl);// month
int month = atoi(buf); // Using atoi() 
j=month/10;
s9.display(j);
l=month%10;
s10.display(l);




strftime(buf, 20, "%c", detl);// date time
settextstyle(1, 0, 3);
outtextxy( 50,  10, buf);
strftime(buf, 20, "%Y", detl);// year
int year = atoi(buf); // Using atoi() 
int year1;
year1=year%2000;
j=year1/10;
s13.display(j);
l=year1%10;
s14.display(l);

year1=year/100;
j=year1/10;
s11.display(j);
l=year1%10;
s12.display(l);


strftime(buf, 20, "%A", detl);// day name
settextstyle(1, 0, 9);
outtextxy( 50,  30, buf);
st=st%2;
if(st==0){
setfillstyle(1,12);
floodfill(550,225,5);
floodfill(550,275,5);
delay(200);	
}else
if(st=1){
setfillstyle(1,0);
floodfill(550,225,5);
floodfill(550,275,5);	
}

st++;
delay(200);
}
getch();
}
