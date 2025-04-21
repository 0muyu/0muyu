#include<processCopy.h>
int parent_task(){
	printf("parent exe bussiness");
	return 0;
}

int PROCESS_WAIT(){
	pid_t zpid;

	while((zpid=waitpid(-1,NULL,WNOHANG))!=-1){
		if(zpid>0){
			printf("wait zombie pid:%d\n",getpid());
		}else{
			parent_task();
			usleep(100000);	
		}
	}
	return 0;
}
