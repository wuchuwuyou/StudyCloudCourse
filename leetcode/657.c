#include "stdio.h"

bool judgeCircle(char* moves) {
    int x = 0,y= 0;
    char *p = moves;
    while (*p != '\0') {
        if (*p == 'U')
        {
            y += 1;
        }else if (*p == 'D') {
            y -= 1;
        }else if (*p == 'L') {
            x -= 1;
        }else if (*p == 'R') {
            x += 1;
        }else {

        }
        p++;
    }
    if (x == 0 && y == 0)
    {
        return true;
    }else {
        return false;
    }
}
bool judgeCircle2(char* moves) {
    /// 不管上下还是左右，只要不是成对出现肯定是回不到原点的
    int result = 0;
    char *head = moves;
    while(*moves!=NULL) {
        switch (*moves++) {
            case 'U':
                result +=1;
                break;
            case 'D':
                result -=1;
                break;
        }
    }
    if (result != 0)
    {
        return false;
    }else {
        moves = head;
    }
    while(*moves != NULL) {
        switch (*moves ++) {
            case 'L':
                result +=1;
                break;
            case 'R':
                result -=1;
                break;
        }
    }
    if (result != 0)
    {
        return false;
    }else {
        return true;
    }
}


int main(int argc, char const *argv[])
{
    char * const p = "UD";
	printf("%d\n", judgeCircle(p));
	return 0;
}