#ifndef DIAGRAMME_H_INCLUDED
#define DIAGRAMME_H_INCLUDED

void genererGraphique() {
    FILE *gnuplotPipe = popen("gnuplot\\bin\\gnuplot.exe -persistent", "w");

    if (!gnuplotPipe) {
        fprintf(stderr, "Erreur lors de l'ouverture du canal Gnuplot.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(gnuplotPipe, "set style data histogram\n");
    fprintf(gnuplotPipe, "set style fill solid\n");
    fprintf(gnuplotPipe, "set xtic rotate by -45\n");
    fprintf(gnuplotPipe, "set style line 1 linecolor rgb 'cyan'\n");
    fprintf(gnuplotPipe, "plot 'data_top_sales.txt' using 2:xticlabels(1) title 'Top Sales' with histogram linestyle 1\n");


    fclose(gnuplotPipe);
}

#endif 
