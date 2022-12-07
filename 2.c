# include <stdio.h>

int pageSizes();
int main(){

    pageSizes();
    return 0;
}

int pageSizes(){

    int width = 841;
    int height = 1189;
    for(int i = 0; i<=8;i++){
        printf("A%d : %d x %d",i,width,height);
        if(height > width){
            height = height/2;
        }else{
            width = width/2;
        }
    }
    return 0;
}