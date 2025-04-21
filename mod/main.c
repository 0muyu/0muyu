#include<processCopy.h>
int main(int argc,char** argv){
	int sfd,dfd;
	int pos=atoi(argv[3]);
	int blocksize=atoi(argv[4]);
	//检测 src文件是否存在
	if((sfd=open(argv[1],O_RDONLY))==-1) 
	perror("open srcfile error");

	//检测 dest文件是否存在
	if((dfd=open(argv[2],O_WRONLY|O_CREAT,0755))==-1)
	perror("open destfile error");

	//初始化 src文件 dest文件 的位置
	lseek(sfd,pos,SEEK_SET);
	lseek(dfd,pos,SEEK_SET);

	char buffer[blocksize];
	bzero(buffer,sizeof(buffer));

	int len;
	len=read(sfd,buffer,sizeof(buffer));
	write(dfd,buffer,len);
	//关闭文件
	close(sfd);
	close(dfd);

	return 0;
}
