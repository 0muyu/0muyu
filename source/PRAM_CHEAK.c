#include<processCopy.h>

int PRAM_CHEAK(const char* src,int pronum,int argc){
	//1.参数验证
	if(argc<3){
	        perror("pram error\n");
		exit(0);
	}	

	//2.验正 src文件是否存在
	if(access(src,F_OK)!=0){
		perror("src not exists\n");
		exit(0);
	}

	//3.参数数量是否合法
	if(pronum<5||pronum>100){
		perror("pronum is unavalied\n");
		exit(0);
	}

	return 0;
}
