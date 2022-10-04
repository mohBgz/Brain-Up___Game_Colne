#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>
#include "functions.h"
#include <time.h>
#include<SDL_mixer.h>
#include <string.h>


#define N 6
typedef struct cordoMat{
int ligne;
int colonne;
}cordoMat;


typedef struct Case
{
    int a , b , c ,d ;

}Case;


typedef struct ligne_colone
{
    int i,j;

}ligne_colone;



int main(int argc, char *argv[])
{

    srand(time(NULL)); //Main()


    /*           Preparer l environnement SDL
    /*****************************************************************/

    // Init SDL
    SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO);

    Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,4096);



     // Load background music
    Mix_Music *BG_Music=Mix_LoadMUS(".\\music\\Background.wav");







    /* Declaration des variable ///////////////////////////////////// PARTIE 1 + 2
    ----------------------------------Winodw + Renderer + Surface -----------------------------------------------------------
    *****************************************************************************************************************************/




    SDL_Window *window=SDL_CreateWindow(" ! ! Modele de droite ! !",50,50,720, 720,SDL_WINDOW_SHOWN);
    SDL_Renderer *render=SDL_CreateRenderer(window,-1,0);


    SDL_Surface *surface = SDL_CreateRGBSurface(0, 600, 480, 32,0, 0, 0, 0); /// la surface ou on va jouer

    /******************************************************************/ // Declaration  SDL terminee


    SDL_Event event;
    bool quit=false;




    // Matrices

    //m Main()
    int m[N+1][N+1];/// m est la mat des chiffres 7x7
    Mat7x7(N,m);
    //aff_Mat(N+1,m);


    int Xdebut=70,Ydebut=200; // points de depart pour l'affiachge du notre matrice

    /*****************************************/


    Interface_DdebutJeu(render); // affichage de l'interface

    while(!quit)
    {
        while(SDL_PollEvent(&event)>0)
        {
            if(event.key.keysym.sym==SDLK_ESCAPE)
                    quit=true;

            switch(event.type)
            {

                case SDL_QUIT:
                    quit=true;
                    break;

                case SDL_MOUSEBUTTONUP :
                    if( (206 <event.button.x && event.button.x<534) && (302<event.button.y && event.button.y<396)  )
                    {
                        PARTIE1(N,m,render,surface,Xdebut,Ydebut,window);
                        quit=true;
                    }

                    if( (206 <event.button.x && event.button.x<534) && (460<event.button.y && event.button.y<541)  )
                    {
                        PARTIE2(render,surface,window,Xdebut,Ydebut,N,m);
                        quit=true;
                    }



                    if( (206 <event.button.x && event.button.x<534) && (611<event.button.y && event.button.y<691)  )
                    {

                        PARTIE3(render,window,surface,Xdebut,Ydebut,N,m);
                        quit=true;
                    }




                    break;

            }


        }


        //quit=true;
        //SDL_RenderPresent(render);
        SDL_Delay(30);

    }//End of while loop


    SeeYouSoon();
    Mix_PlayMusic(BG_Music,1);
    MakeScreenFlick(render);

    /*************


    /** liberer tout les resources */


    SDL_FreeSurface(surface);
    SDL_DestroyRenderer(render);

    SDL_DestroyWindow(window);


    Mix_FreeMusic(BG_Music);
    Mix_CloseAudio();
    SDL_Quit();


        return 0;
}
