#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h> // De base
#include <fcntl.h> // pour lseek
#include <unistd.h> // pour open
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i;
    int debug=0 ;
    if(argc>1) debug=1;
    int f = open("text.txt", O_RDONLY);
    if(f<0) return(84);
    int fsize = lseek(f, 0, SEEK_END);
    if(fsize<1) return(84);
    char* buf = malloc(sizeof(char) * fsize+1);
    lseek(f, 0, SEEK_SET);
    read(f, buf, fsize);
    close(f);
    if(debug==1) for (i=80;i<fsize;i++){ printf("# Debug : Pos %i : %c\n", i , buf[i]);  }

    printf("%s\n", buf);
}
