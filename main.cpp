#include "my_ntohl.h"
#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    
    if (argc < 3){
        printf("usage : add-nbo <file1> <file2>");
    }
    else{
        uint32_t n1 = 0;
        uint32_t n2 = 0; 

        FILE *fp1 = fopen(argv[1], "rb");
        FILE *fp2 = fopen(argv[2], "rb");
        
        fread(&n1, 1, 4, fp1);
        fread(&n2, 1, 4, fp2);

        fclose(fp1);
        fclose(fp2);

        n1 = my_ntohl(n1);
        n2 = my_ntohl(n2);

        printf("%d(%#x) + %d(%#x) = %d(%#x)\n", n1, n1, n2, n2, n1+n2, n1+n2);
        return 0;
    }

}