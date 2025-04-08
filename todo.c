//C program that manages todo lists
//Made by: Xelafree (Alex Freeman)
#include<stdio.h>
#include<time.h>

struct task {
	int status; // 0 for incomplete, 1 for complete
	char title[40]; //holds the name of each task
	//added a coment
	
};

int main(int argc, char* argv[]) {
	struct task tasks[10];
	
	//debug loop printing arguments
	for(int i = 0; i <= argc-1; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
	}
	
	//the main meat of a proccesing loop
	for (int i = 1; i <= argc - 1; i++) {
		if (*argv[i] == '-') {
			printf("Found you!\n");
		} else {
			printf("Not there :(\n");
		}
	}
	
	return 0;
}

	
