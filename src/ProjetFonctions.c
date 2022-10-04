#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>
#include <SDL_image.h>
#include <time.h>
#include <SDL_ttf.h>
#include "functions.h"

typedef struct Case
{
    int a , b , c ,d ;
}Case;

void designe_button_pause(SDL_Renderer *render,int X , int Y)
{
    IMG_Init(IMG_INIT_PNG);

    SDL_Surface *ButtonPause= IMG_Load(".\\images\\pausebutton.png");
    SDL_Texture *Tbutton =SDL_CreateTextureFromSurface(render,ButtonPause);
    int W=ButtonPause->w ;
    int H=ButtonPause->h;

    SDL_FreeSurface(ButtonPause);

    SDL_Rect rect ;

    rect.x=X;
    rect.y=Y;
    rect.h=H/6;
    rect.w=W/6;



    SDL_RenderCopy(render,Tbutton,NULL,&rect);
    //SDL_RenderPresent(render);

    SDL_DestroyTexture(Tbutton);
    IMG_Quit();
}

void TempsAff_Seconde(int Seconde , SDL_Renderer *render,SDL_Color color,int PosX,int PosY)
{
    char S[4];
    sprintf(S,"%d",Seconde);

    TTF_Init();

    TTF_Font *font=TTF_OpenFont(".\\Fonts\\arial.ttf",40);

    SDL_Rect Textrect;

    Textrect.x=PosX;
    Textrect.y=PosY;

    SDL_Surface *temp=TTF_RenderText_Solid(font,S,color);

    Textrect.h=temp->h;//temp->h;
    Textrect.w=temp->w;//20;

    SDL_Texture *TTexture=SDL_CreateTextureFromSurface(render,temp);
    SDL_FreeSurface(temp);

    SDL_Texture *target=SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,50,50);

    SDL_SetRenderTarget(render,target);



    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);



    SDL_RenderCopy(render,TTexture,NULL,NULL);
    SDL_SetRenderTarget(render,NULL);

    SDL_RenderCopy(render,target,NULL,&Textrect);

//SDL_RenderPresent(render);

    TTF_CloseFont(font);
    SDL_DestroyTexture(target);
    SDL_DestroyTexture(TTexture);
    TTF_Quit();

}

void TempsAff_Ms(int ms , SDL_Renderer *render,SDL_Color color,int PosX,int PosY)
{
    char S[4];
    sprintf(S,"%d",ms);

    TTF_Init();

    TTF_Font *font=TTF_OpenFont(".\\Fonts\\arial.ttf",40);

    SDL_Rect Textrect;

    Textrect.x=PosX;
    Textrect.y=PosY;

    SDL_Surface *temp=TTF_RenderText_Solid(font,S,color);

    Textrect.h=temp->h;
    Textrect.w=temp->w;//20;

    SDL_Texture *TTexture=SDL_CreateTextureFromSurface(render,temp);
    SDL_FreeSurface(temp);

    SDL_Texture *target=SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,50,50);
    SDL_SetRenderTarget(render,target);



    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);


    SDL_RenderCopy(render,TTexture,NULL,NULL);
    SDL_SetRenderTarget(render,NULL);

    SDL_RenderCopy(render,target,NULL,&Textrect);
//SDL_RenderPresent(render);

    TTF_CloseFont(font);
    SDL_DestroyTexture(target);
    SDL_DestroyTexture(TTexture);
    TTF_Quit();


}

void Score_Affiche(int Score , SDL_Renderer *render,SDL_Color color,int PosX,int PosY)
{
    char S[4];
    sprintf(S,"%d",Score);

    TTF_Init();

    TTF_Font *font=TTF_OpenFont(".\\Fonts\\Byte.ttf",25);

    SDL_Rect Textrect;

    Textrect.x=PosX;
    Textrect.y=PosY;

    SDL_Surface *temp=TTF_RenderText_Solid(font,S,color);

    Textrect.h=temp->h-5;//temp->h;
    Textrect.w=temp->w;//20;

    SDL_Texture *TTexture=SDL_CreateTextureFromSurface(render,temp);
    SDL_FreeSurface(temp);

    SDL_Texture *target=SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,50,50);

    SDL_SetRenderTarget(render,target);


    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);


    SDL_RenderCopy(render,TTexture,NULL,NULL);
    SDL_SetRenderTarget(render,NULL);

    SDL_RenderCopy(render,target,NULL,&Textrect);

    SDL_RenderPresent(render);

    TTF_CloseFont(font);
    SDL_DestroyTexture(target);
    SDL_DestroyTexture(TTexture);
    TTF_Quit();
}
void Best_Score_Affiche_WINNER(int BestScore, SDL_Renderer *render,SDL_Color color,int PosX,int PosY)
{


    char S[4];
    sprintf(S,"%d",BestScore);



    TTF_Init();

    TTF_Font *font=TTF_OpenFont(".\\Fonts\\Byte.ttf",16);

    SDL_Rect Textrect;

    Textrect.x=PosX;
    Textrect.y=PosY;

    SDL_Surface *temp=TTF_RenderText_Solid(font,S,color);

    Textrect.h=temp->h-5;//temp->h;
    Textrect.w=temp->w;//20;

    SDL_Texture *TTexture=SDL_CreateTextureFromSurface(render,temp);
    SDL_FreeSurface(temp);

    SDL_Texture *target=SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,50,50);

    SDL_SetRenderTarget(render,target);


    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);


    SDL_RenderCopy(render,TTexture,NULL,NULL);
    SDL_SetRenderTarget(render,NULL);

    SDL_RenderCopy(render,target,NULL,&Textrect);

    SDL_RenderPresent(render);

    TTF_CloseFont(font);
    SDL_DestroyTexture(target);
    SDL_DestroyTexture(TTexture);
    TTF_Quit();

}
void Score_Affiche_WINNER(int Score , SDL_Renderer *render,SDL_Color color,int PosX,int PosY)
{


    char S[4];
    sprintf(S,"%d",Score);



    TTF_Init();

    TTF_Font *font=TTF_OpenFont(".\\Fonts\\Byte.ttf",14);

    SDL_Rect Textrect;

    Textrect.x=PosX;
    Textrect.y=PosY;

    SDL_Surface *temp=TTF_RenderText_Solid(font,S,color);

    Textrect.h=temp->h-5;//temp->h;
    Textrect.w=temp->w;//20;

    SDL_Texture *TTexture=SDL_CreateTextureFromSurface(render,temp);
    SDL_FreeSurface(temp);

    SDL_Texture *target=SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,50,50);

    SDL_SetRenderTarget(render,target);


    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);


    SDL_RenderCopy(render,TTexture,NULL,NULL);
    SDL_SetRenderTarget(render,NULL);

    SDL_RenderCopy(render,target,NULL,&Textrect);

    SDL_RenderPresent(render);

    TTF_CloseFont(font);
    SDL_DestroyTexture(target);
    SDL_DestroyTexture(TTexture);
    TTF_Quit();

}
void timer(int tempsActuelle , int *tempsPrecedent , int *seconds , Uint32 *reset_ticks ) /// on aura pas besion du *ms
{

        int delta=tempsActuelle-*tempsPrecedent;



       if(delta>= 1000 )
     {
         *seconds=*seconds+1;
         *tempsPrecedent=tempsActuelle;///reference
         *reset_ticks=SDL_GetTicks(); /// pour re intiamiser les ms en 0 ms a chaque foid qu on depasse 1000

     }
}
int timer_machine(int tempsActuelle , int *tempsPrecedent , Uint32 *reset_ticks )
{

    int delta=tempsActuelle-*tempsPrecedent;
    if(delta>= 1000 )
    {
        *tempsPrecedent=tempsActuelle;///reference
        *reset_ticks=SDL_GetTicks(); /// pour re intiamiser les ms en 0 ms a chaque foid qu on depasse 1000
    }

}

void trasserlineDG_Machine(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1])
{
    SDL_SetRenderDrawColor(render,133,14,98,255) ;
    SDL_RenderDrawLine(render,x2,y1,x1,y2);
    SDL_RenderDrawLine(render,x2,y1+1,x1,y2+1);
    SDL_RenderDrawLine(render,x2,y1+2,x1,y2+2);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
    SDL_RenderPresent(render);


}
void trasserlineGD_Machine(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1])
{

    SDL_SetRenderDrawColor(render,0,14,118,255);
    SDL_RenderDrawLine(render,x1,y1,x2,y2);
    SDL_RenderDrawLine(render,x1,y1+1,x2,y2+1);
    SDL_RenderDrawLine(render,x1,y1+2,x2,y2+2);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
    SDL_RenderPresent(render);
}

void trasserlineDG(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1])
{
    SDL_SetRenderDrawColor(render,255,255,255,255) ;
    SDL_RenderDrawLine(render,x1,y1,x2,y2);
    SDL_RenderDrawLine(render,x1,y1+1,x2,y2+1);
    SDL_RenderDrawLine(render,x1,y1+2,x2,y2+2);


    SDL_SetRenderDrawColor(render,0,255,255,255) ;
    SDL_RenderDrawLine(render,x2,y1,x1,y2);
    SDL_RenderDrawLine(render,x2,y1+1,x1,y2+1);
    SDL_RenderDrawLine(render,x2,y1+2,x1,y2+2);


    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);

}

void trasserlineGD(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1])
{

    SDL_SetRenderDrawColor(render,0,255,255,255);
    SDL_RenderDrawLine(render,x1,y1,x2,y2);
    SDL_RenderDrawLine(render,x1,y1+1,x2,y2+1);
    SDL_RenderDrawLine(render,x1,y1+2,x2,y2+2);


    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);


}
void supprimeDG(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1])
{
    SDL_SetRenderDrawColor(render,255,255,255,255) ;
    SDL_RenderDrawLine(render,x2,y1,x1,y2);
    SDL_RenderDrawLine(render,x2,y1+1,x1,y2+1);
    SDL_RenderDrawLine(render,x2,y1+2,x1,y2+2);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
}

void designe_Timer (SDL_Renderer *render,SDL_Window *window)
{

    SDL_Surface *windowSurface=SDL_GetWindowSurface(window);

    SDL_Rect imagerect;
    imagerect.x=windowSurface->w/2 - imagerect.w/2;
    imagerect.y=0;


    IMG_Init(IMG_INIT_PNG);

    SDL_Surface *image=IMG_Load(".\\images\\timericon.png");
    SDL_Texture *Timage=SDL_CreateTextureFromSurface(render,image);
    imagerect.h=image->h;
    imagerect.w=image->w;


    SDL_RenderCopy(render,Timage,NULL,&imagerect);

    SDL_RenderPresent(render);

    IMG_Quit();

}

int verifie( int L , int V1[L][L] , int V2[L][L] )
{
    int egaux = 1 ;
    int i,j ;
    for(i=0;i<L;i++)
    {
        for (j=0;j<L;j++)
        {
            if(V1[i][j]!= V2[i][j])
            {
                egaux=0;
            }
        }
    }

   return(egaux);

}

void matrice_egaux(int L,int v[L][L],int matriceSource[L][L])
{

    int i,j;

    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
        {
            v[i][j]=matriceSource[i][j];
        }
    }
}


void RemplirT_machine(int N,int t_machine[N][N],int m[N+1][N+1])
{
    int i,j;

    int Mat_inter[N+1][N+1];
    matrice_egaux(N+1,Mat_inter,m);//Mat_inter<=m;

    ///maintenant , on va contruire la Mat_inter ==> notre but == ( Mat_inter =0 partout ) /*colone par colone*/


    for(j=0;j<N;j++) // j=0 --> j=5
    {
        for(i=0;i<N;i++) // i=0 ---> i=5
        {
            if( (Mat_inter[i][j] - 1)==0  )
            {
                Mat_inter[i][j]--;
                Mat_inter[i+1][j+1]--;

                t_machine[i][j]=1;
            }else

            {
                Mat_inter[i+1][j]--;
                Mat_inter[i][j+1]--;

                t_machine[i][j]=2;

            }
        }
    }
    /* vous les activer pour bien comprendre le remplissage du t_machine

    aff_Mat(N,t_machine);
    aff_Mat(N+1,Mat_inter);*/
}

void TracerLigne__TmachineIJ(int I,int J,SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut,int N,int T_machine[N][N],int m[N+1][N+1])
{
    int x1=Xdebut+J*(surface->w/6);
    int y1=Ydebut+I*(surface->h/6);
    int x2=x1+(surface->w/6);
    int y2=y1+(surface->h/6);

    switch (T_machine[I][J])
    {
        case 1:
            trasserlineGD_Machine(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);
            break;

        case 2 :
            trasserlineDG_Machine(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);
            break;
    }
}

void PARTIE1(int N, int m[N+1][N+1],SDL_Renderer *render , SDL_Surface *surface,int Xdebut , int Ydebut,SDL_Window *window)
{
    /// AFFICHAGE INITIAL //

    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);




    /*********************************************************/
    /*--------declaration + initialisation des deux Matrices
        ----qu on va les utilises plus tard--------*/


    //mat de verification ** initialisee a 0 partout
    int ver[N+1][N+1];
    init_mat(N+1,ver,0);


    // t la mat associee au designe ** initialisee a 0 partout
    int t[N][N];
    init_mat(N,t,0);
    /******************************************************************/


    /*Declaration des variables
        vont nous servir a dessiner les
    digaoneaux apres  */

    int divW,divH;
    int x1,x2,y1,y2;

    int Xnbr;
    /**********************************/




    /* GESTION DU TIMER
    *****************************************************/
    int  tempsPrecedent=0;
    int seconds=0;
    Uint32 ms,reset_ticks =SDL_GetTicks();

    SDL_Color Purple={227,33,182,255};//COULEUR POUR AFFICHER LE TIMER PARTIE(1)



    SDL_Event event ;
    bool quit=false;


    while(!quit)//tanque quit==false
    {

        timer(SDL_GetTicks(),&tempsPrecedent,&seconds,&reset_ticks); // Gestion du timer
        ms=SDL_GetTicks()-reset_ticks; // Gestion du timer

        /* Gestion de temps ALGORITHMIQUE fin ------------------------------------------*/

       while(SDL_PollEvent(&event)>0)
       {

           if(event.key.keysym.sym==SDLK_ESCAPE) // cliquer ECHAP
                quit=true;

           switch(event.type)
            {
                case SDL_QUIT :
                    quit=true;
                    break;

                case SDL_MOUSEBUTTONUP :
                    switch(event.button.button)
                    {
                        case SDL_BUTTON_MIDDLE: // on peut tricher si on ..;)
                            matrice_egaux(N+1,ver,m);
                            break;




                        case SDL_BUTTON_LEFT :

                             /** Pause Button **/

                             if( (43 <event.button.x && event.button.x<129) && (24<event.button.y && event.button.y<109)  )

                              pause(render,seconds,&quit,N,window,surface,m,t,Xdebut,Ydebut);


                            /********PauseButton-Ends******/




                            /**Attention :: l utilisateur peut cliquer de hors de la matrice !!

                             pour que x ,y soient dans la surface  DivW , DivH<- valeur negative**/


                            if( ( event.button.x < Xdebut || event.button.x > Xdebut+surface->w )
                               || (   event.button.y < Ydebut || event.button.y > Ydebut+surface->h ))
                            {
                                //printf("Votre Click est OUT\n ");
                                divW=-5;divH=-5;
                            }  // et on va faire de tell facon qu on  peut dessiner ssi divW>=0 ou divH>=0  !: probleme rigle : !

                            else
                            {
                                    divW=(event.button.x-Xdebut)/(surface->w/6);// -Xdebut   // dans quelle colone on est !
                                    divH=(event.button.y-Ydebut)/(surface->h/6); // - Ydebut  // dans quelle ligne on est!
                                    /// la combinaison  des deux donne l'info exact sur la case
                                    /// exemple : Si on etait  sur la case [ 0 ][ 2 ] Alors  divH serat 0 et divW = 2 ;
                                    t[divH][divW]++;


                            }




                            x1=Xdebut+divW*(surface->w/6); // + X debut
                            y1=Ydebut+divH*(surface->h/6);  // + Y debut

                            x2=x1+(surface->w/6);
                            y2=y1+(surface->h/6);



                            Xnbr=t[divH][divW]%3  ;




                             switch(Xnbr)
                             {


                                  case 0:
                                    if(divH>=0)
                                    {
                                        ver[divH+1][divW]--;
                                        ver[divH][divW+1]--;
                                    }
                                    //aff_Mat(N+1,ver);
                                   // vide();

                                    supprimeDG(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;



                                 case 1 :
                                     if(divH>=0)
                                    {
                                        ver[divH][divW]++;
                                        ver[divH+1][divW+1]++;
                                    }

                                    //aff_Mat(N+1,ver);
                                   // vide();

                                    trasserlineGD(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;

                                case 2 :
                                    if(divH>=0)
                                    {
                                        ver[divH][divW]--;
                                        ver[divH+1][divW+1]--;
                                        ver[divH+1][divW]++;
                                        ver[divH][divW+1]++;
                                    }

                                    //aff_Mat(N+1,ver);
                                    //vide();


                                    trasserlineDG(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;


                                }
                             break;// SDL button left
                         }
                     break;// SDL button up
                 }
             }//Fin du boucle while des events


            /** Debut d affichage du timer  **/
            designe_Timer(render,window);
            TempsAff_Ms(ms,render,Purple,414,90);
            TempsAff_Seconde(seconds,render,Purple,314,90);
            /**  FIN d affichage du timer*/


            SDL_Delay(50); /// tres tres tres tres tres tres tres tres ...... improtante pour le consomaation de la memoire et le cpu !!!!!!!
            SDL_RenderPresent(render);


           /**test fin du jeux */ //PARTIE 1
           TestFinJeux(1,seconds,N,ver,m,t,&quit,surface,render,render,window,window,Xdebut,Ydebut);

    }

    // why not making one whole image ? + zozor
    SDL_SetRenderDrawColor(render,83,124,181,255);
    SDL_RenderClear(render);
    SDL_RenderPresent(render);

}
void TestFinJeux(int Partie ,int score,int N,int ver[N+1][N+1],int m[N+1][N+1],int t[N][N],bool *quit,SDL_Surface *surface,SDL_Renderer *render,SDL_Renderer *render2,SDL_Window *window,SDL_Window *window2,int Xdebut,int Ydebut)
{

    //partie = 1 ou 3 ;

    // limite du temps == 600 seconds

    if(score>599)//599 seconds
    {

       GameOver(Partie,score,&(*quit),render,render2,N,m,t,surface,Xdebut,Ydebut,window,window2);
    }


     if(verifie(N+1,ver,m)==1 )
        {

            Congrats();// printf au consol "Winner"
          WINNER(Partie,score,&(*quit),render,render2,N,m,t,surface,Xdebut,Ydebut,window,window2);

        }

}

int nbrCasesNonremplites(int taille, int mat[taille][taille])
{
    int i ,j, casesNonRemplites=taille*taille;

    for(i=0;i<taille;i++)
    {
        for(j=0;j<taille;j++)
        {
           if(mat[i][j]==-1)
            casesNonRemplites--;
        }
    }
    return(casesNonRemplites);
}

void PARTIE2(SDL_Renderer *render,SDL_Surface *surface,SDL_Window *window,int Xdebut , int Ydebut,int N , int m[N+1][N+1])
{
    /*affichage initial de la Matrice */
    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);

    //SDL_RenderPresent(render);

    /* **********************************************/


    SDL_Event event;
    bool quit=false;
    int testFinJeuM;

    int defficulte = 1; /// la machine va jouer chaque 1 seconds

    /**--------------------------------------------------------------*/
        /*Declaration et remplissage des
            deux Matrices qu on va les utiliser
                dans la /* 2eme partie */


    //int Ver_Marchine[N+1][N+1];
    //init_mat(N+1,Ver_Marchine,0);

    int t_machine[N][N];
    int Mat_verCasesRemplites[N][N];

    RemplirT_machine(N,t_machine,m);
    init_mat(N,Mat_verCasesRemplites,0);



    /**-----------------------------------*/

    /**-- GESTION DU TIMER--*/
    int TempsPrecedent=0;
    int seconds=0;
    Uint32 ms,Reset_Ticks=SDL_GetTicks();

    int Reset_Seconds=seconds;
    int deltaSeconds;

    SDL_Color black={0,0,0,255}; /// couleur pour afficher le Timer


    while (!quit) // tantque quit=false
        {

            timer(SDL_GetTicks(),&TempsPrecedent,&seconds,&Reset_Ticks);
            ms=SDL_GetTicks()-Reset_Ticks;


        /**--------------------------------------------------------------------------------------*/

            /* GESTION DES EVENEMENTS POUR LA PARTIE2 */

            while(SDL_PollEvent(&event)>0)
                {
                    if(event.key.keysym.sym==SDLK_ESCAPE) // SORTIR DU JEUX
                    quit=true;

                    if(event.type==SDL_QUIT) // SORTIR DU JEUX
                        quit=true;


                    if(event.type==SDL_MOUSEBUTTONUP) // Cliquer Pause
                    {
                        if( (43 <event.button.x && event.button.x<129) && (24<event.button.y && event.button.y<109)  )
                                pausePARTIE2(render,window,seconds,&quit,N,surface,Mat_verCasesRemplites,t_machine,m,Xdebut,Ydebut);

                    }




                }// Fin de boucle des evenements

                deltaSeconds=seconds-Reset_Seconds;
                if(deltaSeconds>=defficulte) /// le programme va rentrer dans le ' IF ' ssi l interval -diifuclte- passe !
                    //NB: defficulte est l intrval des secondes initialise au debut
                    // cad : la machine va jouer a chaque 2s car 'difficulte=2'
                {

                fonction_Machine_dessine(N,render,surface,Xdebut,Ydebut,t_machine,m,Mat_verCasesRemplites);
                // cette fonction va dessiner les diagoneaux  a partir des valeurs des cases du t_machine[N][N]//
                    // et elle va remplir les cases du Mat_verCasesRemplites ... --on va utilser cette derniere pour
                     // teter la fin du jeux-- //


                if(nbrCasesNonremplites(N,Mat_verCasesRemplites)<4)
                    dessiner_le_reste(N,Mat_verCasesRemplites,render,surface,Xdebut,Ydebut,t_machine,m);

                Reset_Seconds=seconds; // reinitialiser Reset_Seconds " reintialiser le repere des secondes " //

                /// Pour mieux comprender//
                 //vous pouvez activer le bout du code ci-dessus qui va afficher
                    //les deux matrice qu on a utiliser dans cette partie(2)
                    /*
                printf("----t_machine ---");
                aff_Mat(N,t_machine);
                printf("----Mat_verCasesRemplites----");
                aff_Mat(N,Mat_verCasesRemplites);
                    */


                }// La fin du IF
            SDL_Delay(20);

              /* AFFICHER LE TIMER */
            TempsAff_Ms(ms,render,black,414,90);
            TempsAff_Seconde(seconds,render,black,314,90);
            designe_Timer(render,window);

                /* DEBUT TEST FIN DE JEU*/
            testFinJeuM =  TestFinJeuM(N,Mat_verCasesRemplites);

            if( testFinJeuM == 1)
            {
                WINNER(2,seconds,&quit,render,render,N,m,Mat_verCasesRemplites,surface,Xdebut,Ydebut,window,window);

            }
            /*---- FIN DE TEST FIN DE JEU ----*/


            //SDL_RenderPresent(render);

        }//End of while


        //why not ?
    SDL_SetRenderDrawColor(render,83,124,181,255);
    SDL_RenderClear(render);
    SDL_RenderPresent(render);


}


void fonction_Machine_dessine(int N,SDL_Renderer *render , SDL_Surface *surface , int Xdebut , int Ydebut,int t_machine[N][N],int m[N+1][N+1],int Mat_verCasesRemplites[N][N])
{
    int I;

    int J;

    I=rand()%6;
    J=rand()%6;


    if( (MatEgal_Chiffre(N,Mat_verCasesRemplites,-1))!=1 )
        /// on veut tranformer toutes les cases en -1 \ case remplit == -1
        {
             Mat_verCasesRemplites[I][J]=-1;
            TracerLigne__TmachineIJ(I,J,render,surface,Xdebut,Ydebut,N,t_machine,m);
        }
}

void dessiner_le_reste(int N,int Mat_verCasesRemplites[N][N],SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut,int t_machine[N][N],int m[N+1][N+1])
{
   int i ,j ;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Mat_verCasesRemplites[i][j]!=-1)
            {
                TracerLigne__TmachineIJ(i,j,render,surface,Xdebut,Ydebut,N,t_machine,m);
                Mat_verCasesRemplites[i][j]=-1;/// pour verifier la condition de if la prochaine fois
            }

        }
    }
}

int MatEgal_Chiffre(int N,int MatVercases[N][N],int chiffre )
{
    int i,j,egal=1;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(MatVercases[i][j]!=chiffre)
            {
                egal=0;
            }
        }
    }
    return(egal); // retourne 1 si toutes les cases de la matrcies sont egaux a le chiffre en entree
}

void Mat7x7(int Nz,int M[Nz+1][Nz+1] )
{
    /*********************/

    int  i ,j ;
    int L;

    L=Nz+1;
    Case z[Nz][Nz] ;

    /*******************/


    for(i=0 ; i<Nz ; i++)
    {

        for(j=0;j<Nz;j++)
            {
                z[i][j].a= random() ;
                z[i][j].b= abs(z[i][j].a  -1) ;
                z[i][j].c= z[i][j].b ;
                z[i][j].d =z[i][j].a ;
                //printf("%d %d %d %d         ",z[i][j].a ,z[i][j].b ,z[i][j].c ,z[i][j].d );
            }
        //printf("\n");

    }/******************************/


    M[0][0]=z[0][0].a ;
    M[0][L-1]=z[0][L-2].b ;
    M[L-1][0]=z[L-2][0].c ;
    M[L-1][L-1]=z[L-2][L-2].d ;

    /*******************************/


    i=0 ; /// b+a

    for(j=1;j<L-1;j++)
        M[i][j]=z[i][j-1].b + z[i][j].a;

    i=L-1 ; /// d+c

    for(j=1;j<L-1;j++)
        M[i][j]=z[L-2][j-1].d + z[L-2][j].c;


    /*******************************************/

    j=0; /// c+a

    for(i=1;i<L-1;i++)
        M[i][j]=z[i-1][j].c + z[i][j].a;


    j=L-1 ; /// d+b

    for(i=1;i<L-1;i++)
        M[i][j]=z[i-1][L-2].d + z[i][L-2].b;

    /********************************************/

    for(i=1;i<L-1;i++)
    {
        for(j=1;j<L-1;j++)
        {
            M[i][j]=z[i-1][j-1].d + z[i][j-1].b
            + z[i-1][j].c + z[i][j].a;
        }
    }
    /**************************************/

    //vide();
    //aff_Mat(L,M);

}

void aff_Mat(int taille ,int v[taille][taille])
{
    int i ,j ;

    printf("\n\n");

    for(i=0;i<taille;i++)
        {
            for(j=0;j<taille;j++)
            {
                printf("%d  ",v[i][j]);
            }
            printf("\n");
        }
}
void affiche_Mat_designe1(SDL_Renderer *render , SDL_Surface *surfaceMat,  int Xdebut, int Ydebut,int Nz,int m[Nz+1][Nz+1])
{
    char v[1];

    designe_button_pause(render,20,20);

    IMG_Init(IMG_INIT_PNG);
    TTF_Init();

    TTF_Font *font = TTF_OpenFont(".\\Fonts\\Byte.ttf",25);

    ///SDL_Color white={255,255,255,255};
    SDL_Color white={118,254,242,255};

    /*****************************/ /// image ///

    SDL_Rect rect;
    rect.h=40;
    rect.w=40;

    /**********************************/

    SDL_Surface *icon=NULL;
    SDL_Texture *textureImage=NULL;


    icon=IMG_Load(".\\images\\icon.png");
    textureImage=SDL_CreateTextureFromSurface(render,icon);

    /****///pour les utiliser plus tard

    int surfaceWcopy=icon->w;
    int surfaceHcopy=icon->h;
    /**********/

    SDL_FreeSurface(icon);
    /********************************/
    /********************************/

    int i,j ;
    SDL_SetRenderDrawColor(render,11,149,135,255);/// green color


    for(i=0;i<Nz+1/*7*/;i++)
    {
        /// lignes horizonteaux
        SDL_RenderDrawLine(render,   Xdebut , Ydebut + i*(surfaceMat->h /6)  ,  (surfaceMat->w) + Xdebut  , Ydebut + i*(surfaceMat->h /6) );
        SDL_RenderDrawLine(render,   Xdebut , Ydebut + i*(surfaceMat->h /6) +1 ,  (surfaceMat->w) + Xdebut  , Ydebut + i*(surfaceMat->h /6)+1 );

        if(i==0 || i==6)SDL_RenderDrawLine(render,   Xdebut , Ydebut + i*(surfaceMat->h /6) +2 ,  (surfaceMat->w) + Xdebut  , Ydebut + i*(surfaceMat->h /6)+2 );//to increase thickness!
        else
            SDL_RenderDrawLine(render,   Xdebut , Ydebut + i*(surfaceMat->h /6) +4 ,  (surfaceMat->w) + Xdebut  , Ydebut + i*(surfaceMat->h /6)+4 );

        /// lignes verticeaux

        SDL_RenderDrawLine(render, Xdebut+ i*(surfaceMat->w /6) ,Ydebut , Xdebut+ i*(surfaceMat->w /6) ,(surfaceMat->h) + Ydebut);
        SDL_RenderDrawLine(render, Xdebut+ i*(surfaceMat->w /6)+1 ,Ydebut+1 , Xdebut+ i*(surfaceMat->w /6)+1 ,(surfaceMat->h) + Ydebut+1);// to increase thickness!

        if(i==0 || i==6)SDL_RenderDrawLine(render, Xdebut+ i*(surfaceMat->w /6)+2 ,Ydebut , Xdebut+ i*(surfaceMat->w /6)+2 ,(surfaceMat->h) + Ydebut);
        else
            SDL_RenderDrawLine(render, Xdebut+ i*(surfaceMat->w /6)+4 ,Ydebut , Xdebut+ i*(surfaceMat->w /6)+4 ,(surfaceMat->h) + Ydebut);
    }

    /// Maintenat pour afficher les boules

    for(i=0;i<Nz+1/*7*/;i++)
    {
        for (j=0;j<Nz+1 /*7*/;j++)
        {

            rect.x=(Xdebut+j*(surfaceMat->w/6))-(rect.w/2);
            rect.y=(Ydebut+i*(surfaceMat->h/6))-(rect.h/2);

            SDL_RenderCopy(render,textureImage,NULL,&rect);

            sprintf(v,"%d",m[i][j]);

            SDL_Surface *texte=TTF_RenderText_Blended(font,v,white);
            SDL_Texture *textureText =SDL_CreateTextureFromSurface(render,texte);

            rect.h=texte->h;
            rect.w=texte->w;


            rect.x+=8;
            rect.y+=6;

            SDL_FreeSurface(texte);

            SDL_RenderCopy(render,textureText,NULL,&rect);

            rect.h=40;
            rect.w=40;


            /*   dessiner un cadre "bleu" autour du notre fenetre*/
            Trasser_Rect_Fentere1(2,0,0,720,720,render,102,136,253);///

        }

    }
    //SDL_RenderPresent(render);

    IMG_Quit();
    TTF_Quit();
}

void placerRectangle(SDL_Renderer *render,int Width , int hight)
{
    SDL_Rect rect={0,150,Width,hight}; //0 Ydebut // Ydebut=200;
    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderFillRect(render,&rect);
    Trasser_Rect_Fentere1(3,0,0,720,720,render,0,0,0);

    SDL_RenderPresent(render);
}
void Trasser_Rect_Fentere1(int thickness,int xDepart , int yDepart,int Width,int hight,SDL_Renderer *render,int r , int g ,int b )
{
    SDL_SetRenderDrawColor(render,r,g,b,255);

    int i;
    for(i=0;i<thickness;i++)
    {
    SDL_Rect Rectangle_Cadre={i,i,Width-2*i,hight-2*i};



    SDL_RenderDrawRect(render,&Rectangle_Cadre);

    //SDL_RenderPresent(render);
    }
}
void affiche_FigurePause(SDL_Renderer *render)
{
    IMG_Init(IMG_INIT_PNG);

    SDL_Rect rect ;

    SDL_Surface *image=IMG_Load(".\\images\\Menupause.png");

    rect.h=image->h;
    rect.w=image->w;
    rect.x=720/2-image->w/2;
    rect.y=200;


    SDL_Texture *tex=SDL_CreateTextureFromSurface(render,image);
    SDL_FreeSurface(image);

    SDL_RenderCopy(render,tex,NULL,&rect);
    SDL_RenderPresent(render);

//SDL_DestroyTexture(tex);

    IMG_Quit();

}
void pausePARTIE3(SDL_Renderer *render,SDL_Renderer *render2,int seconds ,bool *quit,int N, SDL_Window *window ,SDL_Window *window2, SDL_Surface *surface ,int m[N+1][N+1],int Mat_verCasesRemplites[N][N],int t_machine[N][N],int t[N][N], int Xdebut , int Ydebut)
{

    bool pause = true;

    int score =seconds; // pour que l'on affiche au tableau du score

    SDL_Event event;

    SDL_Color color={83,124,181,255};/// coleur pour ecrire ;

    placerRectangle(render,720,720);// pour que notre designe pricipal n'apparait pas
    placerRectangle(render2,720,720);//
      //**


    affiche_FigurePause(render);

    Score_Affiche(score,render,color,330,290);




    while (pause)
    {
        SDL_WaitEvent(&event);



        switch(event.type)
        {


            case SDL_KEYDOWN :
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE :

                        *quit=true;
                        pause=false;

                        SDL_RenderFillRect(render,NULL);


                        break;

                    case SDLK_c :
                        pause=false;
                        ContinuerPARTIE3(render,render2,N,Mat_verCasesRemplites,t_machine,m,t,surface,Xdebut,Ydebut);
                        //Continuer


                        break;

                     case SDLK_r :

                        pause=false;
                        *quit=true;

                        Destroy(render2,window2);
                        ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                        //NewGame


                        break;


                     case SDLK_q : // QUIT
                         pause=false;
                        *quit=true;
                        SDL_RenderFillRect(render,NULL);

                        break;


                }
                break;//end of case SDL_Keydown

             case SDL_MOUSEBUTTONUP :
                 if( (138 <event.button.x && event.button.x<264) && (407<event.button.y && event.button.y<516)  ) // NewGame
                {
                    pause=false;
                    *quit=true;

                   Destroy(render2,window2);

                    ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                }

                if( (305 <event.button.x && event.button.x<425) && (407<event.button.y && event.button.y<516)  ) // Resume
                {
                    pause=false;
                    ContinuerPARTIE3(render,render2,N,Mat_verCasesRemplites,t_machine,m,t,surface,Xdebut,Ydebut);
                }


                if( (465 <event.button.x && event.button.x<586) && (407<event.button.y && event.button.y<516)  ) // QUIT
                {
                    *quit=true;
                    pause=false;
                    SDL_RenderFillRect(render,NULL);
                }
                break; // end of Mouse_ButtonUP


            }//end of switch
    };//end of while loop

}

void Destroy(SDL_Renderer *render2 , SDL_Window *window2)
{
    SDL_DestroyRenderer(render2);
    SDL_DestroyWindow(window2);
}
void pause(SDL_Renderer *render,int seconds ,bool *quit,int N, SDL_Window *window , SDL_Surface *surface ,int m[N+1][N+1],int t[N][N], int Xdebut , int Ydebut)
{


    bool pause = true;

    int score =seconds; // pour que l'on affiche au tableau du score



    SDL_Event event;


    SDL_Color color={83,124,181,255};/// couleur pour ecrire ;

    placerRectangle(render,720,720);// pour que notre designe pricipal n'apparait pas
    affiche_FigurePause(render);

    Score_Affiche(score,render,color,321,295);


    while (pause)
    {
        SDL_WaitEvent(&event);

        switch(event.type)
        {
            case SDL_QUIT :
                *quit=true;
                pause=false;

                SDL_RenderFillRect(render,NULL);
                break;



            case SDL_KEYDOWN :
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE :

                        *quit=true;
                        pause=false;

                        SDL_RenderFillRect(render,NULL);

                        break;

                    case SDLK_c :
                        pause=false;
                        Continuer(render,N,m,t,surface,Xdebut,Ydebut);
                        //Continuer


                        break;

                     case SDLK_r :

                        pause=false;
                        *quit=true;
                        Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                        //replay


                        break;



                     case SDLK_q :

                         pause=false;
                        *quit=true;
                         SDL_RenderFillRect(render,NULL);
                        //Sortir du jeu

                        break;

                }
                break;// end of case : SDL_KEYDOWN
             case SDL_MOUSEBUTTONUP :
                if( (138 <event.button.x && event.button.x<264) && (407<event.button.y && event.button.y<516)  ) // NewGame
                {
                    pause=false;
                    *quit=true;
                    Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                }

                if( (305 <event.button.x && event.button.x<425) && (407<event.button.y && event.button.y<516)  ) // Resume
                {
                    pause=false;
                    Continuer(render,N,m,t,surface,Xdebut,Ydebut);
                }


                if( (465 <event.button.x && event.button.x<586) && (407<event.button.y && event.button.y<516)  ) // QUIT
                {
                    pause=false;
                    *quit=true;
                    SDL_RenderFillRect(render,NULL);

                }
                break;


            }// switch(event.type)

    }//end of while loop
}


void init_mat(int taille,int v[taille][taille],int chiffreInit)
{
    int i,j;

    for(i=0;i<taille;i++)
    {
        for (j=0;j<taille;j++)
            v[i][j]=chiffreInit;
    }
}

char* current_date()
{
    time_t t1;
    t1 = time(NULL);
    char *current_date;

    struct tm tm = *localtime(&t1);

    sprintf(current_date," %d / %d / %d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);

    return(current_date);

}
void SDL_RenderPresentBoth(SDL_Renderer *render , SDL_Renderer *render2)
{
    SDL_RenderPresent(render);
    SDL_RenderPresent(render2);
}
void SDL_RenderClearBoth(SDL_Renderer *render , SDL_Renderer *render2)
{
    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);

    SDL_SetRenderDrawColor(render2,255,255,255,255);
    SDL_RenderClear(render2);


}

void PARTIE3(SDL_Renderer *render ,SDL_Window *window,SDL_Surface *surface,int Xdebut,int Ydebut,int N,int m[N+1][N+1])
{

    /// CREATION DE LA 2EME FENETERE //
    SDL_Window *window2=SDL_CreateWindow("AI",800,50,720, 720,SDL_WINDOW_SHOWN);
    SDL_Renderer *render2=SDL_CreateRenderer(window2,-1,0);


    ///  AFFICHAGE DES 2 FENETRES  ///
    SDL_RenderClearBoth(render,render2);

    affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);

    affiche_Mat_designe1(render2,surface,Xdebut,Ydebut,N,m);


    SDL_RenderPresentBoth(render,render2);



    /*-------------------------------------------------------------*/
    /**************************************///VARIABLES PARTIE(1)
    /*Declaration des variables
        vont nous servir a dessiner les
    digaoneaux apres  */

    int divW,divH;
    int x1,x2,y1,y2;

    int Xnbr;

    /**********************************///VARIABLES PARTIE(2)

    int testFinJeuM;
    int defficulte = 2; /**machine va jouer chaque 2s**/


    /*-------------------------------------------------------------*/
    /*********************************************************************/ // MATRICES PARTIE(2)
        /*Declaration et remplissage des
            deux Matrices qu on va les utiliser
                dans la /* 2eme partie */

    int t_machine[N][N];
    int Mat_verCasesRemplites[N][N];

    RemplirT_machine(N,t_machine,m);
    init_mat(N,Mat_verCasesRemplites,0);


    /**---------------------------------------------------------*/ // MATRICES PARTIE(1)
        /*--------declaration + initialisation des deux Matrices
            qu on va les utilises plus tard--------*/


    //mat de verification ** initialisee a 0 partout
    int ver[N+1][N+1];
    init_mat(N+1,ver,0);


    // t la mat associee au designe ** initialisee a 0 partout
    int t[N][N];
    init_mat(N,t,0);

    /******************************************************************/

    /** GESTION DU TIMER-------- **/

    int TempsPrecedent=0;
    int seconds=0;
    Uint32 ms,Reset_Ticks=SDL_GetTicks();

    int Reset_Seconds=seconds;
    int deltaSeconds;

    SDL_Color Purple={223,40,117,255};/*COULEUR POUR DEESINER LE TIMER PARTIE(1) */  /******PURPLE CHANGE ********/
    SDL_Color black={0,0,0,255}; //COULEUR POUR DEESINER LE TIMER PARTIE(2)


    ///**********************************************************************************************************//

    bool quit=false;
    SDL_Event event ;

    while(!quit)
    {
        timer(SDL_GetTicks(),&TempsPrecedent,&seconds,&Reset_Ticks);
        ms=SDL_GetTicks()-Reset_Ticks;

        /* GESTION DES EVENEMTS DES 2 FENETRES AU MEME TEMPS */

       while(SDL_PollEvent(&event)>0)
       {
           if(event.window.event==SDL_WINDOWEVENT_CLOSE)
                quit=true;
                                                        // Sortir de jeu
            if(event.key.keysym.sym==SDLK_ESCAPE)
                quit=true;


            /**-----> PLAYER JOUE <------***/ // Ps: le jouer va toujour jouer dans la boucle des evenements !
            // et la machine va jouer de hors

            switch(event.type)
            {


                case SDL_MOUSEBUTTONUP :
                    switch(event.button.button)
                    {
                        case SDL_BUTTON_MIDDLE: // on peut tricher si on ..;)
                            matrice_egaux(N+1,ver,m);
                            break;




                        case SDL_BUTTON_LEFT :

                             /** Pause Button **/

                             if( (43 <event.button.x && event.button.x<129) && (24<event.button.y && event.button.y<109)  )

                                pausePARTIE3(render,render2,seconds,&quit,N,window,window2,surface,m,Mat_verCasesRemplites,t_machine,t,Xdebut,Ydebut);


                            /********PauseButton-Ends******/




                            /**Attention :: l utilisateur peut jouer de hors de la matrice !!

                             pour que x ,y soient dans la surface  DivW , DivH<- valeur negative**/

                            if( ( event.button.x < Xdebut || event.button.x > Xdebut+surface->w )
                               || (   event.button.y < Ydebut || event.button.y > Ydebut+surface->h ))
                            {
                                //printf("OUT \n ");
                                divW=-5;divH=-5;
                            }  // alors on dessigne ssi divW>=0 ou divH>=0  !: probleme rigle : !

                            else
                            {
                                    divW=(event.button.x-Xdebut)/(surface->w/6);// -Xdebut   // dans quelle colone on est !
                                    divH=(event.button.y-Ydebut)/(surface->h/6); // - Ydebut  // dans quelle ligne on est!
                                    /// la combinaison  des deux donne l'info exact sur la case
                                    /// exemple : Si on etait  sur la case [ 0 ][ 2 ] Alors  divH = 0 divW = 2 ;
                                    t[divH][divW]++;


                            }



                            x1=Xdebut+divW*(surface->w/6); // + X debut
                            y1=Ydebut+divH*(surface->h/6);  // + Y debut

                            x2=x1+(surface->w/6);
                            y2=y1+(surface->h/6);



                            Xnbr=t[divH][divW]%3  ;




                             switch(Xnbr)
                             {


                                  case 0:
                                    if(divH>=0)
                                    {
                                        ver[divH+1][divW]--;
                                        ver[divH][divW+1]--;
                                    }
                                    //aff_Mat(N+1,ver);
                                    //vide();

                                    verifie(N+1,ver,m);
                                    supprimeDG(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;



                                 case 1 :
                                     if(divH>=0)
                                    {
                                        ver[divH][divW]++;
                                        ver[divH+1][divW+1]++;
                                    }

                                    //aff_Mat(N+1,ver);
                                    //vide();

                                    verifie(N+1,ver,m);

                                    trasserlineGD(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;

                                case 2 :
                                    if(divH>=0)
                                    {
                                        ver[divH][divW]--;
                                        ver[divH+1][divW+1]--;
                                        ver[divH+1][divW]++;
                                        ver[divH][divW+1]++;
                                    }

                                    //aff_Mat(N+1,ver);
                                    //vide();

                                    verifie(N+1,ver,m);
                                    trasserlineDG(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m);

                                    break;


                                }
                             break;// FIN de sdl button left ;
                         }
                     break;// FIN DE SDL button up
                 }





       }/*---------END OF POLEVENT LOOP------------------*/

        /**-------------PARTIE AI JOUE ----------------------------------------------------------------------------*/

        deltaSeconds=seconds-Reset_Seconds;

        if(deltaSeconds>=defficulte) // le programme va rentrer dans le if ssi l interval -diifuclte- passe !
            //NB: defficulte est l intrval des secondes initialise au debut
        {

        fonction_Machine_dessine(N,render2,surface,Xdebut,Ydebut,t_machine,m,Mat_verCasesRemplites);
        // cette fonction va dessiner les diagoneaux  a partir des valeurs des cases du t_machine[N][N]//
            // et elle va remplir les cases du Mat_verCasesRemplites ... --on va utilser cette derniere pour
             // tester la fin du jeux-- //


        if(nbrCasesNonremplites(N,Mat_verCasesRemplites)<4)
            dessiner_le_reste(N,Mat_verCasesRemplites,render2,surface,Xdebut,Ydebut,t_machine,m);

        Reset_Seconds=seconds; // reinitialiser Reset_Seconds " reintialiser le repere des secondes " //

        /// Pour mieux comprender//
         //vous pouvez activer le bout du code ci-dessus qui va afficher
            //les deux matrice qu on a utiliser dans cette partie(2)
            /*
        printf("----t_machine ---");
        aff_Mat(N,t_machine);
        printf("----Mat_verCasesRemplites----");
        aff_Mat(N,Mat_verCasesRemplites);
            */


        }/**---->FIN PARTIE AI JOUE <-------------------**/

        SDL_Delay(20);

        /* AFFICHER LE TIMER *///PARTIE(1)
        designe_Timer(render,window);
        TempsAff_Ms(ms,render,Purple,414,90);
        TempsAff_Seconde(seconds,render,Purple,314,90);


          /* AFFICHER LE TIMER *///PARTIE(2)
        designe_Timer(render2,window2);
        TempsAff_Ms(ms,render2,black,414,90);
        TempsAff_Seconde(seconds,render2,black,290,90);




        /* TEST FIN DE JEU*/ //Jouer
       TestFinJeux(3,seconds,N,ver,m,t,&quit,surface,render,render2,window,window2,Xdebut,Ydebut); // cette fonction est utlise dans la partie 1e3




        /* TEST FIN DE JEU*/// Machine
        testFinJeuM =  TestFinJeuM(N,Mat_verCasesRemplites);

        if( testFinJeuM == 1)
        {
            GameOver(3,seconds,&quit,render,render2,N,m,t,surface,Xdebut,Ydebut,window,window2);


        }
        /*--------FIN TEST---------*/


    }//END OF WHILE(!quit) LOOP


    //why not ?

    SDL_SetRenderDrawColor(render,83,124,181,255);
    SDL_RenderClear(render);
    SDL_RenderPresent(render);

    Destroy(render2,window2);


}

void Replay(SDL_Renderer *render,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut, SDL_Window *window )
{
    Mat7x7(N,m);
    PARTIE1(N,m,render,surface,Xdebut,Ydebut,window);
}
void ReplayPARTIE3(SDL_Renderer *render,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut, SDL_Window *window )
{
    Mat7x7(N,m);
    PARTIE3(render,window,surface,Xdebut,Ydebut,N,m);
}

void ReplayPARTIE2(int N , int m[N+1][N+1] ,SDL_Renderer *render, SDL_Surface *surface, int Xdebut, int Ydebut, SDL_Window *window )
{
    Mat7x7(N,m);
    PARTIE2(render,surface,window,Xdebut,Ydebut,N,m);
}

void Continuer(SDL_Renderer *render ,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut)
{
    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);
    continuerD(render,surface,Xdebut,Ydebut,N,t,m);
    //affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
}
void ContinuerPARTIE2(SDL_Renderer *render ,int N,int t_machine[N][N],int mat_verCasesRemplites[N][N],int m[N+1][N+1],SDL_Surface *surface,int Xdebut, int Ydebut)
{
    SDL_SetRenderDrawColor(render,255,255,255,255);
    SDL_RenderClear(render);

    ContinuerD_PARTIE2(N,mat_verCasesRemplites,t_machine,m,render,surface,Xdebut,Ydebut);
    //affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
}
void ContinuerPARTIE3(SDL_Renderer *render ,SDL_Renderer *render2,int N,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut)
{
    aff_Mat(6,Mat_verCasesRemplites);
    Continuer(render,N,m,t,surface,Xdebut,Ydebut);

    SDL_SetRenderDrawColor(render2,255,255,255,255);
    SDL_RenderClear(render2);

    ContinuerD_PARTIE3(N,Mat_verCasesRemplites,render2,surface,Xdebut,Ydebut,t_machine,m);

    //continuerD(render,surface,Xdebut,Ydebut,N,t,m);
    //affiche_Mat_designe1(render,surface,Xdebut,Ydebut,N,m);
}

///POUR TRACER les digoneaux Ver_Machine (continuer dessiner)
void continuerD(SDL_Renderer *render,SDL_Surface *surface , int Xdebut ,int Ydebut , int N , int t[N][N],int m[N+1][N+1])
{
    int i ,j,x1,x2,y1,y2 ;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            x1=Xdebut+j*(surface->w/6);
            y1=Ydebut+i*(surface->h/6);

            x2=x1+(surface->w/6);
            y2=y1+(surface->h/6);

            switch (t[i][j]%3)
            {
                case 1:
                    trasserlineGD(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m) ;
                    break;
                case 2 :
                     trasserlineDG(surface,render,x1,y1,x2,y2,Xdebut,Ydebut,N,m) ;
                    break;

            }
        }
    }

SDL_RenderPresent(render);
}

///POUR TRACER les digoneaux t_machine (Continuer Dessiner )
void ContinuerD_PARTIE3(int N,int Mat_verCasesRemplites[N][N],SDL_Renderer *render2,SDL_Surface *surface,int Xdebut,int Ydebut,int t_machine[N][N],int m[N+1][N+1])
{
    int i ,j ;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Mat_verCasesRemplites[i][j]==-1)
            {
                TracerLigne__TmachineIJ(i,j,render2,surface,Xdebut,Ydebut,N,t_machine,m);
              //  SDL_RenderPresent(render2);

            }

        }
    }

}
void ContinuerD_PARTIE2(int N,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut)
{
    int i ,j ;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Mat_verCasesRemplites[i][j]==-1)
            {
                TracerLigne__TmachineIJ(i,j,render,surface,Xdebut,Ydebut,N,t_machine,m);


            }

        }
    }

}
void pausePARTIE2(SDL_Renderer *render,SDL_Window *window,int seconds ,bool *quit,int N,SDL_Surface *surface,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],int Xdebut,int Ydebut)
{

    bool pause = true;

    int score =seconds; // pour  l affichage du score  "tableau du score" //



    SDL_Event event;


    SDL_Color color={0,0,0,255};/// coleur pour ecrire ;

    placerRectangle(render,720,720);// pour masquer la matrice
    affiche_FigurePause(render);


    Score_Affiche(score,render,color,330,294);

    while (pause)
    {
        SDL_WaitEvent(&event);



        switch(event.type)
        {
            case SDL_QUIT :
                *quit=true;
                pause=false;
                SDL_RenderFillRect(render,NULL);

                break;


            case SDL_KEYDOWN :
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE :

                        *quit=true;
                        pause=false;
                        SDL_RenderFillRect(render,NULL);

                        break;

                    case SDLK_c :
                        pause=false;
                        ContinuerPARTIE2(render,N,t_machine,Mat_verCasesRemplites,m,surface,Xdebut,Ydebut);
                        //Continuer
                        break;

                     case SDLK_r :

                        pause=false;
                        *quit=true;
                        ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                        //replay
                        break;

                     case SDLK_q : // pour sortir du jeux
                         pause=false;
                        *quit=true;
                        SDL_RenderFillRect(render,NULL);

                        break;




                }
                break;

            case SDL_MOUSEBUTTONUP :
                 if( (138 <event.button.x && event.button.x<264) && (407<event.button.y && event.button.y<516)  ) // NewGame
                {
                    pause=false;
                    *quit=true;
                    ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                }

                if( (305 <event.button.x && event.button.x<425) && (407<event.button.y && event.button.y<516)  ) // Resume
                {
                    pause=false;
                    ContinuerPARTIE2(render,N,t_machine,Mat_verCasesRemplites,m,surface,Xdebut,Ydebut);
                }


                if( (465 <event.button.x && event.button.x<586) && (407<event.button.y && event.button.y<516)  ) // QUIT
                {
                    pause=false;
                    *quit=true;
                    SDL_RenderFillRect(render,NULL);
                }



                break;

            }
    };//end of while loop
}
void Interface_DdebutJeu(SDL_Renderer *render)
{
    IMG_Init(IMG_INIT_PNG);

    SDL_Surface *image=IMG_Load(".\\images\\INTERFACE.png");


    SDL_Texture *tex=SDL_CreateTextureFromSurface(render,image);
    SDL_FreeSurface(image);

    SDL_RenderCopy(render,tex,NULL,NULL);
    SDL_RenderPresent(render);


    IMG_Quit();
}
void Congrats()
{
    int i , j;

    for(i=0;i<200;i++)
    {
         for(j=0;j<3;j++)
         {
             printf(" W---I---N---N---E---R !!���!!");

         }

         printf(" \n\n");
    }

}

void SeeYouSoon()
{
    int i , j;

    for(i=0;i<20;i++)
    {
         for(j=0;j<3;j++)
         {


             printf("-- !!��SEE--YOU--SOON-- ��!!");

         }

         printf(" \n\n");
    }


}


void vide()
{
    printf("\n\n\n\n\n");
}
int abs(int x)
{
    if ( x>=0 ){return(x);}
    else{return (-x);};
}
int random()
{

    return( rand() % 2 );
}
void hello()
 {
     printf("Hello and welcome -> \n\n ");
 }
 /*void AIWINS()
{
    int i ;
    for(i=0;i<20;i++)
        printf(" \n\n\n  ->->-> -> ! AI WINS ! <- <-<-<- \n");
}*/
void GameOver(int partie,int score,bool *quit,SDL_Renderer *render,SDL_Renderer *render2,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut,int Ydebut,SDL_Window *window,SDL_Window *window2)
{

    int BestScorePlayer;
    SDL_Color Black={0,0,0,255};

    FILE *BestScoreFileP = fopen(".\\Scores\\BestScore.txt","r");


    if(partie==1 || partie==3)
    {
        fscanf(BestScoreFileP,"%d",&BestScorePlayer);
        fclose(BestScoreFileP);
    }

    afficheGameOver(render);
    if(partie==1 || partie ==3)

        Best_Score_Affiche_WINNER(BestScorePlayer,render,Black,415,193);


    if(score==BestScorePlayer)
        STAR(render,398,183);

    SDL_Event event;

    bool pause=true; // pauser tout

    while(pause)
    {
        while(SDL_PollEvent(&event)>0)
        {

            printf("%d\n\n",event.motion.x);


            if(event.type==SDL_QUIT)
            {
                *quit=true;
                pause=false;
                SDL_RenderFillRect(render,NULL);
            }



            switch(event.type)
            {
                case SDL_KEYDOWN :
                    switch(event.key.keysym.sym)
                    {
                        case SDLK_q :
                            *quit=true;
                            pause=false;

                            SDL_RenderFillRect(render,NULL);
                            break;

                        case SDLK_ESCAPE:
                            *quit=true;
                            pause=false;

                            SDL_RenderFillRect(render,NULL);

                            break;

                        case SDLK_r :

                            *quit=true;
                            pause=false;

                            switch(partie)
                            {
                                case 1 :
                                    Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;
                                case 2 :
                                    ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                                    break;
                                case 3:
                                    Destroy(render2,window2);
                                    ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;

                            }

                            break;//fin de SDLK_r



                    }
                    break;// fin de SDL_KEYDOWN

                case SDL_MOUSEBUTTONUP :
                   if( (427 <event.button.x && event.button.x<508) && (248<event.button.y && event.button.y<329)  ) // click quit
                   {
                       pause=false;
                       *quit=true;


                        SDL_RenderFillRect(render,NULL);
                   }

                    if( (291 <event.button.x && event.button.x<371) && (250<event.button.y && event.button.y<328)  ) // click newGame
                    {
                        *quit=true;
                        pause=false;
                            switch(partie)
                            {
                                case 1 :
                                    Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;
                                case 2 :
                                    ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                                    break;
                                case 3:
                                    Destroy(render2,window2);
                                    ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;

                            }
                    }
                    break;// fin de SDL_MOUSEBUTTONUP

            }
        }
        SDL_Delay(20);
    }


}
void afficheWINNER(SDL_Renderer *render)
{
     IMG_Init(IMG_INIT_PNG);

    SDL_Rect rect ;

    SDL_Surface *image=IMG_Load(".\\images\\winner.png");

    rect.h=image->h;
    rect.w=image->w;
    rect.x=242;
    rect.y=110;


    SDL_Texture *tex=SDL_CreateTextureFromSurface(render,image);
    SDL_FreeSurface(image);

    SDL_RenderCopy(render,tex,NULL,&rect);
    SDL_RenderPresent(render);


    IMG_Quit();
}
void afficheGameOver(SDL_Renderer *render  )
{
     IMG_Init(IMG_INIT_PNG);

    SDL_Rect rect ;

    SDL_Surface *image=IMG_Load(".\\images\\gameover.png");

    rect.h=image->h;
    rect.w=image->w;
    rect.x=242;
    rect.y=110;


    SDL_Texture *tex=SDL_CreateTextureFromSurface(render,image);
    SDL_FreeSurface(image);

    SDL_RenderCopy(render,tex,NULL,&rect);
    SDL_RenderPresent(render);


    IMG_Quit();
}
void WINNER(int partie,int score,bool *quit,SDL_Renderer *render,SDL_Renderer *render2,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut,int Ydebut,SDL_Window *window,SDL_Window *window2)
{
    int BestScorePlayer,BestScoreAI;
    SDL_Color Black={0,0,0,255};

    FILE *BestScoreFileP = fopen(".\\Scores\\BestScore.txt","r");
    FILE *BestScoreFileAI = fopen(".\\Scores\\BestScoreMachine.txt","r");

    switch(partie)
    {

        case 1 :


            fscanf(BestScoreFileP,"%d",&BestScorePlayer);
            fclose(BestScoreFileP);

            if(score<BestScorePlayer)
                {
                    BestScorePlayer=score;

                    FILE *BestScoreFile = fopen(".\\Scores\\BestScore.txt","w");
                    fprintf(BestScoreFile,"%d",BestScorePlayer);
                    fclose(BestScoreFile);

                }

            break;

        case 2 :

            fscanf(BestScoreFileAI,"%d",&BestScoreAI);
            fclose(BestScoreFileAI);

            if(score<BestScoreAI)
                {
                    BestScoreAI=score;

                    FILE *BestScoreFileAI = fopen(".\\Scores\\BestScoreMachine.txt","w");
                    fprintf(BestScoreFileAI,"%d",BestScoreAI);
                    fclose(BestScoreFileAI);

                }
            break;

        case 3 :


            fscanf(BestScoreFileP,"%d",&BestScorePlayer);
            fclose(BestScoreFileP);

            if(score<BestScorePlayer)
                {
                    BestScorePlayer=score;

                    FILE *BestScoreFile = fopen(".\\Scores\\BestScore.txt","w");
                    fprintf(BestScoreFile,"%d",BestScorePlayer);
                    fclose(BestScoreFile);

                }

            break;

    }



    afficheWINNER(render);

    Score_Affiche_WINNER(score,render,Black,363,199);
    if(partie==1 || partie ==3)

        Best_Score_Affiche_WINNER(BestScorePlayer,render,Black,510,199);
        else

            Best_Score_Affiche_WINNER(BestScoreAI,render,Black,510,199);


    if(score==BestScorePlayer || score==BestScoreAI)
        STAR(render,350,183);

    SDL_Event event;

    bool pause=true; // pauser tout

    while(pause)
    {
        while(SDL_PollEvent(&event)>0)
        {


            if(event.type==SDL_QUIT)
            {
                *quit=true;
                pause=false;

                SDL_RenderFillRect(render,NULL);

            }

            switch(event.type)
            {
                case SDL_KEYDOWN :
                    switch(event.key.keysym.sym)
                    {
                        case SDLK_q :
                            *quit=true;
                            pause=false;

                            SDL_RenderFillRect(render,NULL);
                            break;

                        case SDLK_ESCAPE:
                            *quit=true;
                            pause=false;

                            SDL_RenderFillRect(render,NULL);

                            break;

                        case SDLK_r :

                            *quit=true;
                            pause=false;



                            switch(partie)
                            {
                                case 1 :
                                    Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;
                                case 2 :
                                    ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                                    break;
                                case 3:
                                    Destroy(render2,window2);
                                    ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;

                            }

                            break;



                    }
                    break;

                case SDL_MOUSEBUTTONUP :
                   if( (427 <event.button.x && event.button.x<508) && (248<event.button.y && event.button.y<329)  ) // click quit
                   {
                       pause=false;
                       *quit=true;


                        SDL_RenderFillRect(render,NULL);
                   }

                    if( (291 <event.button.x && event.button.x<371) && (250<event.button.y && event.button.y<328)  ) // click newGame
                    {
                        *quit=true;
                            pause=false;



                            switch(partie)
                            {
                                case 1 :
                                    Replay(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;
                                case 2 :
                                    ReplayPARTIE2(N,m,render,surface,Xdebut,Ydebut,window);
                                    break;
                                case 3:
                                    Destroy(render2,window2);
                                    ReplayPARTIE3(render,N,m,t,surface,Xdebut,Ydebut,window);
                                    break;

                            }
                    }

                    break;

            }
        }
        SDL_Delay(20);
    }


}

int TestFinJeuM(int N , int Mat_verCasesRemplites[N][N])
{
    if(MatEgal_Chiffre(N,Mat_verCasesRemplites,-1)==1)
    {
        return(1); // retourner 1 si la machine a termine de jouer
                        // c-a-d toutes les  cases de Mat_verCasesRemplites == -1
    }


}
void MakeScreenFlick(SDL_Renderer *render)
{
    SDL_Event event;

    char str[30]="By : </$ Game_Coder Team >";



    TTF_Init();
    TTF_Font *font =TTF_OpenFont(".\\Fonts\\Byte.ttf",20);



    SDL_Color WHITE ={255,255,255,255};


    bool quit=false;
    int i=0;

    while(!quit)
    {


        while(SDL_PollEvent(&event)>0)
            {

                if(event.type==SDL_QUIT)
                    quit=true;


            for(i=0;i<255;i++)
            {
                SDL_SetRenderDrawColor(render,50,198+i,180-i,255);
                SDL_RenderClear(render);


                SDL_Color Color={i,i,i,255};
                SDL_Surface *TextSurface=TTF_RenderText_Blended(font,str,Color);
                SDL_Rect rect={150,720/2,TextSurface->w,TextSurface->h};
                SDL_Texture *TextTexture=SDL_CreateTextureFromSurface(render,TextSurface);

                SDL_RenderCopy(render,TextTexture,NULL,&rect);
                SDL_RenderPresent(render);

                SDL_DestroyTexture(TextTexture);
                SDL_FreeSurface(TextSurface);

            }


        }








    SDL_Delay(20);

    }
    TTF_CloseFont(font);
}

void STAR(SDL_Renderer *render,int PosX , int PosY)
{

    IMG_Init(IMG_INIT_PNG);

    SDL_Surface *image=IMG_Load(".\\images\\BestScoreStar.png");
    SDL_Texture *Timage=SDL_CreateTextureFromSurface(render,image);

    SDL_Rect rect;

    rect.w=image->w;
    rect.h=image->h;
    rect.x=PosX;
    rect.y=PosY;

    SDL_RenderCopy(render,Timage,NULL,&rect);

    SDL_RenderPresent(render);



    IMG_Quit();

}
