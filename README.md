1. Note: repo root is main, not master

2. Had to run g++ build in vscode first before the build task and launch would work. 

3. Split the exe and SIUnits into a library (so, dll) and link with it.


4. Inspect the .so file address space 
	objdump -TC libSIUnits.so  
	
5. I've seperated the SIUnits and the test App into seperate builds under the project
