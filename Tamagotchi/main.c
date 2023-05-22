#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>
#include <conio.h>
#include <time.h>
#include <windows.h>

struct load

   {

  int pet,tru,hp,hlmao;
  char petn[35],hl[100];



    }sf[3];
    int i,act,r,a,b,u,l,y,hh,hplss,x,y;
    FILE *lfa;
    FILE *lfb;
    FILE *lfc;
    FILE*pt1;
    FILE*pt2;
    FILE*pt3;
    FILE*ptn1;
    FILE*ptn2;
    FILE*ptn3;
    FILE*hp1;
    FILE*hp2;
    FILE*hp3;
    FILE*ti1;
    FILE*ti2;
    FILE*ti3;
    FILE*lsta;
    FILE*lstb;

int main()
{
    //system("music.mp3");
    lfa=fopen("load file 1.txt","r");
    while(fscanf(lfa,"%i",&sf[0].tru)!=EOF)
    fclose(lfa);
    lfb=fopen("load file 2.txt","r");
    while(fscanf(lfb,"%i",&sf[1].tru)!=EOF)
    fclose(lfb);
    lfc=fopen("load file 3.txt","r");
    while(fscanf(lfc,"%i",&sf[2].tru)!=EOF)
    fclose(lfc);
    ti1=fopen("time 1.txt","r");
    while(fscanf(ti1,"%i",&sf[0].hlmao)!=EOF)
    fclose(ti1);
    ti2=fopen("time 2.txt","r");
    while(fscanf(ti2,"%i",&sf[1].hlmao)!=EOF)
    fclose(ti2);
    ti3=fopen("time 3.txt","r");
    while(fscanf(ti3,"%i",&sf[2].hlmao)!=EOF)
    fclose(ti3);
    hh=1;
    yeet:
    launchscreen();
    scanf("%i",&b);
    system("cls");
    if(b==1)
    {
    loaddd();
    if(i!=1&&i!=2&&i!=3)
    {
        printf("%i",sf[0].tru);
        printf("pls enter a number from one to three.");
    }
    else
    {
        maininterface();
    }
    }
    else if(b==2)
    {
        firsttime();
        sf[i].hp=5;

        switch(i)
    {
    case 0: hp1=fopen("hp 1.txt","w");
            fprintf(hp1,"%i",sf[i].hp);
            fclose(hp1);break;
    case 1: hp2=fopen("hp 2.txt","w");
            fprintf(hp2,"%i",sf[i].hp);
            fclose(hp2);break;
    case 2: hp3=fopen("hp 3.txt","w");
            fprintf(hp3,"%i",sf[i].hp);
            fclose(hp3);break;
    }
    }
    else
    {
        printf("\n\n\n\n\n\n\n                                                  pls insert 1 or 2!\n\n\n\n\n\n");
        system("pause");
        system("cls");
        goto yeet;
    }

    here:
    maininterface();
    scanf("%i",&act);
    system("cls");
    if(act==1)
    {
       feed();

    }
    else if(act==2)
    {

pet();

    }
    else if(act==3)
    {
poop();
    }
    else if(act==4)
    {
settings();
    }
    else if(act==0)
    {
mascot();
    }
    else
    {
        printf("\n\n\n\n\n\n\n                                                  pls insert 1, 2, 3 or 4!\n\n\n\n\n\n");
      system("pause");
        system("cls");
        goto here;
    }
printf("\n                                                         ");
    system("pause");
    system("cls");
    switch(i)
    {
    case 0: hp1=fopen("hp 1.txt","w");
            fprintf(hp1,"%i",sf[i].hp);
            fclose(hp1);break;
    case 1: hp2=fopen("hp 2.txt","w");
            fprintf(hp2,"%i",sf[i].hp);
            fclose(hp2);break;
    case 2: hp3=fopen("hp 3.txt","w");
            fprintf(hp3,"%i",sf[i].hp);
            fclose(hp3);break;
    }
    hplss=0;
    time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  switch(i)
    {
    case 0: ti1=fopen("time 1.txt","w");
  fprintf(ti1,"%s",asctime(brokentime));
  fclose(ti1);break;
    case 1: ti2=fopen("time 2.txt","w");
  fprintf(ti2,"%s",asctime(brokentime));
  fclose(ti2);break;
    case 2: ti3=fopen("time 3.txt","w");
  fprintf(ti3,"%s",asctime(brokentime));
  fclose(ti3);break;
    }
    goto here;
}
void launchscreen()
{
    int a,oo;
    FILE *fa;
    fa=fopen("launch screen.txt","r");

    if (fa) {
    while ((a = getc(fa)) != EOF)
        putchar(a);
    fclose(fa);
    }
    printf("\n                                                         ");
    for(oo=1;oo<3;oo++)
    {
    system("COLOR 05");
    system("COLOR 09");
    system("COLOR 03");
    system("COLOR 02");
    system("COLOR 0A");
    system("COLOR 06");
    system("COLOR 0E");
    system("COLOR 0C");
    system("COLOR 04");
    system("COLOR 07");
    system("COLOR 0D");
    system("COLOR 0F");
    }
}

void firsttime()
{
    int e,f,h,aaa,ab;
    hplss=0;
    if(sf[0].tru==0)
    {
        i=0;
        sf[0].tru=1;
        lfa=fopen("load file 1.txt","w");
        fprintf(lfa,"%i",sf[0].tru);
        fclose(lfa);
    }
    else if(sf[1].tru==0)
    {
        i=1;
        sf[1].tru=1;
        lfb=fopen("load file 2.txt","w");
        fprintf(lfb,"%i",sf[1].tru);
        fclose(lfb);
    }
    else if(sf[2].tru==0)
    {
        i=2;
        sf[2].tru=1;
        lfc=fopen("load file 3.txt","w");
        fprintf(lfc,"%i",sf[2].tru);
        fclose(lfc);
    }
    else
    {
        printf("\n\n\n\n\n\n\n     there are no more save file slots. pls pick one that has already been created from the main menu\n\n\n\n\n\n");
        system("pause");
        system("cls");
        main();
    }
    FILE *fe;
    fe=fopen("pet choice.txt","r");
    if (fe) {
    while ((f = getc(fe)) != EOF)
        putchar(f);
    fclose(fe);
    }
    printf("\n                                                         ");
    scanf("%i",&sf[i].pet);
    switch(i)
    {
    case 0: pt1=fopen("pet type 1.txt","w");
            fprintf(pt1,"%i",sf[i].pet);
            fclose(pt1);break;
    case 1: pt2=fopen("pet type 2.txt","w");
            fprintf(pt2,"%i",sf[i].pet);
            fclose(pt2);break;
    case 2: pt3=fopen("pet type 3.txt","w");
            fprintf(pt3,"%i",sf[i].pet);
            fclose(pt3);break;
    }
    system("cls");
    FILE *fbb;
    fbb=fopen("name choice 1.txt","r");
    if (fbb) {
    while ((aaa = getc(fbb)) != EOF)
        putchar(aaa);
    fclose(fbb);
    }
    FILE *faa;
    faa=fopen("name choice 2.txt","r");
    switch(sf[i].pet)
    {
    case 1:printf(" dog  ");break;

    case 2:printf(" cat  ");break;

    case 3:printf("rabbit");break;

    default: printf("pls pick a pet!! >:(") ;break;
    }
    if (faa) {
    while ((ab = getc(faa)) != EOF)
        putchar(ab);
    fclose(faa);
    }
    printf("\n                                                         ");
    fflush(stdin);
    gets(sf[i].petn);
    switch(i)
    {
    case 0: ptn1=fopen("pet name 1.txt","w");
            fprintf(ptn1,"%s",sf[i].petn);
            fclose(ptn1);break;
    case 1: ptn2=fopen("pet name 2.txt","w");
            fprintf(ptn2,"%s",sf[i].petn);
            fclose(ptn2);break;
    case 2: ptn3=fopen("pet name 3.txt","w");
            fprintf(ptn3,"%s",sf[i].petn);
            fclose(ptn3);break;
    }
    system("cls");
    //printf("%i\n%i\n%i\n%s",i,sf[i].tru,sf[i].pet,sf[i].petn);



}

void loaddd()
{
    int p,ii,aab,aac;
    FILE *lsf;
    lsf=fopen("load sf.txt","r");
    if (lsf) {
    while ((p = getc(lsf)) != EOF)
        putchar(p);
    fclose(lsf);
    }
    printf("\n                                                         ");
    scanf("%i",&i);
    i=i-1;
    if(sf[i].tru==1)
    {
    system("cls");
    lsta=fopen("last time 1.txt","r");
    if (lsta) {
    while ((aab = getc(lsta)) != EOF)
        putchar(aab);
    fclose(lsta);
    }
    switch(i)
    {
    case 0: ti1=fopen("time 1.txt","r");
    if (ti1) {
    while ((ii = getc(ti1)) != EOF)
        putchar(ii);
    fclose(ti1);
    }break;
    case 1: ti2=fopen("time 2.txt","r");
    if (ti2) {
    while ((ii = getc(ti2)) != EOF)
        putchar(ii);
    fclose(ti2);
    }break;
    case 2: ti3=fopen("time 3.txt","r");
    if (ti3) {
    while ((ii = getc(ti3)) != EOF)
        putchar(ii);
    fclose(ti3);
    }break;
    }
    lstb=fopen("last time 2.txt","r");
    if (lstb) {
    while ((aac = getc(lstb)) != EOF)
        putchar(aac);
    fclose(lstb);
    }
    printf("\n                                                         ");
    scanf("%i",&hplss);
    }
     else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n                                that file is empty, pls pick a file with data or create a new one\n\n\n\n\n\n");
        system("pause");
        system("cls");
        main();
    }

}

void maininterface()
{



    switch(i)
    {
    case 0: pt1=fopen("pet type 1.txt","r");
            while(fscanf(pt1,"%i",&sf[i].pet)!=EOF)
            fclose(ptn1);break;
    case 1: pt2=fopen("pet type 2.txt","r");
            while(fscanf(pt2,"%i",&sf[i].pet)!=EOF)
            fclose(pt2);break;
    case 2: pt3=fopen("pet type 3.txt","r");
            while(fscanf(pt3,"%i",&sf[i].pet)!=EOF)
            fclose(pt3);break;
    }
    switch(i)
    {
    case 0: ptn1=fopen("pet name 1.txt","r");
            while(fscanf(ptn1,"%s",&sf[i].petn)!=EOF)
            fclose(ptn1);break;
    case 1: ptn2=fopen("pet name 2.txt","r");
            while(fscanf(ptn2,"%s",&sf[i].petn)!=EOF)
            fclose(ptn2);break;
    case 2: ptn3=fopen("pet name 3.txt","r");
            while(fscanf(ptn3,"%s",&sf[i].petn)!=EOF)
            fclose(ptn3);break;
    }
    system("cls");
    hearts();
if(sf[i].pet==1)
    {
           maininterface1();
    }
    else if(sf[i].pet==2)
    {
        maininterface2();
    }
    else if(sf[i].pet==3)
    {
    textcolor(YELLOW);
    maininterface3();
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n                                                  pls type 1, 2 or 3 only!\n\n\n\n\n\n");if(sf[i].pet==1)
    {
           maininterface1();
    }
    else if(sf[i].pet==2)
    {
        maininterface2();
    }
    else if(sf[i].pet==3)
    {
    maininterface3();
    }
        system("pause");
        system("cls");
        main();
    }
     printf("\n                                                         ");
}
void hearts()
{
    int r,n;
    switch(i)
    {
    case 0: hp1=fopen("hp 1.txt","r");
            while(fscanf(hp1,"%i",&sf[i].hp)!=EOF)
            fclose(hp1);break;
    case 1: hp2=fopen("hp 2.txt","r");
            while(fscanf(hp2,"%i",&sf[i].hp)!=EOF)
            fclose(hp2);break;
    case 2: hp3=fopen("hp 3.txt","r");
            while(fscanf(hp3,"%i",&sf[i].hp)!=EOF)
            fclose(hp3);break;
    }
    sf[i].hp=sf[i].hp-hplss*2;
    if(sf[i].hp<1)
    {
        usuck();
    }
    else{
    if(sf[i].hp>10)
    {
        sf[i].hp=10;
    }
    switch(i)
    {
    case 0: hp1=fopen("hp 1.txt","w");
            fprintf(hp1,"%i",sf[i].hp);
            fclose(hp1);break;
    case 1: hp2=fopen("hp 2.txt","w");
            fprintf(hp2,"%i",sf[i].hp);
            fclose(hp2);break;
    case 2: hp3=fopen("hp 3.txt","w");
            fprintf(hp3,"%i",sf[i].hp);
            fclose(hp3);break;
    }
    textcolor(RED);
    printf("\n  ");
    for (r=0;r<sf[i].hp;++r)
  {
    printf("\03 ");
  }
  printf(" ||  ");
  printf("%s",sf[i].petn);
   printf(" ||  ");
   printf("SF %i",i+1);
   printf("  ||  ");
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  printf("%s\n", asctime(brokentime));
    }
}

void maininterface1()
{
    int e;
    FILE *fa;
    fa=fopen("dog main if.txt","r");
    if(hh==1)
    {
        textcolor(LIGHTBLUE);
    }
    else
    {
        textcolor(BLUE);
    }
    if (fa) {
    while ((e = getc(fa)) != EOF)
        putchar(e);
    fclose(fa);
    }
}

void maininterface2()
{
    int d;
    FILE *fe;
    fe=fopen("cat main if.txt","r");
    if(hh==1)
    {
        textcolor(LIGHTGRAY);
    }
    else
    {
        textcolor(BLACK);
    }
    if (fe) {
    while ((d = getc(fe)) != EOF)
        putchar(d);
    fclose(fe);
    }
}
void maininterface3()
{
    int c;
    FILE *fi;
    if(hh==1)
    {
        textcolor(LIGHTMAGENTA);
    }
    else
    {
        textcolor(MAGENTA);
    }
    fi=fopen("bunny main if.txt","r");
    if (fi) {
    while ((c = getc(fi)) != EOF)
        putchar(c);
    fclose(fi);
    }
}
void feed()
{
     int c;
    if(sf[i].pet==1)
    {
      FILE *faa;
    faa=fopen("feed doggo.txt","r");
    if (faa) {
    while ((u = getc(faa)) != EOF)
        putchar(u);
    fclose(faa);
    }
    }
    else if(sf[i].pet==2)
    {
       FILE *fii;
    fii=fopen("feed catto.txt","r");
    if (fii) {
    while ((r = getc(fii)) != EOF)
        putchar(r);
    fclose(fii);
    }
    }
    else if(sf[i].pet==3)
    {
     FILE *fuu;
    fuu=fopen("feed bunny.txt","r");
    if (fuu) {
    while ((c = getc(fuu)) != EOF)
        putchar(c);
    fclose(fuu);
    }
    }
    sf[i].hp=sf[i].hp+3;

}

void pet()
{
    if(sf[i].pet==1)
    {
      FILE *faaa;
    faaa=fopen("pet doggo.txt","r");
    if (faaa) {
    while ((a = getc(faaa)) != EOF)
        putchar(a);
    fclose(faaa);
    }
    }
    else if(sf[i].pet==2)
    {
       FILE *fiii;
    fiii=fopen("pet catto.txt","r");
    if (fiii) {
    while ((l = getc(fiii)) != EOF)
        putchar(l);
    fclose(fiii);
    }
    }
    else if(sf[i].pet==3)
    {
     FILE *fuuu;
    fuuu=fopen("pet bunny.txt","r");
    if (fuuu) {
    while ((y = getc(fuuu)) != EOF)
        putchar(y);
    fclose(fuuu);
    }
    }
    sf[i].hp=sf[i].hp+2;
}
poop()
{
         FILE *poopy;
    poopy=fopen("poop.txt","r");
    if (poopy) {
    while ((b = getc(poopy)) != EOF)
        putchar(b);
    fclose(poopy);
    }
    printf("\n                                               let's clean this (; o_o)\n\n");
    sf[i].hp=sf[i].hp+1;
}

void settings()
{
    int ee,s,ae,o;
     FILE *ht;
    yeet:;
    textcolor(GREEN);
    FILE *set;
    set=fopen("settings.txt","r");
    if (set) {
    while ((ee = getc(set)) != EOF)
        putchar(ee);
    fclose(set);
    }
    printf("\n                                                         ");
    scanf("%i",&s);
    switch(s)
    {
        case 1: if(hh==1)
        {
            system("COLOR F2");
            hh=2;
        }
        else
        {
            system("COLOR 02");
            hh=1;
        }
        break;
        case 2:
    system("cls");
    ht=fopen("how to.txt","r");
    if (ht) {
    while ((ae = getc(ht)) != EOF)
        putchar(ae);
    fclose(ht);
    }
    printf("\n                                                         ");
    scanf("%i",&o);
    if(o==1)
    {
    system("cls");
    FILE*mdu;
    mdu=fopen("manual_do_utilizador.txt","r");
    if (mdu) {
    while ((ae = getc(mdu)) != EOF)
        putchar(ae);
    fclose(mdu);
    }

    }
    else if(o==2)
    {

    }
    else
    {
       system("cls");
        printf("\n\n\n\n\n\n\n                                     insert a 1 or a 2 pls!\n\n\n\n\n\n");
        system("pause");
        goto yeet;
    }
    break;

    }
}

void usuck()
{
    switch(i)
    {
        case 0:sf[0].tru=0;
        lfa=fopen("load file 1.txt","w");
        fprintf(lfa,"%i",sf[0].tru);
        fclose(lfa);break;

        case 1:sf[1].tru=0;
        lfb=fopen("load file 2.txt","w");
        fprintf(lfb,"%i",sf[1].tru);
        fclose(lfb);break;

        case 2:sf[2].tru=0;
        lfc=fopen("load file 3.txt","w");
        fprintf(lfc,"%i",sf[2].tru);
        fclose(lfc);break;

    }
    here:;
    int ee,rs;
  FILE *dd;
    dd=fopen("dead.txt","r");
    if (dd) {
    while ((ee = getc(dd)) != EOF)
        putchar(ee);
    fclose(dd);
    }
    printf("\n                                                         ");
    scanf("%i",&rs);
    system("cls");
    if(rs==1)
    {
        main();
    }
    else if(rs==2)
    {
        exit(0);
    }
    else
    {
         system("cls");
        printf("\n\n\n\n\n\n\n                                     insert a 1 or a 2 c'mon you've already messed up enough\n\n\n\n\n\n");
        system("pause");
        system("cls");
        goto here;

    }
}

void mascot()
{
    int e,p,oo,t[1];
    sf[i].hp= sf[i].hp - 1;
        switch(i)
    {
    case 0: hp1=fopen("hp 1.txt","w");
            fprintf(hp1,"%i",sf[i].hp);
            fclose(hp1);break;
    case 1: hp2=fopen("hp 2.txt","w");
            fprintf(hp2,"%i",sf[i].hp);
            fclose(hp2);break;
    case 2: hp3=fopen("hp 3.txt","w");
            fprintf(hp3,"%i",sf[i].hp);
            fclose(hp3);break;
    }
    if(sf[i].pet==1)
    {
    FILE *fa;
    fa=fopen("party doggo.txt","r");
    if (fa) {
    while ((e = getc(fa)) != EOF)
        putchar(e);
    fclose(fa);
    }
    }
    else if(sf[i].pet==2)
    {
      FILE *fe;
    fe=fopen("party cat.txt","r");
    if (fe) {
    while ((p = getc(fe)) != EOF)
        putchar(p);
    fclose(fe);
    }
    }
    else if(sf[i].pet==3)
    {
        FILE *fi;
    fi=fopen("party bunny.txt","r");
    if (fi) {
    while ((t[0] = getc(fi)) != EOF)
        putchar(t[0]);
    fclose(fi);
    }
    }
    for(oo=1;oo<100;oo++)
    {
    system("COLOR 05");
    system("COLOR 09");
    system("COLOR 03");
    system("COLOR 02");
    system("COLOR 0A");
    system("COLOR 06");
    system("COLOR 0E");
    system("COLOR 0C");
    system("COLOR 04");
    system("COLOR 07");
    system("COLOR 0D");
    system("COLOR 0F");
    }
    exit(0);
}
