#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#define NAME "sfifo.cc"

using namespace std;

int main()
{ char text[80];
int fd;
cout<<"Ввести название каталога"<<endl;
cin>>text;
if((fd=open(NAME, O_WRONLY))==-1) {
    perror("Ошибка открытия клиента");
    return 1;
}
write(fd, text, strlen(text));
close(fd);
return 0;
    
}
