#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* UC = NULL;
double ID;

void unicode_of(const char* txt, int* uc_array) {
    int len = strlen(txt);
    for (int i = 0; i < len; i++) {
        uc_array[i] = (int)txt[i];
    }
}

char* Encrypt() {
    char txt[1000];
    printf("Encrypt: ");
    
    if (fgets(txt, sizeof(txt), stdin) != NULL) {
        txt[strcspn(txt, "\n")] = '\0';
    }
    
    int final_construct_size = 0;
    
    UC = (int*)malloc(strlen(txt) * sizeof(int));
    unicode_of(txt, UC);
    ID = sqrt(2.0);
    
    char* final = (char*)malloc((strlen(txt) * 50) + 1);
    final[0] = '\0';
    
    char temp_buffer[50];
    
    for (int i = 1; i <= strlen(txt); i++) {
        double RES = 4.0 * pow(sqrt(ID), 1.5);
        long long EST = (long long)round((ID * pow(RES, 2.0)) / (0.2 * ((ID / (double)i) * ID * UC[i - 1])));
        
        sprintf(temp_buffer, "%lld", EST);
        strcat(final, temp_buffer);
    }
    
    free(UC);
    UC = NULL;
    
    return final;
}
