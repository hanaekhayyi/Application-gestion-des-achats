#ifndef ANYTHING_H_INCLUDED
#define ANYTHING_H_INCLUDED
#include "anything2.h"


// structs
typedef struct {
    char pseudo[50];
    char password[50];
} Admin;
typedef struct {
    char pseudo[50];
    char password[50];
} Fournisseur;
typedef struct {
    int id;
    char nom[50];
    char prenom[50];
    int quantite_stock_fournisseur;
} Fournisseurfs;
typedef struct {
char nom[20];
char prenom[20];
int  quantite_ajouter;
char date[50];
char four_asso[20];
char categorie_asso[20];

}Bilan;

// functions code
FILE *  file_Admin(){

FILE * file =fopen("log_Admin.txt", "r");
if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier log adm.\n");
        exit(0);}
        return file ;
}
FILE *  file_Fournissuer(){

FILE * file =fopen("log_Fournisseur.txt", "r");
if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier log f .\n");
        exit(0);}
        return file ;
}
FILE *  file_Client(){
FILE * file =fopen("Client.txt", "a+");
if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier log client.\n");
        exit(0);}
        return file ;
}

// section categorie
FILE * file_categorie1(){
    FILE *file = fopen("categorie1.txt", "a+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier catego1 .\n");
        exit(1);
    }
return file ;
}
FILE * file_categorie2(){
    FILE *file = fopen("categorie2.txt", "a+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier catego2.\n");
        exit(1);
    }
return file ;
}
FILE * file_categorie3(){
    FILE *file = fopen("categorie3.txt", "a+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier catego3.\n");
        exit(1);
    }
return file ;
}
// choix de categorie
FILE * choixCategories(int cat ){
    if(cat == 1 ){
        return file_categorie1() ;
}
if(cat == 2 ){
    return file_categorie2() ;
}
if(cat == 3 ){
    return file_categorie3() ;}

}
// files verification de stock
FILE * file_categorie1_v(){
    FILE *file = fopen("categorie1verif.txt", "w+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier verif_cat1 .\n");
        exit(1);
    }
return file ;
}
FILE * file_categorie2_v(){
    FILE *file = fopen("categorie2verif.txt", "w+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier verif_cat2 .\n");
        exit(1);
    }
return file ;
}
FILE * file_categorie3_v(){
    FILE *file = fopen("categorie3verif.txt", "w+");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier verif_cat3 .\n");
        exit(1);
    }
return file ;
}
// choix de file verification de stock
FILE * choixCategories_v(int cat ){
    if(cat == 1 ){
        return file_categorie1_v() ;
}
    if(cat == 2 ){
        return file_categorie2_v() ;
}
    if(cat == 3 ){
        return file_categorie3_v() ;}

}

// files stock des fournisseurs
FILE * file_stockf1(){
    FILE *file = fopen("f1s.txt", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier stockf1.\n");
        exit(1);
    }
    return file ;
}
FILE * file_stockf2(){
    FILE *file = fopen("f2s.txt", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier stockf2 . \n");
        exit(1);
    }
    return file ;
}
FILE * file_stockf3(){
    FILE *file = fopen("f3s.txt", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier stockf3.\n");
        exit(1);
    }
    return file ;
}
// choix de file stock des fournisseurs
FILE * choixstockf(Fournisseur fournisseur ){
    if(strcmp(fournisseur.pseudo  , "fournisseur1" ) == 0 ){
        return file_stockf1() ;
}
    if(strcmp(fournisseur.pseudo  , "fournisseur2" ) == 0 ){
        return file_stockf2() ;
}
    if(strcmp(fournisseur.pseudo  , "fournisseur3" ) == 0){
        return file_stockf3() ;}

}

// files bilan generer par fournisseur
FILE * file_bilan1(){
    FILE *file = fopen("bilan_fournisseur1.txt", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier bilan1.\n");
        exit(1);
    }
    return file ;
}
FILE * file_bilan2(){
    FILE *file = fopen("bilan_fournisseur2.txt", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier bilan2.\n");
        exit(1);
    }
    return file ;
}
FILE * file_bilan3(){
    FILE *file = fopen("bilan_fournisseur3.txt", "r");
    if (file == NULL) {
        printf(" Erreur lors de l'ouverture du fichier bilan3.\n");
        exit(1);
    }
    return file ;
}
// choix de fichier bilan
FILE * choixbilan(int cat ){
if(cat == 1 ){
    return file_bilan1() ;
}
if(cat == 2 ){
    return file_bilan2() ;
}
if(cat == 3 ){
    return file_bilan3() ;}

}

// esthetique
void afficherBordureTitre(int longueur) {
    printf("\t\t\t\t");
    for (int i = 0; i < longueur; i++) {
        printf("*");
    }
    printf("\n");
}
void afficherBordureTitre2(int longueur) {

    for (int i = 0; i < longueur-2; i++) {
        printf("-");
    }
    printf("\n");
}
void afficherBordureTitre3(int longueur) {

    for (int i = 0; i < longueur-2; i++) {
        printf("-");
    }
    printf("\n");
}
void afficherTitre(const char *titre) {
    afficherBordureTitre(strlen(titre) + 4);
    printf("\t\t\t\t \x1b[36m %s\x1b[0m \n", titre);
    afficherBordureTitre(strlen(titre) + 4);
}
void afficherTitre2(const char *titre) {
    printf("\x1b[36m%s\x1b[0m\n", titre);
    afficherBordureTitre2(strlen(titre) + 4);
}

void afficherBordureNSpace(int longueur) {
    for (int i = 0; i < longueur; i++) {
        printf("*");
    }
    printf("\n");
}
void afficherBordureTexte(int longueur) {
    for (int i = 0; i < longueur; i++) {
        printf("\x1b[36m-\x1b[0m");
    }
    printf("\n");
}
// generer date
void obtenirDateActu(char date[20]) {
    time_t tempsActuel;
    struct tm *infoTemps;
    time(&tempsActuel);
    infoTemps = localtime(&tempsActuel);
    strftime(date, 20, "%Y-%m-%d|%H:%M:%S", infoTemps);
}
// limiter le saisi entier
int int_dd() {
    int valeur;
    char texte[64];
    int tmp=0;
    while (1) {
    if(tmp==1)
         printf(" ressaisi s'il veut plait :   ");
    if (fgets(texte, sizeof(texte), stdin) == NULL) {
            printf(" \x1b[31m Erreur de saisie \x1b[0m. Veuillez reessayer.\n");
            continue;
        }
    if (sscanf(texte, "%d", &valeur) == 1) {
            break;
        } else {
            printf("\x1b[31m Erreur \x1b[0m: Veuillez saisir un entier valide.\n");
        }
    tmp =1 ;
    }
    return valeur;
}
// affichier poduit Admin
void afficherProduits(choix) {
    FILE *fichier = choixCategories(choix);
    Produit p ;
    printf("%-20s %-20s %-13s %-15s %-15s %-15s\n", "ID", "Nom", "Type", "Prix/unite (en $)   ", "Quantite_actuelle   ", "Quantite_minimale");
    afficherBordureNSpace(130);
    while (fscanf(fichier, "%d %s %s %d %d %d %d\n", &p.id, p.nom, p.prenom, &p.prix, &p.quantite_actuelle, &p.quantite_minimale,&p.topsales) != EOF) {
    printf("%-20d %-20s %-20s %-20d %-20d %-20d\n", p.id, p.nom, p.prenom, p.prix, p.quantite_actuelle, p.quantite_minimale);
    }
    printf("\n");
    getchar();
    getchar();
    fclose(fichier);
}

// nombre des articles dans une  categorie
int obtenirDernierIndi(int choice) {
    FILE *fichier =  choixCategories( choice ) ;

    int dernierIndex = -1;
    Produit p;
    while (fscanf(fichier, "%d %s %s %d %d %d %d", &p.id, p.nom, p.prenom, &p.prix, &p.quantite_actuelle, &p.quantite_minimale,&p.topsales) != EOF) {
        dernierIndex = p.id;
    }

    fclose(fichier);
    return dernierIndex;
}
// lister les clients
void afficherClient(Client client) {

    afficherBordureTexte(60);
    printf("CNI :\x1b[34m %d \x1b[0m\n", client.CNI);
    printf("Nom de famille : \x1b[34m %s\x1b[0m\n", client.nom);
    printf("Prenom : \x1b[34m%s\x1b[0m\n", client.prenom);
    printf("Adresse : \x1b[34m%d %s, %s\x1b[0m\n", client.adress.num_maison, client.adress.quartier, client.adress.ville);
    printf("Numero de telephone : \x1b[34m %s\x1b[0m\n", client.numero);
    afficherBordureTexte(60);
    getchar();

}
void lireEtAfficherDepuisClientFile(){
    FILE *file_c = file_Client() ;
    Client client;
    printf("\n");
    afficherTitre2("LISTE DE NOS CLIENTS :");
    getchar();
    while (fscanf(file_c, "%d %s %s %d %s %s %s %s\n",&client.CNI,client.nom,client.prenom,&client.adress.num_maison,client.adress.quartier,client.adress.ville,client.numero,client.passwd) == 8) {

  afficherClient(client);
    }


    system("cls");
    fclose(file_c);
}

void verification(int choice) {
    FILE *verif = choixCategories_v(choice);
    FILE *file = choixCategories(choice);
    int veriff=0;
    Produit produit;
    afficherTitre2("VERIFICATION DU STOCK");
    while (fscanf(file, "%d %s %s %d %d %d %d\n", &produit.id, produit.nom, produit.prenom, &produit.prix, &produit.quantite_actuelle, &produit.quantite_minimale,&produit.topsales) != EOF) {
        if (produit.quantite_actuelle < produit.quantite_minimale) {
            veriff=1;

            printf("Le produit \x1b[31m %s %s \x1b[0m a depasse la quantite minimale \x1b[31m %d \x1b[0m \n", produit.nom, produit.prenom, produit.quantite_minimale);
            printf("La quantite actuelle du produit est :\x1b[31m %d \x1b[0m\n", produit.quantite_actuelle);
            printf("Saisissez la quantite que vous voulez ajouter par le fournisseur : ");
            printf("\x1b[34m");
            scanf("%d", &produit.quantite_ajouter);
            printf("\x1b[0m");
            while (1) {
                if (produit.quantite_ajouter > (produit.quantite_minimale - produit.quantite_actuelle)) {
                    break;
                } else {
                    printf(" \x1b[31m Erreur\x1b[0m : Veuillez saisir une valeur qui est superieure a la quantite minimale\n");
                    printf("Ressaisissez s'il vous plait : ");
                    printf("\x1b[34m");
                    scanf("%d", &produit.quantite_ajouter);
                    printf("\x1b[0m");
                       }
            }

            char date[20];
            obtenirDateActu(date);
            snprintf(produit.date, sizeof(produit.date), "%s", date);
            fprintf(verif, "%d %s %s %d %s\n", produit.id, produit.nom, produit.prenom, produit.quantite_ajouter, produit.date);
            afficherBordureTexte(60);
           }


 }
            fclose(verif);
            fclose(file);
      if(veriff==0  ){

        printf("Votre stock est a jour \n");
        afficherBordureTexte(30);
}
      else{

        printf("La Liste des Produits manquants sera envoyee a la Boite \n de Reception du Fournisseur concernew.\n");
        afficherBordureTexte(60);

}
getchar();
getchar();
system("cls");
}

void BoiteEmailAdminFournss(int choice) {
    FILE *file_bilan = choixbilan(choice);
    char partie1[20], partie2[20];
    if (file_bilan != NULL) {
        Bilan bilan;
        system("cls");
        fscanf(file_bilan, "%s %s %d %s %s %s\n", bilan.nom, bilan.prenom, &bilan.quantite_ajouter, bilan.four_asso, bilan.categorie_asso ,bilan.date);
        printf("\n");
        printf("\tSubject: \x1b[36m Validation de fournissement des articles liee a <\x1b[34m %s \x1b[36m> \x1b[0m\n\nBonjour Monsieur \x1b[36m Othman \x1b[0m, Mademoiselle \x1b[36m Hanae \x1b[0m :\n\nVoici le bilan des articles que nous avons fournis :\n",bilan.categorie_asso);
        printf("\n");
        printf("%-20s %-20s %-13s\n", "Nom", "Prenom", "Quantite Ajouter");
        printf("\x1b[36m");
        afficherBordureNSpace(58);
        printf("\x1b[0m");
        rewind(file_bilan);

        while (fscanf(file_bilan, "%s %s %d %s %s %s\n", bilan.nom, bilan.prenom, &bilan.quantite_ajouter, bilan.four_asso, bilan.categorie_asso, bilan.date) == 6) {
            printf("%-20s %-20s %-15d\n", bilan.nom, bilan.prenom, bilan.quantite_ajouter);
    }

        printf("\n");
        printf("Cordialement,\n\t Envoyer Par:  \x1b[36m %s  \x1b[0m\n",bilan.four_asso);
        printf("  \t\t Le : ");

        if(sscanf(bilan.date, "%[^|]|%s", partie1, partie2) == 2) {
        printf(" \x1b[36m %s ,  ", partie1);
        printf("%s \x1b[0m \n", partie2);
    }
        getchar();
        getchar();
        fclose(file_bilan);
    }
}


 void Menu_Gestion(int choice){

  int choix;
    do {

        afficherTitre2("GESTION DE CATEGORIE");
        afficherBordureTexte(60);
        printf("1. Afficher les produits\n");
        printf("2. Ligne de Produits \n");
        printf("3. Verification du stock \n");
        printf("4. Boite Mail \n");
        printf("5. Revenir au Menu Admin \n");
        printf("6. Revenir au Menu Principal \n");
        printf("7. Quitter\n");
        afficherBordureTexte(60);
        printf("Veuillez entrer votre choix: ");
        printf("\x1b[34m");
        scanf("%d", &choix);
        printf("\x1b[0m");
        switch (choix) {
            case 1:
                {
                system("cls");
                afficherProduits(choice);
                break;}
            case 2: {
                system("cls");
                int dernierIndex = obtenirDernierIndi(choice);
                printf(" Le nombre des Article dans cette categorie  est : \x1b[36m %d \x1b[0m\n", dernierIndex);
                printf("\n");
                break;}
             case 3:
                {
                system("cls");
                verification(choice);
                break;}
                case 5:
                {
                system("cls");
                menu_choix();

                break;}
             case 6:
                 {
                system("cls");
                Menu_acces();
                break;}
                 case 4:
                 {
                system("cls");
                BoiteEmailAdminFournss( choice );
                break;}
                case 7:
                system("cls");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 7);

 }

void lireFeedbacks() {
    // Ouverture du fichier feedback.txt
    FILE *fichierFeedback = fopen("feedback.txt", "r");
    printf("\n");
    afficherTitre2(" \x1b[36m===\x1b[0m FEEDBACKS \x1b[36m===\x1b[0m");
    if (fichierFeedback != NULL) {
        char feedback[1000], commentaire[500];
    Client client ;
        // Lire et afficher chaque ligne du fichier
         getchar();
        while (fscanf(fichierFeedback, "%s %s %s %[^\n]", client.nom, client.prenom, feedback, commentaire) == 4) {
            afficherBordureTitre2(40);
            printf("Nom Complet : \x1b[34m %s %s \x1b[0m\n", client.nom ,client.prenom );

            printf("Feedback: \x1b[33m%s \x1b[0m\n", feedback);

            // Verifier si un commentaire exist
            if (commentaire[0] != '\0') {
                printf("Commentaire: %s\n", commentaire);
            }
            afficherBordureTitre2(40);

            printf("\n");
            getchar();

        }

        fclose(fichierFeedback);
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}


void afficherMenuCategorie() {
    afficherTitre("MENU");
    afficherBordureTexte(60);
    printf(" 1. Categorie 1: Electronique\n");
    printf(" 2. Categorie 2: Meuble\n");
    printf(" 3. Categorie 3: Vetement\n");
    printf(" 4. Liste des clients \n");
    printf(" 5. Historique des commandes \n");
    printf(" 6. Statistique sur les Achats \n");
    printf(" 7. Voir FEEDBACKS \n");
    printf(" 8. Courrier des Reclamations  \n");
    printf(" 9. Afficher Top Sales \n");
    printf(" 10. Revenir au menu precedent\n");
    afficherBordureTexte(60);
}
int choisirCategorie() {
    int choix;
    printf("Choisissez une categorie (1-9): ");
     printf("\x1b[34m");
    scanf("%d", &choix);
     printf(" \x1b[0m");
    return choix;
}



void afficherStatistique() {
     FILE* histo = fopen("historique_comm.txt", "r");
    if (histo == NULL) {
        printf("Le fichier HC.txt n'existe pas ou ne peut pas être ouvert.\n");
        return;
    }
    int numeroCommandes=0 ;
    historique his ;
    char c ;
    int montant;
    Client client;
    int total = 0;
    float Net;
    char date_debut1[20], date_debut2[20];
    char date_fin1[20], date_fin2[20];
    char ligne[255];
getchar();
   while(fscanf(histo,"%c %d %d %d %s %s %s %s %s %s %d\n",&c,&his.id_com,&his.client.CNI,&his.prixtotal,his.client.nom,his.client.prenom,his.date_com1,his.date_com2,his.dat_final1,his.dat_final2,&his.nmbr_art)==11);
    strcpy(date_debut1, his.date_com1);
    strcpy(date_debut2, his.date_com2);
    rewind(histo);

 while(fscanf(histo,"%c %d %d %d %s %s %s %s %s %s %d\n",&c,&his.id_com,&his.client.CNI,&his.prixtotal,his.client.nom,his.client.prenom,his.date_com1,his.date_com2,his.dat_final1,his.dat_final2,&his.nmbr_art)==11){
   int  i=0;
total = total + his.prixtotal ;
numeroCommandes++ ;
  while(i<his.nmbr_art){
fgets(ligne,255,histo);
 i++ ;
 }

 }
     strcpy(date_fin1, his.dat_final1);
    strcpy(date_fin2, his.dat_final2);

     printf("\n\n\t\t----------------------------- \x1b[36mStatistique\033[0m -------------------------------\n\n");
    printf("Nombre total de commandes \t\t:  \x1b[36m%d \x1b[0m\n", numeroCommandes);
    printf("Periode \t\t\t\t: De \x1b[36m%s\033[0m    A  \x1b[36m%s\033[0m \n", date_debut1, date_fin1);
    printf("Montant total de toutes les commandes  \t: \x1b[36m%d$\033[0m\n", total);
    Net = total - 20 * numeroCommandes;
    Net = Net * 0.3;
    printf("Montant Net = ( Prix de Vente - Cout de Livraison ) x ( La Marge Beneficiare ) = \033[1;34m%.2f$\033[0m \n", Net);

afficherBordureTitre2(95);
    getchar();

}



void HistoriqueCommande() {
    FILE* histo=fopen("historique_comm.txt","r");

    if (histo == NULL) {
        printf("Le fichier HC.txt n'existe pas ou ne peut pas être ouvert.\n");
        return;
    }
    historique his;
    char c ;
    printf("\n\t\t------------------------ \x1b[36mHISTORIQUE DES COMMANDES \x1b[0m  -------------------------\n\n");

getchar();
char ligne[255];
 while(fscanf(histo,"%c %d %d %d %s %s %s %s %s %s %d\n",&c,&his.id_com,&his.client.CNI,&his.prixtotal,his.client.nom,his.client.prenom,his.date_com1,his.date_com2,his.dat_final1,his.dat_final2,&his.nmbr_art)==11){
   int  i=0;
       afficherBordureTitre2(60);
           printf("\n ID de commande\t\t\t : \x1b[34m%d \x1b[0m\n",his.id_com);
           printf(" Le nom complet du Client\t :\x1b[34m %s %s  \x1b[0m \n",his.client.nom , his.client.prenom);
           printf(" Prix Total\t\t\t : \x1b[32m%d \x1b[0m$\n",his.prixtotal);
           printf(" Le nombre des articles achetees : \x1b[34m%d  \x1b[0m \n",his.nmbr_art);
           printf(" Date de commande \t\t :\x1b[34m %s %s \x1b[0m\n",his.date_com1,his.date_com2);
       afficherBordureTitre2(60);


while(i<his.nmbr_art){
fgets(ligne,255,histo);
 i++ ;
 }
getchar();


 }
system("cls");
    fclose(histo);
}


void Triselection(Produit *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j].topsales > arr[maxIndex].topsales) {
                maxIndex = j;
            }
        }


        Produit temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}


void afficherTableauTriee(const Produit *arr, int n, const char *nomFichier) {
    printf("\n-----------------------------  \x1b[36m Top Produits \x1b[34m %s \x1b[0m ------------------------\n", nomFichier);

    printf("%-6s%-20s%-20s%-10s\n", "ID", "Nom", "Type", "TopSales");

    for (int i = 0; i < 3; i++) {
        printf("%-6d%-20s%-20s%-10d\t", arr[i].id, arr[i].nom, arr[i].prenom, arr[i].topsales);

        for (int j = 0; j < arr[i].topsales/2 ; j++) {
            printf("\x1b[33m*\x1b[0m");
        }

        printf("\n");
    }

    printf("\x1b[36m-----------------------------------------------------------------------------\x1b[0m\n");

    printf(" Tapez une boutton quelconque pour revenir au menu d'Admin ");
    getchar();
    genererGraphique();
    getchar();
    system("cls");
    menu_choix();


}


void topProd1(const char *nomFichier) {
    int cont = 0;
    Produit A;
    Produit topSales[3];

    FILE *fichierc = fopen(nomFichier, "rt");
    if (fichierc == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        exit(1);
    }

    while (fscanf(fichierc, "%d%s%s%d%d%d%d", &A.id, A.nom, A.prenom, &A.prix, &A.quantite_actuelle, &A.quantite_minimale, &A.topsales) != EOF) {
        cont++;
    }

    rewind(fichierc);

    Produit P[cont];
    int i = 0;

    while (fscanf(fichierc, "%d%s%s%d%d%d%d", &A.id, A.nom, A.prenom, &A.prix, &A.quantite_actuelle, &A.quantite_minimale, &A.topsales) != EOF) {
        P[i] = A;
        i++;
    }

    // Tri du tableau par rapport a topsales en utilisant le tri par sélection
    Triselection(P, cont);

    FILE *dataFile = fopen("data_top_sales.txt", "w");
    if (!dataFile) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier de données.\n");
        exit(EXIT_FAILURE);
    }

    // Stocker les top sales globalement
    for (int i = 0; i < 3; i++) {
        fprintf(dataFile, "%s %d\n", P[i].nom, P[i].topsales);
    }

    fclose(dataFile);

    // Affichage du tableau
    afficherTableauTriee(P, 3,nomFichier);


    fclose(fichierc);




}


void TopPRODUIT(){
    int choix;
printf("\n\x1b[36m--------------------------------- Top Produits  ----------------------------\x1b[0m\n");
printf("       1- Electronique\n");
printf("       2- Meuble\n");
printf("       3- Vetement\n");
printf("       *- Sortir\n");
printf("\x1b[36m-----------------------------------------------------------------------------\x1b[0m\n");

printf(">>> ");
choix=getIntInput();
switch (choix) {
        case 1:
            topProd1("categorie1.txt");
            break;
        case 2:
            topProd1("categorie2.txt");
            break;
        case 3:
            topProd1("categorie1.txt");
            break;
        default:
            break;
}

}
void menu_choix(){
    while (1) {
        afficherMenuCategorie();
        int choix = choisirCategorie();

        switch (choix) {
            case 1:
                 {
                system("cls");
                afficherTitre("Categorie Electronique");
                printf("\n");
                Menu_Gestion(choix);
                break;}

            case 2:
                 {
                system("cls");
                afficherTitre("Categorie Meuble");
                printf("\n");
                Menu_Gestion(choix);
                break;}

            case 3:
               {
                system("cls");
                afficherTitre("Categorie Vetement");
                printf("\n");
                Menu_Gestion(choix);
                break;}

            case 4: {
                system("cls");
                lireEtAfficherDepuisClientFile();
               break;
            }
            case 5:
                 {
               system("cls");
               HistoriqueCommande();
               break;
                  }
                   case 6:
                 {
                system("cls");
                afficherStatistique();
               break;
                  }
                   case 7:
                 {
                system("cls");
                lireFeedbacks();
               break;
                  }
                     case 8:
                 {
                system("cls");
                lireBoiteReceptionReclaAdmin();
                getchar();
                system("cls");

               break;
                  }
                    case 9:
                 {
               system("cls");
               TopPRODUIT();
               getchar();
               getchar();
                  }
                    case 10:
                 {
               system("cls");
               Menu_acces();
                  }
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
                break;
        }
    }

    return 0;
}
void afficherStockFournisseur( Fournisseur fournisseur ) {
    FILE * file_fs = choixstockf(fournisseur);
    Fournisseurfs fs ;
    afficherTitre2("VOTRE STOCK ");
    printf("\n");
    printf("\x1b[37m");
    printf("%-4s%-20s%-20s%-10s\n", "ID", "Nom", "Prenom", "Quantite");
    printf("\x1b[36m");
    afficherBordureNSpace(58);
    printf("\x1b[0m");
  while (fscanf(file_fs, "%d %s %s %d\n", &fs.id, fs.nom, fs.prenom, &fs.quantite_stock_fournisseur) == 4) {
        printf("%-4d%-20s%-20s%-10d\n", fs.id, fs.nom, fs.prenom, fs.quantite_stock_fournisseur);
    }
printf("\n");
fclose(file_fs);
getchar();
getchar();

}
void   afficherMenu(Fournisseur fournisseur  ) {
   system("cls");
    printf("\t\t   --------------   \x1b[36m WELCOME : \x1b[34m %s  \x1b[0m ------------\n\n",fournisseur.pseudo);

    afficherTitre2("MENU GESTION ");
    printf(" 1. Voir Votre stock \n");
    printf(" 2. Boite de Reception \n");
    printf(" 3. Section de Fournissement \n");
    printf(" 4. Quitter\n");
    afficherBordureTexte(60);
}
FILE *choixstockf_2(Fournisseur fournisseur) {
    if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
        return fopen("f1s.txt", "r");
    } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
        return fopen("f2s.txt", "r");
    } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
        return fopen("f3s.txt", "r");
    } else {
        return NULL;  // Fournisseur non pris en charge
    }
}
void lireFichierVerification(FILE *file_verification) {
    Produit produit;
    while (fscanf(file_verification, "%d %s %s %d %s\n", &produit.id, produit.nom, produit.prenom, &produit.quantite_actuelle, produit.date) == 5) {
        // Afficher les informations
        printf("Produit ID: \x1b[34m%d\x1b[0m \n", produit.id);
        printf("Nom: \x1b[34m%s %s\x1b[0m\n", produit.nom, produit.prenom);
        printf("Quantite ajoutee: \x1b[34m%d\x1b[0m\n", produit.quantite_actuelle);
        printf("Date: \x1b[34m%s\x1b[0m\n", produit.date);
        printf("------------------------------\n");
    }
}
void affichageChargementAdmin() {
    int i;
    for (i = 0; i < 20; i++) {
        printf("\033[1;34m%c\033[0m", '|');
        fflush(stdout);
        usleep(100000*0.2);

        printf("\b");
        printf("\033[1;34m%c\033[0m", '/');
        fflush(stdout);
        usleep(100000*0.2);

        printf("\b");
        printf("\033[1;34m%c\033[0m", '-');
        fflush(stdout);
        usleep(100000*0.2);

        printf("\b");
        printf("\033[1;34m%c\033[0m", '\\');
        fflush(stdout);
        usleep(100000*0.2);

        printf("\b");
    }

    printf("\033[1;32m OPERATION SUCCEEDED\033[0m\n");
}


void mettreAJourStock(Fournisseur fournisseur) {
        FILE *file_c = NULL;
        FILE *file_verif = NULL;
        FILE *file_bilan = NULL;
        FILE *file_fs = NULL;
        Bilan bilan;
  afficherTitre2(" SECTION DE FOURNISSAGE ");

        if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
            file_verif = fopen("categorie1verif.txt", "r");
                } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
            file_verif = fopen("categorie2verif.txt", "r");
                    } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
            file_verif = fopen("categorie3verif.txt", "r");
                   }
 if(file_verif != NULL){
         int caractere = fgetc(file_verif);
 if (caractere != EOF) {

        if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
                      file_bilan = fopen("bilan_fournisseur1.txt", "w");
        } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
                    file_bilan = fopen("bilan_fournisseur2.txt", "w");
        } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
            file_bilan = fopen("bilan_fournisseur3.txt", "w");
        }

rewind(file_verif);
        int id, quantite_ajouter;
        char nom[50], prenom[50], date[30];
        char dat_tmp[30];


          while (fscanf(file_verif, "%d %s %s %d %s\n", &id, nom, prenom, &quantite_ajouter, date) == 5){
            Produit produit;
            Fournisseurfs fournis;



        if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
            file_c = fopen("categorie1.txt", "r");
            strcpy(bilan.categorie_asso, "Electronique");
            file_fs = fopen("f1s.txt", "r") ;
        } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
            file_c = fopen("categorie2.txt", "r");
            strcpy(bilan.categorie_asso, "Vetement");
           file_fs = fopen("f2s.txt", "r") ;
        } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
            file_c = fopen("categorie3.txt", "r");
            strcpy(bilan.categorie_asso, "Meuble");
            file_fs = fopen("f2s.txt", "r") ;
        }
        FILE *tmps = fopen("tmps.txt", "a+");
        FILE *tmpc = fopen("tmpc.txt", "a+");


            while (fscanf(file_fs, "%d %s %s %d\n", &fournis.id, fournis.nom, fournis.prenom, &fournis.quantite_stock_fournisseur) == 4) {

                if (id == fournis.id) {
                    fournis.quantite_stock_fournisseur -= quantite_ajouter;
                    fprintf(tmps, "%d %s %s %d\n", fournis.id, fournis.nom, fournis.prenom, fournis.quantite_stock_fournisseur);
                } else {
                    fprintf(tmps, "%d %s %s %d\n", fournis.id, fournis.nom, fournis.prenom, fournis.quantite_stock_fournisseur);
                }
            }

            while (fscanf(file_c, "%d %s %s %d %d %d %d\n", &produit.id, produit.nom, produit.prenom, &produit.prix, &produit.quantite_actuelle, &produit.quantite_minimale,&produit.topsales) == 7) {
                if (id == produit.id) {
                    produit.quantite_actuelle += quantite_ajouter;
                    fprintf(tmpc, "%d %s %s %d %d %d %d\n", produit.id, produit.nom, produit.prenom, produit.prix, produit.quantite_actuelle, produit.quantite_minimale,produit.topsales);



                    char date_act[20];
              obtenirDateActu(date_act);
              snprintf(date_act, sizeof(date_act), "%s", date_act);

                    strcpy(bilan.nom, produit.nom);
                    strcpy(bilan.prenom, produit.prenom);
                    bilan.quantite_ajouter = quantite_ajouter;
                    strcpy(bilan.date, date_act);
                    strcpy(bilan.four_asso, fournisseur.pseudo);
                    fprintf(file_bilan, "%s %s %d %s %s %s\n", bilan.nom, bilan.prenom, bilan.quantite_ajouter, bilan.four_asso, bilan.categorie_asso, bilan.date);
                } else {
                    fprintf(tmpc, "%d %s %s %d %d %d %d\n", produit.id, produit.nom, produit.prenom, produit.prix, produit.quantite_actuelle, produit.quantite_minimale,produit.topsales);
                }
            }



        fclose(file_c);

        fclose(tmpc);
        fclose(tmps);
        fclose(file_fs);


        // Remove and rename files
        if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
            remove("categorie1.txt");
            rename("tmpc.txt", "categorie1.txt");
            remove("f1s.txt");
            rename("tmps.txt", "f1s.txt");
        } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
            remove("categorie2.txt");
            rename("tmpc.txt", "categorie2.txt");
            remove("f2s.txt");
            rename("tmps.txt", "f2s.txt");
        } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
            remove("categorie3.txt");
            rename("tmpc.txt", "categorie3.txt");
            remove("f3s.txt");
            rename("tmps.txt", "f3s.txt");
        }
    }


fclose(file_fs);
fclose(file_bilan);

        if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
            file_verif = fopen("categorie1verif.txt", "w");
        } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
            file_verif = fopen("categorie2verif.txt", "w");
        } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
            file_verif = fopen("categorie3verif.txt", "w");
        }
 fclose(file_verif);
 printf("L'operation est en cours, veuillez patienter ");
affichageChargementAdmin();
 printf("\nUn email a ete envoyee automatiquement dans la boite email d'Admin \n");
 getchar();
 getchar();
 }
 else {

    printf(" Aucune operation n'a ete effectuee (la boite de reception est vide) !! \n ");
getchar();
getchar();
 }

 }

}


void VoirBesoin(Fournisseur fournisseur){

     afficherTitre("Boite Mail");
     afficherTitre2("Liste des Demandes :");


     printf("\n");
      FILE *file_verif = NULL;

           if (strcmp(fournisseur.pseudo, "fournisseur1") == 0) {
      file_verif = fopen("categorie1verif.txt", "r");
           } else if (strcmp(fournisseur.pseudo, "fournisseur2") == 0) {
      file_verif = fopen("categorie2verif.txt", "r");
           } else if (strcmp(fournisseur.pseudo, "fournisseur3") == 0) {
      file_verif = fopen("categorie3verif.txt", "r");
                   }


  if(file_verif != NULL){
     int caractere = fgetc(file_verif);
 if (caractere != EOF) {
        rewind(file_verif);
        int id, quantite_ajouter;
        char nom[50], prenom[50], date[30];
        char dat_tmp[30];
        lireFichierVerification(file_verif);
 }
 else
    printf(" Votre boite de reception est vide maintenant  \n");
  }
  getchar();
  getchar();
 }

int Gestion_fournisseur(Fournisseur fournisseur ) {
    int choix;

    do {

       afficherMenu(fournisseur );
        printf(" Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                system("cls");
                afficherStockFournisseur(fournisseur);
                break;
            case 2:
               system("cls");
               VoirBesoin(fournisseur);
                break;

            case 3:
                system("cls");
                mettreAJourStock(fournisseur);

                break;
             case 4:
                system("cls");
                Menu_acces();
                break;
            default:
                printf("Choix invalide. Veuillez choisir a nouveau.\n");
        }
    } while (choix != 4);
    return 0;
}

void afficherSectionAboutUs() {
  benchmark();
  printf("\n");
   afficherBordureTexte(80);
    printf("\x1b[34mNom de l'entreprise\t\t:\x1b[0m NOZAMA\n");
    printf("\x1b[34mFondateurs\t\t\t:\x1b[0m Othman El Hadrati et Hanae Khayyi\n");
    printf("\x1b[34mDate de creation de l'entreprise:\x1b[0m Le 12 Decembre 2023\n");
    printf("\x1b[34mDescription\t\t\t:\x1b[0m NOZAMA se specialise dans la vente en ligne et \t\t\t\t  la livraison.\n\n");
    printf("Nous sommes dedies a offrir une experience d'achat exceptionnelle.\n");

    afficherBordureTexte(80);
}


void MasquerMotDePasse(char* motDePasse, int taille) {
    int i = 0;
    printf("\x1b[34m");
    while (i < taille - 1) {
        char caractere = _getch();
        if (caractere == '\r' || caractere == '\n') {
            break;
        } else if (caractere == 8 && i > 0) {
            printf("\b \b");
            i--;
        } else {
            motDePasse[i] = caractere;
            printf("*");
            i++;
        }
    }
    motDePasse[i] = '\0';
    printf("\x1b[0m");

}

Client SaisirClient() {
    Client client;
    char confirmationPasswd[20];
    getchar();
printf("\n");

afficherBordureTitre2(20);
afficherTitre2("INSCRIPTION");
    printf("CNI : ");
    while (1) {
        printf("\x1b[34m");
        client.CNI = int_dd();
        printf("\x1b[0m");
        if (client.CNI > 0) {
            break;
        } else {
            printf("\x1b[31m Error\x1b[0m: La valeur de cette case doit etre un entier positif .\n");
            printf("Please re-enter: ");
        }
    }

    printf("Last name : ");
     printf("\x1b[34m");
    scanf("%49s", client.nom);
     printf("\x1b[0m");
    printf("First name : ");
     printf("\x1b[34m");
    scanf("%49s", client.prenom);
     printf("\x1b[0m");
    printf("Address:\n");
    getchar();
    printf(" House number : ");
    while (1) {
        printf("\x1b[34m");
        client.adress.num_maison = int_dd();
         printf("\x1b[0m");
        if (client.adress.num_maison > 0) {
            break;
        } else {
            getchar();
            printf("\x1b[31m Error\x1b[0m: La valeur de cette case doit etre un entier positif .\n");
            printf("Please re-enter: ");
        }
    }


    printf("Enter the name of the neighborhood :");
    printf("\x1b[34m");
    scanf("%49s", client.adress.quartier);
     printf("\x1b[0m");
    printf("Enter the name of the city : ");
    printf("\x1b[34m");
    scanf("%49s", client.adress.ville);
     printf("\x1b[0m");
    getchar();

    printf("Enter YOUR PHONE NUMBER : ");
    printf("\x1b[34m");
    scanf("%19s", client.numero);
     printf("\x1b[0m");
    do {
        printf("Password : ");
        MasquerMotDePasse(client.passwd, sizeof(client.passwd));

        printf("\nConfirm Password : ");
        MasquerMotDePasse(confirmationPasswd, sizeof(confirmationPasswd));


        if (strcmp(client.passwd, confirmationPasswd) != 0) {
            printf("\n\x1b[31m Error\x1b[0m: Passwords do not match. Please try again.\n");
        } else {

            printf("\nConnexion \x1b[32m succes \x1b[0m !\n");
            break;
        }
    } while (1);

    return client;
}
void EnregistrerClient(Client client) {
     FILE*file_c=fopen("Client.txt","a+");
    if (file_c == NULL) {
        printf("Erreur lors de l'ouverture du fichier client.\n");
        return;
    }

    fprintf(file_c, "%d %s %s %d %s %s %s %s \n", client.CNI, client.nom, client.prenom, client.adress.num_maison, client.adress.quartier, client.adress.ville, client.numero ,client.passwd);

    fclose(file_c);
}

bool ClientExiste(int cni) {
    FILE *file_c = fopen("Client.txt", "r");
    if (file_c == NULL) {
        fclose(file_c);
        return false;
    }

    Client client;


    while (fscanf(file_c, "%d", &client.CNI) == 1) {
        if (client.CNI == cni) {
            fclose(file_c);
            return true;
        }


        while (fgetc(file_c) != '\n');
    }

    fclose(file_c);
    return false;
}

// Fonction SignIn
void SignIn() {
    //informations du client
    benchmark0();
    printf("\n");
    Client A=SaisirClient();

    // Verifier si le client existe deja
    if (ClientExiste(A.CNI)) {
        printf("\nThis client already has an account with the same information.\n");
        AccesClient();

    } else {
        // Enregistrer le nouveau client
        EnregistrerClient(A);
        Tmp(A.CNI,A.passwd);
        printf("Connexion \x1b[32m succes\x1b[0m\n");

        TraiterChoixUtilisateur();
    }
}


//**************************************************************
bool VerifierConnexion(int CNI, const char *passwd) {
    FILE *file_c = fopen("Client.txt", "r");
    if (file_c == NULL) {
        printf("aucun client");
        return false;
    }

    Client client;
   while (fscanf(file_c, "%d %s %s %d %s %s %s %s", &client.CNI, client.nom, client.prenom, &client.adress.num_maison,
                  client.adress.quartier, client.adress.ville, client.numero, client.passwd) == 8) {
        if (client.CNI == CNI && strcmp(client.passwd, passwd) == 0) {
            fclose(file_c);
            return true;
        }
    }

    fclose(file_c);
    return false;
}
//****************************************************************************************
// Fonction pour le processus de connexion
void Login() {
    int CNI;
    char passwd[50];
    benchmark0();
    printf("\n");
afficherBordureTitre2(20);
afficherTitre2("LOGIN");
    printf("Username(CNI) : ");
    printf("\x1b[34m");
    scanf("%d",&CNI);
    printf("\x1b[0m");

    printf("Entrez votre mot de passe : ");
    printf("\x1b[34m");
    MasquerMotDePasse(passwd, sizeof(passwd));
    printf("\x1b[0m");
    if (VerifierConnexion(CNI, passwd)) {

        printf("\nConnexion  \x1b[32m succes\x1b[0m .\n");
        // Appeler la fonction MENU
        Tmp(CNI,passwd);
        getchar();
        TraiterChoixUtilisateur();
    } else {
        printf("\nUsername or password  \x1b[31m incorrect \x1b[0m.\n");
        AccesClient();
    }

}




void AccesClient() {

    printf(" \t\t---------------------\x1b[36m BIENVENUE Chez \x1b[0m -----------------\n");
    benchmark0();
    printf("\n");
    printf(" 1 - Sign In\n");
    printf(" 2 - Login\n");
    printf(" 3 - Quitter\n");
    afficherBordureTexte(60);
    int choix;
    do {

        choix = getIntInput();
    } while (choix < 1 || choix > 3);

    switch (choix) {
        case 1:
            system("cls");
            SignIn();
            break;
        case 2:
            system("cls");
            Login();
            break;
        case 3:{
            system("cls");
            printf("\nMerci d'avoir utilise \"NOZAMA\". Au revoir !\n");
            getch();
            Menu_acces();

            break;
            }
        default:
            printf("Choix invalide.\n");

            break;
    }
}

 void Menu_acces(){
  int choix;
    afficherTitre(" MENU GLOBAL");
    afficherBordureTexte(60);
    printf("\n 1 - Acces Admin");
    printf("\n 2 - Acces Fournisseur");
    printf("\n 3 - Acces Client");
    printf("\n 4 - A propos");
    printf("\n * - Quitter\n\n");
    afficherBordureTexte(60);

    printf("\n Entrez votre choix : ");
    printf("\x1b[34m");
    scanf("%d", &choix);
    printf("\x1b[0m");


char user_try[20];
char password[20];
int i ;


    //Admin
    if (choix == 1) {
    system("cls");
    Admin admin;
    int direction =0;
    printf("\n\n");
    afficherTitre("LOGIN ADMIN");
    printf("\n");


     do {
        FILE *file_a = file_Admin();
        afficherBordureTexte(60);
        printf("\n Entrez votre pseudo : ");
        printf("\x1b[34m");
        scanf("%s", user_try);
        printf("\x1b[0m");

        i = 0;
        char ch1;

        printf(" Entrez le mot de passe : ");
        printf("\x1b[34m");

        while (1) {
        ch1 = _getch();

        if (ch1 == 13)
            break;
        else if (ch1 == 8) {
            if (i > 0) {
                printf("\b \b");
                i--;
            }
        } else if (i < sizeof(password) - 1) {
            password[i++] = ch1;
            printf("*");
        }
    }

     password[i] = '\0';
     printf("\n");
     printf("\x1b[0m");

    afficherBordureTexte(60);
        while (fscanf(file_a, "%s %s", admin.pseudo, admin.password) != EOF) {
            if (strcmp(user_try, admin.pseudo) == 0 && strcmp(password, admin.password) == 0) {
                printf("Succes d' \x1b[32m acces \x1b[0m !!\n");
                fclose(file_a);
                system("cls");
                menu_choix();
                direction =1; }}
        fclose(file_a);
        if(direction==0);
        printf(" Acces \x1b[31m refuse \x1b[0m !!\nEssayez a nouveau.\n");

    } while (1);
}
//fournisseur
 else if (choix == 2) {

    system("cls");
    Fournisseur fourni;
    printf("\n\n");
    afficherTitre("LOGIN FOURNISSEUR");
    printf("\n");
    do {
          FILE *file_f = file_Fournissuer();
        afficherBordureTexte(60);
        printf("\nEntrez votre pseudo : ");
        printf("\x1b[34m");
        scanf("%s", user_try);
        printf("\x1b[0m");
        i = 0;
        char ch2;

    printf("Entrez le mot de passe : ");
    printf("\x1b[34m");

    while (1) {
        ch2 = _getch();

        if (ch2 == 13)
            break;
        else if (ch2 == 8) {
            if (i > 0) {
                printf("\b \b");
                i--;
            }
        } else if (i < sizeof(password) - 1) {
            password[i++] = ch2;
            printf("*");
        }
    }

    password[i] = '\0';
    printf("\n");
    printf("\x1b[0m");

    afficherBordureTexte(60);
 while (fscanf(file_f, "%s %s", fourni.pseudo, fourni.password) != EOF) {
            if (strcmp(user_try, fourni.pseudo) == 0 && strcmp(password, fourni.password) == 0) {
                fclose(file_f);

               Gestion_fournisseur(fourni);
            }
        }
        fclose(file_f);

        printf(" Acces \x1b[31m refuse \x1b[0m !!\nEssayez a nouveau.\n");
    } while (1);
}

// client
// client
else if (choix == 3){
  system("cls");
  AccesClient();
}

else if(choix ==4 ){
          system("cls");

afficherSectionAboutUs() ;
getchar();
getchar();
system("cls");
Menu_acces();
}
else {
        printf("\n \x1b[33m Merci pour votre visite \x1b[0m");
        exit(0);}

 }


  void benchmark(){
  printf("\x1b[36m");
    printf("\t\t   _   _ _____  ______  ___  ___  ___  ___    \n");
    usleep(300000);
    printf("\t\t  | \\ | |  _  ||___  / / _ \\ |  \\/  | / _ \\   \n");
    usleep(300000);
    printf("\t\t  |  \\| | | | |   / / / /_\\ \\| .  . |/ /_\\ \\  \n");
    usleep(300000);
    printf("\t\t  | . ` | | | |  / /  |  _  || |\\/| ||  _  |  \n");
    usleep(300000);
    printf("\t\t  | |\\  \\ \\_/ /./ /___| | | || |  | || | | |  \n");
    usleep(300000);
    printf("\t\t  \\_| \\_/\\___/ \\_____/\\_| |_/\\_|  |_/\\_| |_/ \n");
    usleep(300000);
    printf("\x1b[0m");
    }
     void benchmark0(){
  printf("\x1b[36m");
    printf("\t\t   _   _ _____  ______  ___  ___  ___  ___    \n");
    printf("\t\t  | \\ | |  _  ||___  / / _ \\ |  \\/  | / _ \\   \n");

    printf("\t\t  |  \\| | | | |   / / / /_\\ \\| .  . |/ /_\\ \\  \n");

    printf("\t\t  | . ` | | | |  / /  |  _  || |\\/| ||  _  |  \n");

    printf("\t\t  | |\\  \\ \\_/ /./ /___| | | || |  | || | | |  \n");

    printf("\t\t  \\_| \\_/\\___/ \\_____/\\_| |_/\\_|  |_/\\_| |_/ \n");

    printf("\x1b[0m");
    }
#endif // ANYTHING_H_INCLUDED
