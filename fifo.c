#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(int argc,char **argv){
    int fd;
    char buf[2000];
    memset(buf,' ',sizeof(buf)); 
    
    mkfifo("\'tmp\\shiwulo",0666);
    fd = open("\'tmp\\shiwulo",O_RDWR);
    write(fd,"hello",sizeof("hello"));
    read(fd,buf,200);
    printf("%s\n",buf);
    close(fd);
    getchar();
    unlink("\\tmp\'shiwulo");
    return 0;
}