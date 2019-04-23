/*************************************************************************
	> File Name: username_hostname.c
	> Author: yufangze
	> Mail: 205552151@qq.com
	> Created Time: 2019年04月23日 星期二 18时47分19秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char *username;
    char *path;
    char hostname[50];
    username = getenv("LOGNAME");
    path = getenv("PWD");
    gethostname(hostname, sizeof(hostname));
    printf("\033[43;35m%s@%s:%s\033[0m\n", username, hostname, path);
    return 0;
}
