#include <stdio.h>

int main() {
    FILE *input = fopen("suco.in", "r");
    FILE *output = fopen("suco.out", "w");

    int N, F;
    
    while (1) {
        fscanf(input, "%d %d", &N, &F);
        
        if (N == 0 && F == 0) {
            break;
        }

        double volume = (double)F / (N * 50);  

        fprintf(output, "%.2lf\n", volume);
    }

    fclose(input);
    fclose(output);
    return 0;
}
