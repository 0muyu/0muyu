#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>

//任务量计算
int BLOCK_CUR(const char* src,int pronum);
//参数验证
int PRAM_CHEAK(const char* src,int pronum,int argc);
//多进程创建与重载
int PROCESS_CREATE(const char* src,const char* dest,int blocksize,int pronum); 
//僵尸进程回收
int PROCESS_WAIT(void);
