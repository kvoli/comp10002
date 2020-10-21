#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv) {
    int i, j;
    FILE **files;

    if(argc == 1) {
      printf("No file specified\n");
      exit(1);
    } else {
        files = malloc((argc-1)*sizeof(FILE*));
        for(i=0; i<argc-1; i++) {
            files[i] = fopen(argv[i+1], "w");
        }
    }

    while((i=getchar()) != EOF) {
        fprintf(stderr, "%c", i);
        for(j=0; j<argc-1; j++) {
            fprintf(files[j], "%c",i);
        }
    }

    for(i=0; i<argc-1; i++) {
        fclose(files[i]);
    }

    return 0;
}
