#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream>
using namespace std;
class sevensegment
{
private:
int x,y,	x1,y1,l,w,c;
public:
sevensegment(){
x=100;y=200;l=50;w=4;c=4;	
}
void setdata(int a,int b,int f,int d,int e)
{
x1=a;y1=b;l=f;w=d;c=e;	
}
void getdata()
{
cout<<"enter start point x";
cin>>x1;
cout<<"enter start point y";
cin>>y1;
cout<<"enter  lenght l";
cin>>l;
cout<<"enter width w";
cin>>w;
cout<<"enter color c";
cin>>c;
}
void display(int a)
{
int p=a;
if(p==0){
display_a(1);
display_b(1);
display_c(1);
display_d(1);
display_e(1);
display_g(0);
display_f(1);
}else 
if(p==1){
display_a(0);
display_b(1);
display_c(1);
display_d(0);
display_e(0);
display_g(0);
display_f(0);
} else 
if(p==2){
display_a(1);
display_b(1);
display_c(0);
display_d(1);
display_e(1);
display_g(1);
display_f(0);
}else 
if(p==3){
display_a(1);
display_b(1);
display_c(1);
display_d(1);
display_e(0);
display_g(1);
display_f(0);
}else 
if(p==4){
display_a(0);
display_b(1);
display_c(1);
display_d(0);
display_e(0);
display_g(1);
display_f(1);
}else 
if(p==5){
display_a(1);
display_b(0);
display_c(1);
display_d(1);
display_e(0);
display_g(1);
display_f(1);
}else 
if(p==6){
display_a(1);
display_b(0);
display_c(1);
display_d(1);
display_e(1);
display_g(1);
display_f(1);
}else 
if(p==7){
display_a(1);
display_b(1);
display_c(1);
display_d(0);
display_e(0);
display_g(0);
display_f(0);
}else 
if(p==8){
display_a(1);
display_b(1);
display_c(1);
display_d(1);
display_e(1);
display_g(1);
display_f(1);
}else 
if(p==9){
display_a(1);
display_b(1);
display_c(1);
display_d(1);
display_e(0);
display_g(1);
display_f(1);
}




}
void display_a(int a)
{
int s=a;
setcolor(5);
setfillstyle(1,c);
 x=x1;y=y1;
line(x,y,x+l/8,y-l/8);
line(x+l/8,y-l/8,x+7*l/8,y-l/8);
line(x+7*l/8,y-l/8,x+l,y);
line(x+l,y,x+7*l/8,y+l/8);
line(x+7*l/8,y+l/8,x+l/8,y+l/8);
line(x+l/8,y+l/8,x,y);
if(s==1) {
floodfill(x+5,y,5);
}else{
setfillstyle(1,0);
floodfill(x+5,y,5);
}
}
void display_d(int a)
{
int s=a;
setcolor(5);
setfillstyle(1,c);
x=x1;
y=y1+2*l;
line(x,y,x+l/8,y-l/8);
line(x+l/8,y-l/8,x+7*l/8,y-l/8);
line(x+7*l/8,y-l/8,x+l,y);
line(x+l,y,x+7*l/8,y+l/8);
line(x+7*l/8,y+l/8,x+l/8,y+l/8);
line(x+l/8,y+l/8,x,y);
if(s==1){

floodfill(x+5,y,5);
}else{
setfillstyle(1,0);
floodfill(x+5,y,5);
}
}
void display_g(int a)
{
int s=a;
setcolor(5);
setfillstyle(1,c);
y=y1+l;
line(x,y,x+l/8,y-l/8);
line(x+l/8,y-l/8,x+7*l/8,y-l/8);
line(x+7*l/8,y-l/8,x+l,y);
line(x+l,y,x+7*l/8,y+l/8);
line(x+7*l/8,y+l/8,x+l/8,y+l/8);
line(x+l/8,y+l/8,x,y);
if (s==1){

floodfill(x+5,y,5);
}else{
setfillstyle(1,0);
floodfill(x+5,y,5);
}
}
void display_f(int a)  //f segment
{
int s=a;
setcolor(5);
setfillstyle(1,c);
 x=x1;y=y1;
line(x-2,y,x+l/8,y+l/8);
line(x+l/8,y+l/8,x+l/8,y+7*l/8);
line(x+l/8,y+7*l/8,x-2,y+l);
line(x-2,y+l,(x-2)-l/8,y+7*l/8);
line((x-2)-l/8,y+7*l/8,(x-2)-l/8,y+l/8);
line((x-2)-l/8,y+l/8,x-2,y);
if (s==1){
floodfill(x-2,y+3,5);
}else{
setfillstyle(1,0);
floodfill(x-2,y+3,5);
}
}
void display_b(int a)  //b segment
{
int s=a;
setcolor(5);
setfillstyle(1,c);
 x=x1+l+2;y=y1;
line(x-2,y,x+l/8,y+l/8);
line(x+l/8,y+l/8,x+l/8,y+7*l/8);
line(x+l/8,y+7*l/8,x-2,y+l);
line(x-2,y+l,(x-2)-l/8,y+7*l/8);
line((x-2)-l/8,y+7*l/8,(x-2)-l/8,y+l/8);
line((x-2)-l/8,y+l/8,x-2,y);
if(s==1){
floodfill(x-2,y+3,5);
}else{
setfillstyle(1,0);
floodfill(x-2,y+3,5);
}
}
void display_e(int a)  //e segment
{
int s=a;
setcolor(5);
setfillstyle(1,c);
 x=x1-2;y=y1+l;
line(x-2,y,x+l/8,y+l/8);
line(x+l/8,y+l/8,x+l/8,y+7*l/8);
line(x+l/8,y+7*l/8,x-2,y+l);
line(x-2,y+l,(x-2)-l/8,y+7*l/8);
line((x-2)-l/8,y+7*l/8,(x-2)-l/8,y+l/8);
line((x-2)-l/8,y+l/8,x-2,y);
if(s==1){
floodfill(x-2,y+3,5);
}else{
setfillstyle(1,0);
floodfill(x-2,y+3,5);
}
}
void display_c(int a)  //c segment
{
int s=a;
setcolor(5);
setfillstyle(1,c);
 x=x1+l+2;y=y1+l;
line(x-2,y,x+l/8,y+l/8);
line(x+l/8,y+l/8,x+l/8,y+7*l/8);
line(x+l/8,y+7*l/8,x-2,y+l);
line(x-2,y+l,(x-2)-l/8,y+7*l/8);
line((x-2)-l/8,y+7*l/8,(x-2)-l/8,y+l/8);
line((x-2)-l/8,y+l/8,x-2,y);
if(s==1){

floodfill(x,y+3,5);
}else{
setfillstyle(1,0);
floodfill(x,y+3,5);
}
}

};
