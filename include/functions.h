#ifndef PROJETFONCTIONS_H_INCLUDED
#define PROJETFONCTIONS_H_INCLUDED


void vide();
int abs(int x);
int random();
void hello();
void aff_Mat(int taille ,int v[taille][taille]);
char* current_date();

void Mat7x7(int Nz,int M[Nz+1][Nz+1] );
int MatEgal_Chiffre(int N,int MatVercases[N][N],int chiffre );
void matrice_egaux(int L,int v[L][L],int matriceSource[L][L]);
void RemplirT_machine(int N,int t_machine[N][N],int m[N+1][N+1]);
int nbrCasesNonremplites(int taille, int mat[taille][taille]);

void Interface_DdebutJeu(SDL_Renderer *render);
void designe_button_pause(SDL_Renderer *render,int X , int Y);
void designe_Timer (SDL_Renderer *render,SDL_Window *window);

void affiche_FigurePause(SDL_Renderer *render);


void TempsAff_Seconde(int Seconde , SDL_Renderer *render,SDL_Color color,int PosX,int PosY);
void TempsAff_Ms(int ms , SDL_Renderer *render,SDL_Color color,int PosX,int PosY);

void Score_Affiche(int Score , SDL_Renderer *render,SDL_Color color,int PosX,int PosY);
void Best_Score_Affiche_WINNER(int BestScore, SDL_Renderer *render,SDL_Color color,int PosX,int PosY);
void Score_Affiche_WINNER(int Score , SDL_Renderer *render,SDL_Color color,int PosX,int PosY);
void timer(int tempsActuelle , int *tempsPrecedent , int *seconds , Uint32 *reset_ticks ) ;
int timer_machine(int tempsActuelle , int *tempsPrecedent , Uint32 *reset_ticks );
int verifie( int L , int V1[L][L] , int V2[L][L] );


void PARTIE1(int N, int m[N+1][N+1],SDL_Renderer *render , SDL_Surface *surface,int Xdebut , int Ydebut,SDL_Window *window);
void PARTIE2(SDL_Renderer *render,SDL_Surface *surface,SDL_Window *window,int Xdebut , int Ydebut,int N , int m[N+1][N+1]);
void PARTIE3(SDL_Renderer *render ,SDL_Window *window,SDL_Surface *surface,int Xdebut,int Ydebut,int N,int m[N+1][N+1]);
void SeeYouSoon();
void MakeScreenFlick(SDL_Renderer *render);
void affiche_Mat_designe1(SDL_Renderer *render , SDL_Surface *surfaceMat,  int Xdebut, int Ydebut,int Nz,int m[Nz+1][Nz+1]);
void STAR(SDL_Renderer *render,int PosX , int PosY);
void WINNER(int partie,int score,bool *quit,SDL_Renderer *render,SDL_Renderer *render2,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut,int Ydebut,SDL_Window *window,SDL_Window *window2);
void afficheGameOver(SDL_Renderer *render  );
void GameOver(int partie,int score,bool *quit,SDL_Renderer *render,SDL_Renderer *render2,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut,int Ydebut,SDL_Window *window,SDL_Window *window2);
void init_mat(int taille,int v[taille][taille],int chiffreInit);

void pause(SDL_Renderer *render,int seconds ,bool *quit,int N, SDL_Window *window , SDL_Surface *surface ,int m[N+1][N+1],int t[N][N], int Xdebut , int Ydebut);
void pausePARTIE2(SDL_Renderer *render,SDL_Window *window,int seconds ,bool *quit,int N,SDL_Surface *surface,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],int Xdebut,int Ydebut);
void pausePARTIE3(SDL_Renderer *render,SDL_Renderer *render2,int seconds ,bool *quit,int N, SDL_Window *window ,SDL_Window *window2, SDL_Surface *surface ,int m[N+1][N+1],int Mat_verCasesRemplites[N][N],int t_machine[N][N],int t[N][N], int Xdebut , int Ydebut);

void Continuer(SDL_Renderer *render ,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut);
void ContinuerPARTIE2(SDL_Renderer *render ,int N,int t_machine[N][N],int mat_verCasesRemplites[N][N],int m[N+1][N+1],SDL_Surface *surface,int Xdebut, int Ydebut);
void ContinuerPARTIE3(SDL_Renderer *render ,SDL_Renderer *render2,int N,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut);

void continuerD(SDL_Renderer *render,SDL_Surface *surface , int Xdebut ,int Ydebut , int N , int t[N][N],int m[N+1][N+1]);
void ContinuerD_PARTIE2(int N,int Mat_verCasesRemplites[N][N],int t_machine[N][N],int m[N+1][N+1],SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut);
void ContinuerD_PARTIE3(int N,int Mat_verCasesRemplites[N][N],SDL_Renderer *render2,SDL_Surface *surface,int Xdebut,int Ydebut,int t_machine[N][N],int m[N+1][N+1]);

void Replay(SDL_Renderer *render,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut, SDL_Window *window );
void ReplayPARTIE2(int N , int m[N+1][N+1] ,SDL_Renderer *render, SDL_Surface *surface, int Xdebut, int Ydebut, SDL_Window *window );
void ReplayPARTIE3(SDL_Renderer *render,int N,int m[N+1][N+1],int t[N][N],SDL_Surface *surface,int Xdebut, int Ydebut, SDL_Window *window );

void Destroy(SDL_Renderer *render2 , SDL_Window *window2);

void trasserlineDG_Machine(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1]);
void trasserlineGD_Machine(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1]);
void trasserlineDG(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1]);
void trasserlineGD(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1]);

void supprimeDG(SDL_Surface *surface,SDL_Renderer *render,int x1,int y1,int x2,int y2,int Xdebut , int Ydebut,int N,int m[N+1][N+1]);

void TracerLigne__TmachineIJ(int I,int J,SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut,int N,int T_machine[N][N],int m[N+1][N+1]);

void Trasser_Rect_Fentere1(int thickness,int xDepart , int yDepart,int Width,int hight,SDL_Renderer *render,int r , int g ,int b );
void placerRectangle(SDL_Renderer *render,int Width , int hight);
void dessiner_le_reste(int N,int Mat_verCasesRemplites[N][N],SDL_Renderer *render,SDL_Surface *surface,int Xdebut,int Ydebut,int t_machine[N][N],int m[N+1][N+1]);
void fonction_Machine_dessine(int N,SDL_Renderer *render , SDL_Surface *surface , int Xdebut , int Ydebut,int t_machine[N][N],int m[N+1][N+1],int Mat_verCasesRemplites[N][N]);

void SDL_RenderPresentBoth(SDL_Renderer *render , SDL_Renderer *render2);
void SDL_RenderClearBoth(SDL_Renderer *render , SDL_Renderer *render2);


void TestFinJeux(int Partie ,int score,int N,int ver[N+1][N+1],int m[N+1][N+1],int t[N][N],bool *quit,SDL_Surface *surface,SDL_Renderer *render,SDL_Renderer *render2,SDL_Window *window,SDL_Window *window2,int Xdebut,int Ydebut);
int TestFinJeuM(int N , int Mat_verCasesRemplites[N][N]);
void Congrats();

void afficheWINNER(SDL_Renderer *render);

#endif // PROJETFONCTIONS_H_INCLUDED