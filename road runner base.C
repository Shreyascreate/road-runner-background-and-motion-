#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int i;
  int kbhit();
  int t_y=-300;
  int c_x=0,m_speed=5;
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd, &gm,"C:\\TC\\BGI");
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
outtextxy(50, 25, " ");
outtextxy(175, 45, " ");
outtextxy(50,100,"");
getch();
setcolor(GREEN);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
outtextxy(150, 200, "CAR RALLY");
setcolor(LIGHTBLUE);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
outtextxy(0,350,"TEAM: SEGA :-" );
setcolor(WHITE);
outtextxy(200,350,"1) Kshitij Mahajan");
outtextxy(200,370,"2) Shreyas Bhalerao");
 sound (262);delay(125);
 sound (330);delay(125);
 sound (392);delay(125);
 sound (523);delay(125);
 sound (660);delay(125);
 sound (784);delay(575);
 sound (660);delay(575);
 sound (207);delay(125);
 sound (262);delay(125);
 sound (311);delay(125);
 sound (415);delay(125);
 sound (523);delay(125);
 sound (622);delay(125);
 sound (830);delay(575);
 sound (622);delay(575);
 sound (233);delay(125);
 sound (294);delay(125);
 sound (349);delay(125);
 sound (466);delay(125);
 sound (587);delay(125);
 sound (698);delay(125);
 sound (932);delay(575);
 sound (932);delay(125);
 sound (932);delay(125);
 sound (932);delay(125);
 nosound();delay(30);
 sound (1046);delay(50);
 nosound();delay(10);
 sound(1046);delay(50);
  nosound();delay(10);
 sound(1046);delay(50);
  nosound();delay(10);
 sound(1046);delay(50);
 sound(1050);delay(1000);

 nosound();
getch();

while(!kbhit())
{

  cleardevice();

	//for background
  setcolor(GREEN);
  rectangle(0,0,1000,1000);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(1,1,GREEN);
  //for road
  setcolor(WHITE);
  rectangle(200,-1,400,500);
  setfillstyle(SOLID_FILL,8);
  floodfill(201,0,WHITE);
  //for side stripes
  setcolor(WHITE);
  rectangle(205,-1,210,500);
  setfillstyle(SOLID_FILL,8);
  floodfill(205,0,WHITE);
  //for stripes
  for(i=0;i<500;i+=65)
  {
     rectangle(290,10+i+t_y,300,50+i+t_y);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(291,11+i+t_y,WHITE);
  }
  t_y+=15;
  if(t_y>400)
  t_y=-300;
  //FOR LIFE AND SCORE
  settextstyle(3,0,2);
  outtextxy(10,10,"LIFE: ");
  outtextxy(10,40,"SCORE: ");
  //for circles and life
  setfillstyle(1,WHITE);
  circle(90,20,6);
  floodfill(91,21,WHITE);
  circle(110,20,6);
  floodfill(111,21,WHITE);
  circle(130,20,6);
  floodfill(131,21,WHITE);
  outtextxy(100,40,"0");
  //car main body
  setcolor(BLACK);
  setfillstyle(1,BLUE);
  rectangle(300+c_x,400,340+c_x,460);
  floodfill(301+c_x,401,BLACK);
  // front of car
  setfillstyle(1,YELLOW);
  rectangle(305+c_x,385,335+c_x,455);
  floodfill(306+c_x,406,BLACK);
  //wheels
  setfillstyle(1,BLACK);
  arc(305+c_x,392,90,270,6);
  arc(337+c_x,392,270,90,5);
  sound(300);
  //pavement
  setcolor(YELLOW);
  setfillstyle(1,YELLOW);
  rectangle(150,-1,200,1000);
  floodfill(151,0,YELLOW);
  setcolor(YELLOW);
  setfillstyle(1,YELLOW);
  rectangle(400,-1,450,1000);
  floodfill(401,0,YELLOW);
  delay(50);
}
nosound();
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(CYAN);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
outtextxy(150, 200, "THANKYOU");
 sound (392);delay(100);
 sound (370);delay(100);
 sound (349);delay(100);
 sound (311);delay(300);
 sound (330);delay(300);
 sound (207);delay(100);
 sound (220);delay(100);
 sound (262);delay(300);
 sound (220);delay(100);
 sound (262);delay(100);
 sound (294);delay(500);
 sound (311);delay(300);
 sound (296);delay(300);
 sound (262);delay(1300);
 sound (262);delay(100);
 nosound();
getch();

  getch();
  return 0;

}
