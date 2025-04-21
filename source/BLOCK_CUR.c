#include<processCopy.h>

int  BLOCK_CUR(const char* srcfile,int pronum){
	//1.计算文件大小
	int fd=open(srcfile,O_RDWR);
	int filesize=lseek(fd,0,SEEK_END);
	//2.进程处理文件的大小
	if(filesize%pronum==0){
		return filesize/pronum;
	}else{
		return filesize/pronum+1;
	}

}
