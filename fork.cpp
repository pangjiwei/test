/*linux�£�*/
 
#include <stdio.h>
#include <unistd.h>
#include <windows.h> 
 
int main() {
    pid_t pid;
    pid = fork();
    if(pid  == 0) //�����ӽ���
    {
        printf("child pid: %d\n", getpid());
    } else {
        printf("pid: %d\n", pid);//�������з����ӽ��̵�pid
        printf("father pid: %d\n", getpid());
    }
}
