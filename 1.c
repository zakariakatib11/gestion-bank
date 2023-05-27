#include<stdio.h>
#include<conio.h>
#include<stdlib.h>





void main()
{

   int a;
   int grille[6][6],x,y,o=0,i,j,choix,joueur,pos,score1=0,score2=0,v=0,f=0,oj2=0;
   char p1[10],p2[10];


   menu:

   textcolor(13);gotoxy(60,4);cprintf("здддддддддддддддддддддд© ");
   textcolor(13);gotoxy(60,5);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(60,6);cprintf("Ё    BATAILLE NAVALE   Ё ");
   textcolor(13);gotoxy(60,7);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(60,8);cprintf("юдддддддддддддддддддддды ");



   textcolor(13);gotoxy(20,15);cprintf("здддддддддддддддддддддд© ");
   textcolor(13);gotoxy(20,16);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,17);cprintf("Ё 1- NOUVELLE PARTIE   Ё ");
   textcolor(13);gotoxy(20,18);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,19);cprintf("юдддддддддддддддддддддды ");

   textcolor(13);gotoxy(20,20);cprintf("здддддддддддддддддддддд© ");
   textcolor(13);gotoxy(20,21);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,22);cprintf("Ё      2- SCORE        Ё ");
   textcolor(13);gotoxy(20,23);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,24);cprintf("юдддддддддддддддддддддды ");


   textcolor(13);gotoxy(20,25);cprintf("здддддддддддддддддддддд© ");
   textcolor(13);gotoxy(20,26);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,27);cprintf("Ё      0- QUITTER      Ё ");
   textcolor(13);gotoxy(20,28);cprintf("Ё                      Ё ");
   textcolor(13);gotoxy(20,29);cprintf("юдддддддддддддддддддддды ");


    textcolor(13);gotoxy(60,32);cprintf("choisie votre choix : ");textcolor(13);cscanf("%d",&a);



    switch(a)
    {
//----------------------------------------------------------------------------------------------------
   case 1 :



system("cls");

//------------------------------------------------------------------------------------------------------------------------------
 	textcolor(2);gotoxy(20,3);cprintf(" зддддддддддддддд©            \n");
	textcolor(2);gotoxy(20,4);cprintf(" Ё               Ё             \n");
	textcolor(2);gotoxy(20,5);cprintf(" Ё   JOUEUR 1    Ё             \n");
    textcolor(2);gotoxy(20,6);cprintf(" Ё               Ё             \n");
	textcolor(2);gotoxy(20,7);cprintf(" юддддддддддддддды           \n\n");


 	textcolor(4);gotoxy(65,3);cprintf(" зддддддддддддддд©            \n");
	textcolor(4);gotoxy(65,4);cprintf(" Ё               Ё             \n");
	textcolor(4);gotoxy(65,5);cprintf(" Ё   JOUEUR 2    Ё             \n");
    textcolor(4);gotoxy(65,6);cprintf(" Ё               Ё             \n");
	textcolor(4);gotoxy(65,7);cprintf(" юддддддддддддддды           \n\n");

//-------------------------------------------------------------------------------------------------------------------------



fflush(stdin);
gotoxy(25,8);gets(p1);
fflush(stdin);
gotoxy(70,8);gets(p2);

//--------------------------------------------------------------
system("cls");
    textcolor(2);gotoxy(20,3);cprintf(" зддддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд©            \n");
	textcolor(2);gotoxy(20,4);cprintf(" Ё                                                             Ё             \n");
	textcolor(2);gotoxy(20,5);cprintf(" Ё              JOUEUR 1 - SCORE: %.3d                          Ё             \n",score1);
    textcolor(2);gotoxy(20,6);cprintf(" Ё                                                             Ё             \n");
	textcolor(2);gotoxy(20,7);cprintf(" юддддддддддддддддддддддддддддддддддддддддддддддддддддддддддддды           \n\n");


//--------------------------------------------------------------




textcolor(1);gotoxy(40,15);cprintf("здддбдддбдддбдддбдддбддд© ");
textcolor(1);gotoxy(40,16);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,17);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,18);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,19);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,20);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,21);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,22);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,23);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,24);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,25);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,26);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,27);cprintf("юдддадддадддадддадддаддды ");

//---------------------------------------------------------------------------------------------------------------------------

x=y=0;

joueur=1;

//--------------------  remplissage --------------------------------------------------------------------------------------------

for(i=0;i<=5;i++)
{
    for(j=0;j<=5;j++)


    {
        gotoxy(i*4+41,j*2+16);printf("X");

        grille[i][j]='X';


    }
}


//-------------------------------------------------------------------------------------------------------------------------------


while(oj2<=12 && v!=9)//-------------------------------
    {


        if(joueur==1)
        {
//---------------------------joueur 1--------------------------------------------------------------------------------------------





            gotoxy(x*4+41,y*2+16);
            pos=getch();




            switch(pos)
            {
                case 72 : if(y>0) y--;break;
                case 80 : if(y<5) y++;break;
                case 77 : if(x<5) x++;break;
                case 75 : if(x>0) x--;break;
                case 13 :    o++;
     //----------------------------- o==1 ----------------------------------------------------------
                if(o<=1){
                        do{

                 gotoxy(100,18);printf("здддддддддддддддддддддддддд©");
                 gotoxy(100,19);printf("Ё    NAVIRE A              Ё ");
                 gotoxy(100,20);printf("Ё    1-horizontal          Ё ");
                 gotoxy(100,21);printf("Ё    2-vertical            Ё ");
                 gotoxy(100,22);printf("Ё    3-diagonale           Ё ");
                 gotoxy(100,23);printf("Ё                          Ё ");
                 gotoxy(100,24);printf("юдддддддддддддддддддддддддды");
                 gotoxy(100,26);printf(">    donner votre choix :   ");
                 scanf("%d",&choix);


                        }while(choix<=0 || choix >3);
                 //---------------------------------------------------





                  if(choix==1){

                    textcolor(3);gotoxy(x*4+41,y*2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+4+41,y*2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+8+41,y*2+16);cprintf("%c",65);
                     grille[x][y]='A';
                     grille[x+1][y]='A';
                     grille[x+2][y]='A';

                    }


                  else if(choix==2){
                    textcolor(3);gotoxy(x*4+41,y*2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+41,y*2+2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+41,y*2+4+16);cprintf("%c",65);
                     grille[x][y]='A';
                     grille[x][y+1]='A';
                     grille[x][y+2]='A';


                  }

                  else if(choix==3){
                    textcolor(3);gotoxy(x*4+41,y*2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+4+41,y*2+2+16);cprintf("%c",65);
                    textcolor(3);gotoxy(x*4+8+41,y*2+4+16);cprintf("%c",65);
                     grille[x][y]='A';
                     grille[x+1][y+1]='A';
                     grille[x+2][y+2]='A';



                  }


                  //----------------------------------------------------





                }
    //---------------------------------fin o==1 --------------------------------------------------

    //---------------------------------- o==2 --------------------------------------------------------
                else if (o<=2){

                        do{

                 gotoxy(100,18);printf("здддддддддддддддддддддддддд©");
                 gotoxy(100,19);printf("Ё    NAVIRE B              Ё ");
                 gotoxy(100,20);printf("Ё    1-horizontal          Ё ");
                 gotoxy(100,21);printf("Ё    2-vertical            Ё ");
                 gotoxy(100,22);printf("Ё    3-diagonale           Ё ");
                 gotoxy(100,23);printf("Ё                          Ё ");
                 gotoxy(100,24);printf("юдддддддддддддддддддддддддды");
                 gotoxy(100,26);printf(">    donner votre choix :   ");

                 scanf("%d",&choix);


                 }while(choix<=0 || choix >3);

                 //---------------------------------------------------


                  if(choix==1){

                        //--------------------- 1 -----------

                    if(grille[x][y]=='A' || grille[x+1][y]=='A' || grille[x+2][y]=='A'  ){

                   o--;

                    break;

                   }

                    else{
                     textcolor(3);gotoxy(x*4+41,y*2+16);cprintf("B");
                    textcolor(3);gotoxy(x*4+4+41,y*2+16);cprintf("B");
                    textcolor(3);gotoxy(x*4+8+41,y*2+16);cprintf("B");


                    grille[x][y]='B';
                     grille[x+1][y]='B';
                     grille[x+2][y]='B';

                    }
                    //-------------------------- 1 -------------------

                  }

                  else if(choix==2){
                         //---------------------- 2 -----------------------

                   if(grille[x][y]=='A' || grille[x][y+1]=='A' || grille[x][y+2]=='A'){

                    o--;
                    break;


                   }

                   else{

                   textcolor(3); gotoxy(x*4+41,y*2+16);cprintf("B");
                   textcolor(3); gotoxy(x*4+41,y*2+2+16);cprintf("B");
                   textcolor(3); gotoxy(x*4+41,y*2+4+16);cprintf("B");


                   grille[x][y]='B';
                     grille[x][y+1]='B';
                     grille[x][y+2]='B';

                   }
                   //---------------------- 2 -----------------------






                  }

                  else if(choix==3){
                         //---------------------- 3 -----------------------

                    if(grille[x][y]=='A' || grille[x+1][y+1]=='A' || grille[x+2][y+2]=='A'){

                    o--;
                    break;

                   }

                   else{
                   textcolor(3); gotoxy(x*4+41,y*2+16);cprintf("B");
                   textcolor(3); gotoxy(x*4+4+41,y*2+2+16);cprintf("B");
                   textcolor(3); gotoxy(x*4+8+41,y*2+4+16);cprintf("B");
                    grille[x][y]='B';
                     grille[x+1][y+1]='B';
                     grille[x+2][y+2]='B';


                   }

                   //---------------------- 3 -----------------------

                  }


                }
                //----------------- fin o == 2 ----------------------------------------------------------

                //-------------------- o == 3 ---------------------------------------------------------
                else if (o<=3){

                        do{

                 gotoxy(100,18);printf("здддддддддддддддддддддддддд©");
                 gotoxy(100,19);printf("Ё    NAVIRE C              Ё ");
                 gotoxy(100,20);printf("Ё    1-horizontal          Ё ");
                 gotoxy(100,21);printf("Ё    2-vertical            Ё ");
                 gotoxy(100,22);printf("Ё    3-diagonale           Ё ");
                 gotoxy(100,23);printf("Ё                          Ё ");
                 gotoxy(100,24);printf("юдддддддддддддддддддддддддды");
                 gotoxy(100,26);printf(">    donner votre choix :   ");
                 scanf("%d",&choix);

                 }while(choix<=0 || choix >3);

                 //---------------------------------------------------

                  if(choix==1){

                          if(grille[x][y]=='B' || grille[x+1][y]=='B' || grille[x+2][y]=='B' || grille[x][y]=='A' || grille[x+1][y]=='A' || grille[x+2][y]=='A'  ){

                   o--;

                    break;

                   }

                    else{
                    textcolor(3);gotoxy(x*4+41,y*2+16);cprintf("%c",67);
                    textcolor(3);gotoxy(x*4+4+41,y*2+16);cprintf("%c",67);
                    textcolor(3);gotoxy(x*4+8+41,y*2+16);cprintf("%c",67);

                    grille[x][y]='C';
                     grille[x+1][y]='C';
                     grille[x+2][y]='C';


                    }

                  }

                  else if(choix==2){

                   if(grille[x][y]=='B' || grille[x][y+1]=='B' || grille[x][y+2]=='B' || grille[x][y]=='A' || grille[x][y+1]=='A' || grille[x][y+2]=='A'   ){

                    o--;
                    break;


                   }

                   else{
                   textcolor(3); gotoxy(x*4+41,y*2+16);cprintf("%c",67);
                   textcolor(3); gotoxy(x*4+41,y*2+2+16);cprintf("%c",67);
                   textcolor(3); gotoxy(x*4+41,y*2+4+16);cprintf("%c",67);

                    grille[x][y]='C';
                     grille[x][y+1]='C';
                     grille[x][y+2]='C';


                   }


                  }

                  else if(choix==3){


                if(grille[x][y]=='B' || grille[x+1][y+1]=='B' || grille[x+2][y+2]=='B' || grille[x][y]=='A' || grille[x+1][y+1]=='A' || grille[x+2][y+2]=='A'    ){

                    o--;
                    break;

                   }

                   else{
                   textcolor(3); gotoxy(x*4+41,y*2+16);cprintf("%c",67);
                   textcolor(3); gotoxy(x*4+4+41,y*2+2+16);cprintf("%c",67);
                   textcolor(3); gotoxy(x*4+8+41,y*2+4+16);cprintf("%c",67);

                    grille[x][y]='C';
                     grille[x+1][y+1]='C';
                     grille[x+2][y+2]='C';

                   }

                  } // fin choix

                }
                //----------fin o==3 ---------------------------------------------------------


                 //----------- condition  j2 -----------------------------------------


    else{












//-------------------------------------------------------------------------------------------------------------------------





if(oj2<1){



textcolor(1);gotoxy(40,15);cprintf("здддбдддбдддбдддбдддбддд© ");
textcolor(1);gotoxy(40,16);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,17);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,18);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,19);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,20);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,21);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,22);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,23);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,24);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,25);cprintf("цдддедддедддедддедддеддд╢ ");
textcolor(1);gotoxy(40,26);cprintf("Ё   Ё   Ё   Ё   Ё   Ё   Ё ");
textcolor(1);gotoxy(40,27);cprintf("юдддадддадддадддадддаддды ");

}

            //-----------------------------
            gotoxy(x*4+41,y*2+16);
            pos=getch();



            switch(pos)
            {
                case 72 : if(y>0) y--;break;
                case 80 : if(y<5) y++;break;
                case 77 : if(x<5) x++;break;
                case 75 : if(x>0) x--;break;
                case 13 :
                 //---------------------- le nombre d'essaye pour j2------------------



                    oj2++;



                   printf("%c",grille[x][y]) ;

//----------------------------------------------------------------------------------------------------

                    if(grille[x][y]!='A' && grille[x][y]!='B' && grille[x][y]!='C' ){

                      ++f;
                      score1=score1+20;
                    }
                    else{
                         ++v;
                    score2=score2+20;
                    if(grille[x][y]!='A' && grille[x][y]!='B' && grille[x][y]!='C')
                    score2=score2-20;

                    }
    textcolor(4);gotoxy(100,5); cprintf("case trouver %d / 9 ",v);
    textcolor(4);gotoxy(20,3);  cprintf(" зддддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд©            \n");
	textcolor(4);gotoxy(20,4);  cprintf(" Ё                                                             Ё             \n");
	textcolor(4);gotoxy(20,5);  cprintf(" Ё              JOUEUR 2 - SCORE: %.3d                          Ё             \n",score2);
    textcolor(4);gotoxy(20,6);  cprintf(" Ё                                                             Ё             \n");
	textcolor(4);gotoxy(20,7);  cprintf(" юддддддддддддддддддддддддддддддддддддддддддддддддддддддддддддды           \n\n");









//----------------------------------------------------------------------------------------------------


                  if(oj2>=12 || v==9){

                        if(v==9){
                            system("cls");

                     printf("\n\n\n\n\n\n\n   ");

    textcolor(4);gotoxy(20,3);cprintf(" здддддддддддддддддддддддддддддддддддддддддддд©            \n");
	textcolor(4);gotoxy(20,4);cprintf(" Ё                                            Ё              \n");
	textcolor(4);gotoxy(20,5);cprintf(" Ё   JOUEUR 2 GANGER LE MATCH - SCORE: %.3d    Ё             \n",score2);
    textcolor(4);gotoxy(20,6);cprintf(" Ё                                            Ё             \n");
	textcolor(4);gotoxy(20,7);cprintf(" юдддддддддддддддддддддддддддддддддддддддддддды           \n\n");


                        break;

                        }
                       else if(v<9){
                    system("cls");
                     printf("\n\n\n\n\n\n\n   ");

    textcolor(2);gotoxy(20,3);cprintf(" здддддддддддддддддддддддддддддддддддддддддддд©            \n");
	textcolor(2);gotoxy(20,4);cprintf(" Ё                                            Ё              \n");
	textcolor(2);gotoxy(20,5);cprintf(" Ё   JOUEUR 1 GANGER LE MATCH - SCORE: %.3d    Ё             \n",score1);
    textcolor(2);gotoxy(20,6);cprintf(" Ё                                            Ё             \n");
	textcolor(2);gotoxy(20,7);cprintf(" юдддддддддддддддддддддддддддддддддддддддддддды           \n\n");
                        break;
                       }






                  }//affichage le gagner




                 // fin case 13 ---------------


            //-----------------------------


            }//fin switch case

                } //fin ELSE ------------------


                //------------------------------------------------------





    //------------- fin case 13 -----------------------------------------------------------

            }


          //---------------------------------------

          //--------------------------------------------

//--------------------fin joueur 1-------------------------------------------------------------------------------------------------



        }
    } //fin while -

          system("cls");
          goto menu;






//-----------------------------------------------------------------------------------------------------
   case 2:
       system("cls");








//----------------------------------------------------------------------------------------------------
   case 0:  break;


}//fin switch

}
