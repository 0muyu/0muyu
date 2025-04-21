#include<processCopy.h>

int PROCESS_CREATE(const char* src,const char* dest,int blocksize,int pronum){
	pid_t pid;
	//根据传入参数循环创建子进程数
	int i;
	for(;i<pronum;i++){
		pid=fork();
		if(pid==0){//进入子进程
			break;
		}
	}

	if(pid>0){//是父进程，回收子进程
		 PROCESS_WAIT();//调用函数非阻塞回收

	}else if(pid==0){//是子进程
		//定义子进程任务
		//计算读取 src文件的偏移量
		int pos=i*blocksize;
		char strpos[10];
		char strblocksize[10];
		sprintf(strpos,"%d",pos);
		sprintf(strblocksize,"%d",blocksize);
		execl("/mnt/c/Users/nymph/process/processCopy/mod/copy","copy",src,dest,strpos,strblocksize,NULL);

		
	}else{
		perror("fork process failed");
		exit(0);
	}

	return 0;
}
