# Brain-Up___Game_Colne
This is my very first project when it comes to game development with a user graphic interface (GUI) , it's made with the C language using SDL library  

You can check out the original game on mobile at Amzaon strore : brain Up https://www.amazon.com/Rationalcell-Brain-Up/dp/B00B2BSF12
please note that this hole project is a clone for a particulare mode of that game not the whole game .
--------------------------------------------------------------------------------------------------------------------------------------

Epilepsy warning : watch out when you quit he game because the screen becomes flashy !! 

---------------------------------------------------------------------------------------------------------------------------------------

HOW TO RUN The Game : 
----
---
 * open either cmd or powerShell and follow these easy 5 steps :
	
	1- cd the downloaded (cloned ) repository
		$ cd ["path to the folder that you download"]
  
	2- make sure that you have the gcc compiler 64bit,  
you can download it at http://winlibs.com choose " GCC 12.2.0 + MinGW-w64 10.0.0 (UCRT) - release 2"  without LLVM/Clang/LLD/LLDB 

you can use this link for instant download : 
  https://github.com/brechtsanders/winlibs_mingw/releases/download/12.2.0-14.0.6-10.0.0-ucrt-r2/winlibs-x86_64-posix-seh-gcc-12.2.0-mingw-w64ucrt-10.0.0-r2.7z
		

	3-  open Cmd or PowerShell and type in this command (make sure that you have already add the gcc to the path varible at System Variables) :
		
		gcc src/main.c src/ProjetFonctions.c -o bin/prog -I include/SDL -I include -L lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
		
	4- now that it's compiled you can lunch the game by typing
		.\bin\prog.exe
	
	5- Enjoy ;) .
