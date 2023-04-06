#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void Make_Folder(void)
{
    char* folder_name = "내_폴더";
    int result = mkdir(folder_name, 0777);
    if (result == -1) {
        printf("폴더 생성 실패.\n");
        return -1;
    }
    printf("폴더 생성 성공.\n");
    return 0;
}