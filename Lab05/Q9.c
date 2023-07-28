#include <stdio.h>
int main(){
    int count=0;
    char alp;
    while (count<=25){
        alp = 'A'+count;
        printf("%c = %d\n", alp, 'A'+count);
        count++;
    }

}
