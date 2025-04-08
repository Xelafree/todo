//C program that manages todo lists
#include<stdio.h>
#include<time.h>

struct task {
	int status; // 0 for incomplete, 1 for complete
	char title[40]; //holds the name of each task
	//added a coment
	
};

int main(int argc, char* argv[]) {
	struct task tasks[10];
	scanf("%39[0-9a-zA-Z ]", tasks->title);
	printf("%d %s\n", tasks[0].status, tasks[0].title);
	return 0;
}
	
