#include<processCopy.h>
int main(int argc,char** argv){
	int blocksize,pronum;
	//如果用户没有指定创建的子进程数量默认为5
	if(argv[3]==0){
		pronum=5;
	}else{
		pronum=atoi(argv[3]);
	}
	PRAM_CHEAK(argv[1],pronum,argc);

	blocksize=BLOCK_CUR(argv[1],pronum);

	PROCESS_CREATE(argv[1],argv[2],blocksize,pronum);

	return 0;
}
