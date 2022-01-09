compile: main.c 
	 gcc main.c -o ai

run: ai
	 ./ai

clean: ai
	 rm ai