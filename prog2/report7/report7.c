#include <stdio.h>


void sort(int scores[], int size){
    int temp; //値入れ替え用の一時変数
    int i, j;

    printf("scores = ");
    for (i = 0; i<size; i++) {
        printf("%d,",scores[i]);    
    }

    for (i=0; i<size; ++i) {
        for (j=i+1; j<size; ++j) {

            if (scores[i] < scores[j]) {
                temp =  scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    printf("\n");
    printf("result = ");
    for (i = 0; i<size; i++) {
        printf("%d,",scores[i]);    
    }
}


int main(){
    const int size = 6;
    int scores[size] = {0, 60, 70, 100, 90,80};

    sort(scores, size);
    
    return 0;
}