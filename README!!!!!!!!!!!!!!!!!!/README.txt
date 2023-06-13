Epilepsy warning : watch out when you quit he game because the screen becomes flashy !! 

HOW TO RUN The Game : 
----
---

 1- Download GCC compiler 
 	
	- go to http://winlibs.com : 

	- scroll down to "Release versions" 

	- choose the lastest relase "Win64 - Without LLVM/Clang/LLD/LLDB"  Version . 
	
2 -add GCC (bin)  to your PATH system variable -- easy to do .

3 - download on clone the repo

4- open any command line (Cmd, PowerShell, Git Bash) in and download repo 

5 -  follow these easy 2 steps to lunch the game :
	
	Step A :type in this command -->
  		
		gcc src/main.c src/ProjetFonctions.c -o bin/prog -I include/SDL -I include -L lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
		
	Step B : if no errors you can try starting the game by typing --> 
		.\bin\prog.exe
	
	Step C - Enjoy ;) .
 
