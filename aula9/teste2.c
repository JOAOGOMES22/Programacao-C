int main() {
    char words[30][20];

    words[0][20] = "espinafre";
    words[1][20] = "cereais";
    words[2][20] = "vegetais";
    words[3][20] = "morango";
    words[4][20] = "caqui";
    words[5][20] = "cereja";
    words[6][20] = "abobrinha";
    words[7][20] = "carne";
    words[8][20] = "cogumelo";
    words[9][20] = "laranja";
    words[10][20] = "osso";
    words[11][20] = "coxa";
    words[12][20] = "quadril";
    words[13][20] = "ombro";
    words[14][20] = "ouvido";
    words[15][20] = "calcanhar";
    words[16][20] = "unha";
    words[17][20] = "sangue";
    words[18][20] = "mente";
    words[19][20] = "cabeça";
    words[20][20] = "cobra";
    words[21][20] = "porco";
    words[22][20] = "polvo";
    words[23][20] = "veado";
    words[24][20] = "arraia";
    words[25][20] = "pomba";
    words[26][20] = "chama";
    words[27][20] = "baleia";
    words[28][20] = "chita";
    words[29][20] = "cabrito";

    srand(time(0));
    int randomico = rand() % 21;

    printf("%s", words[randomico][20]);



}