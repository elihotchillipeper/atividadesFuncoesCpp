#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <climits>
using namespace std;


//      EXERCÍCIOS STRINGS & ARRAYS      //


//EXERCÍCIO 01
void imprimirNome(const string nome) {
    cout << "Nome: " << nome << std::endl;
}

int stringArray01() { 
    string nome;

    cout << "Digite seu nome: ";
    cin >> nome;

    imprimirNome(nome);

    return 0;
}


//EXERCÍCIO 02
void imprimeArray(char arrV[5]){

    for(int i = 0; i <= 5; i++){
    cout << arrV[i] <<endl;
}
}

int stringArray02() { 

    char arrV[5] = {'a', 'e', 'i', 'o', 'u'};

    imprimeArray(arrV);

    return 0;
}


//EXERCÍCIO 03
void confereVogal(string letra){
    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "A letra é vogal" <<std::endl;
    } else {
        cout << "A letra é consoante" <<std::endl;
    }
}

int stringArray03(){
    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    confereVogal(letra);

    return 0;
}


//EXERCÍCIO 04

    void imprimePalavra(string palavra){
    cout << "A palavra digitada é: " << palavra <<std::endl;
}

int stringArray04(){
    char palavra[10];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra;

    imprimePalavra(palavra);

    return 0;
}


//EXERCÍCIO 05

void imprimeFrase(char frase[20]){
    cout << "A frase digitada foi: " << frase << std::endl;
}

int stringArray05(){
    char frase[20];

    cout << "Digite uma frase curta: ";
    cin.getline(frase, 20);
    
    imprimeFrase(frase);

    return 0;
}


//EXERCÍCIO 06
void imprimeNumeros(int num[10]){
    for(int i = 1; i < 10; i++) {
        if(num[i] % 2 == 0){
            cout << num[i] << endl;
        }
    }
}

int stringArray06(){
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    imprimeNumeros(numeros);

    return 0;
}


//EXERCÍCIO 07
void imprimeFruta(string fruta[5]){

    cout << "Fruta na 3° posição é: " << fruta[2] <<endl;
}

int stringArray07(){
    string frutas[5] = {"melão", "maçã", "uva", "pêra", "manga"};

    imprimeFruta(frutas);

    return 0;
}


//EXERCÍCIOS 08
void imprimeCor(string cor[7], int num){
    for (int i = 0; i <= 7; i++){
        if(num == i + 1){
            cout << cor[i] << endl;
            i++;
        }
    }

}

int stringArray08(){
    string cores[7] = {"azul", "verde", "rosa", "preto", "amarelo", "branco", "roxo"};
    int n;

    cout << "Digite um número de 1-7: ";
    cin >> n;

    imprimeCor(cores, n);

    return 0;
}


//EXERCÍCIO 09
void imprimeAnimal(char letra, string animal[10]){
    for(int i = 0; i < 10; i++){
        if(letra == animal[i][0]){
            cout << animal[i] <<endl;
        }
        }
    }

int stringArray09(){

    string animal[10] = {"gato", "hamster", "vaca", "boi", "macaco", "pássaro", "tigre", "onça", "crocodilo", "anta"};
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    imprimeAnimal(letra, animal);

    return 0;
}


//EXERCÍCIO 10
void imprimeDiaSemana(string dias[7], int num){
    for (int i = 0; i <= 7; i++){
        if(num == i + 1){
            cout << dias[i] << endl;
            i++;
        }
    }
}

int stringArray10(){

    string dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};
    int n;

    cout << "Digite um número de 1-7: ";
    cin >> n;

    imprimeDiaSemana(dias, n);

    return 0;
}


//EXERCÍCIO 11
void comparaPalavras(char palavra1[10], char palavra2[10]) {
    int comparar = strcmp(palavra1, palavra2);
    if (comparar < 0) {
        cout << "A palavra " << palavra1 << " vem antes de " << palavra2 << " na ordem alfabética." << endl;
    } else if (comparar > 0) {
        cout << "A palavra " << palavra2 << " vem antes de " << palavra1 << " na ordem alfabética." << endl;
    } else {
        cout << "As palavras " << palavra1 << " e " << palavra2 << " são iguais." << endl;
    }
}

int stringArray11() {
    char palavra1[10], palavra2[10];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra1;

    cout << "Digite outra palavra (máx 10 caracteres): ";
    cin >> palavra2;

    comparaPalavras(palavra1, palavra2);

    return 0;
}


//EXERCÍCIO 12
void contaVogais(char frase[20], int vogais = 0){
    for (int i = 0; i <= 20; i++) {
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')vogais++;
    }
        cout << "O número de vogais na frase é: " << vogais <<std::endl;
    
}

int stringArray12(){
    char frase [20];
    int vogal = 0;
    cout << "Digite uma frase: ";
    cin.getline(frase, 20);

    contaVogais(frase, vogal);

    return 0;
}


//EXERCÍCIO 13
void primeiraLetraA(char texto[15]){
    for(int i = 0; i <= 15; i++){
         if(texto[i] == 'a'){
            cout << "Está no carcatere: " << i + 1 << endl;
            i++;
        }
}
}

int stringArray13(){
    char texto[15];

    cout << "Digite um texto: ";
    cin.getline(texto, 15);

    primeiraLetraA(texto);

    return 0;
}


//EXERCÍCIO 14
void invertePalavra(char palavra[10 + 1]){
    int tamanho = strlen(palavra);

    cout << "Palavra invertida: ";

    int i = tamanho - 1;

    while (i >= 0) {
        cout << palavra[i];
        i--;
    }
}

int stringArray14(){
char palavra[10 + 1]; 

    cout << "Digite uma palavra (máximo 10 caracteres): ";
    cin >> palavra;

    int tamanho = strlen(palavra);

    invertePalavra(palavra);

    return 0;
}


//EXERCÍCIO 15
void mudarVogal(char frase[20]){
    for(int i = 0; i <= 20; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            frase[i] = '*';
            i++;
            } 
    }
    cout << "Frase modificada: " << frase << endl;
}

int stringArray15(){
    char frase[20];

    cout << "Digite uma frase (máximo 20 caracteres): ";
    cin >> frase;

    mudarVogal(frase);

    return 0;
}


//EXERCÍCIO 16
void imprimeNomeIdade(string nomes[10], int idades[10]){
    for(int i = 0; i < 10; i++){
        cout << "Nome: " << nomes[i] << " idade: " << idades[i] << endl;
    }
}

int stringArray16(){
    string nomes[10];
    int idades[10];

    cout << "Digite os nomes: ";
    cin >> nomes[0] >> nomes[1] >> nomes[2] >> nomes[3] >> nomes[4] >> nomes[5] >> nomes[6] >> nomes[7] >> nomes[8] >> nomes[9];

    cout << "Digite as respectivas idades: ";
    cin >> idades[0] >> idades[1] >> idades[2] >> idades[3] >> idades[4] >> idades[5] >> idades[6] >> idades[7] >> idades[8] >> idades[9];

    imprimeNomeIdade(nomes, idades);

    return 0;   
}


//EXERCÍCIO 17
void imprimeProdutoPreco(string produtos[20], float precos[20]){
    for(int i = 0; i < 20; i++){
         cout << "Produto: " << produtos[i] << " preço: " << precos[i] << endl;
    }
}

int stringArray17(){
    string produtos[20];
    float precos[20];

    cout << "Digite os produtos: ";
    for(int i = 0; i < 20; i++){
        cin >> produtos[i];
    }
    
    cout << "Digite os respectivos precos: ";
    for(int i = 0; i < 20; i++){
        cin >> precos[i];
    }
    
    imprimeProdutoPreco(produtos, precos);

    return 0;
}


//EXERCÍCIO 18
void ordemAlfabetica(string cidades[5], int tamanhoArray){
    sort(cidades, cidades + tamanhoArray); // sort deixa em ordem alfabética

        cout << "Cidades em ordem alfabética: ";
    for (int i = 0; i < tamanhoArray; i++) {
        cout << cidades[i] << endl;}
}

int stringArray18(){
    const int tamanhoArray = 5;
    string cidades[tamanhoArray];

    cout << "Digite o nome de 5 cidades: ";
    for (int i = 0; i < 5; i++) {
        getline(cin, cidades[i]);
    }

    ordemAlfabetica(cidades, tamanhoArray);

    return 0;
}




//      EXERCÍCIOS CONDICIONAIS EM C++      //


//EXERCÍCIO 01
void confereParidade(int numero){
    if(numero % 2 == 0){
       cout << "Esse número é par!" << endl;
    } else {
        cout << "Esse número é ímpar!" << endl;
    }

}

int condicionais01(){
    int num;

    cout << "Digite um número: ";
    cin >> num;

    confereParidade(num);

    return 0;
}


//EXERCÍCIO 02
void conferePositividade(int numero){
    if(numero > 0){
        cout << "Positivo!" << endl;
    } else if (numero == 0){
        cout << "Número é zero, neutro!" << endl;
    } else {
        cout << "Negativo!" << endl;
    }
}

int condicionais02(){
    int num;

    cout << "Digite um número: ";
    cin >> num;

    conferePositividade(num);

    return 0;
}


//EXERCÍCIO 03
void multiploTresCinco(int numero){
    if(numero % 3 == 0 && numero % 5 == 0){
        cout << "Multiplo de 3 e 5!" << endl;
    } else {
        cout << "Não é multiplo de 3 e 5!" << endl;
    }
}

int condicionais03(){
     int num;

    cout << "Digite um número: ";
    cin >> num;

    multiploTresCinco(num);

    return 0;
}


//EXERCÍCIO 04
void classificaTriangulo(int n1, int n2, int n3){
    if(n1 == n2 && n2 == n3){
        cout << "Equilátero" << endl;
    } else if (n1 != n2 && n2 != n3 && n3 != n1){
        cout << "Escaleno" << endl;
    } else {
        cout << "Isóscele" << endl;
    }
}

int condicionais04(){
    int lado1, lado2, lado3;

    cout << "Digite o lado 1: " << endl;
    cin >> lado1;

    cout << "Digite o lado 2: " << endl;
    cin >> lado2;

    cout << "Digite o lado 3: " << endl;
    cin >> lado3;

    classificaTriangulo(lado1, lado2, lado3);

    return 0;
}


//EXERCÍCIO 05
void calculadoraSimples(char operacao, double n1, double n2, double resultado){
    switch(operacao){
        case '+':
        resultado = n1 + n2;
        cout << "Resultado: " << resultado <<endl;
        break;
        case '-':
        resultado = n1 - n2;
        cout << "Resultado: " << resultado <<endl;
        break;
        case '*':
        resultado = n1 * n2;
        cout << "Resultado: " << resultado <<endl;
        break;
        case '/':
        if(n2 != 0){
        resultado = n1 / n2;
        cout << "Resultado: " << resultado <<endl;
        } else {
            cout << "Não é possível fazer divisão por zero!" <<endl;
        }
        break;
        default:
        cout << "Operação inválida." <<endl;
        break;
    }
    }

int condicionais05(){
    char operacao;
    double n1, n2, resultado;

    cout << "Escolha a operação (+, -, * ou /): ";
    cin >> operacao;

    cout << "Digite o 1° número: ";
    cin >> n1;

    cout << "Digite o 2° número: ";
    cin >> n2;

    calculadoraSimples(operacao, n1, n2, resultado);

    return 0;
}


//EXERCÍCIO 06
void confereAnoBissexto(int ano){
    if(ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0){
       cout << "Ano bissexto!" <<endl;
    } else {
       cout << "Não bissexto!" <<endl;
    }

}

int condicionais06(){
    int ano;

    cout << "Digite um ano: ";
    cin >> ano;

    confereAnoBissexto(ano);

    return 0;
}


//EXERCÍCIO 07
void conversaoTemperatura(char conversao, double temperatura, double resultado){
    switch(conversao){
        case 'C':
        resultado = (temperatura-32)/1.8;
        cout << "Resultado da conversão: " << resultado <<endl;
        break;
        case 'F':
        resultado = (temperatura * 1.8)+32;
        cout << "Resultado da conversão: " << resultado <<endl;
        break;
    }
}

int condicionais07(){
    char conversao;
    double temperatura, resultado;

    cout << "Escolha a conversão (C ou F): ";
    cin >> conversao;

    cout << "Digite a temperatura: ";
    cin >> temperatura;

    conversaoTemperatura(conversao, temperatura, resultado);

    return 0;
}


//EXERCÍCIO 08
void calculaIMC(float peso, float altura, float imc){
    imc = peso / (altura * altura);

   cout << "Seu imc é: " <<  imc << endl;

    if(imc < 18.5){
       cout << "Abaixo do peso." <<endl;
    } else if (imc >= 18.5 && imc < 25){
       cout << "Peso normal." << endl;
    }else if (imc >= 25 && imc < 30){
       cout << "Acima do peso." <<endl;
    }else{
       cout << "Obesidade." <<endl;
    }
}

int condicionais08(){
    float peso, altura, imc;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    calculaIMC(peso, altura, imc);

    return 0;
    }


//EXERCÍCIO 09
void imprimeCoordenada(int x, int y){
    if(x > 0 && y > 0){
        cout << "O ponto " << x << ", " << y << " está no primeiro quadrante." <<endl;
    }else if(x < 0 && y < 0){
        cout << "O ponto " << x << ", " << y << " está no segundo quadrante." <<endl;
    }else if(x > 0 && y < 0){
        cout << "O ponto " << x << ", " << y << " está no terceiro quadrante." <<endl;
    }else if(x == 0 && y == 0){
        cout << "O ponto está na origem." <<endl;
    }
}

int condicionais09(){
    
    int x, y;

    cout << "Insira a coorenada x: ";
    cin >> x;

    cout << "Insira a coorenada y: ";
    cin >> y;

    imprimeCoordenada(x, y);

    return 0;
}


//EXERCÍCIO 10
void verificaSaldoBancario(double retirar){
    double saldo = 100.00;
    double saldoFinal = saldo - retirar;

    if(saldo >= retirar){
        cout << "Pode fazer uma retirada! O valor restante será de: " << saldo << " - " << retirar << " = " << saldoFinal <<endl;
    } else{
        cout << "Saldo insulficiente!" <<endl;
    }

}

int condicionais10(){

    double saldo, retirar, saldoFinal;

    cout << "Qual quantia deseja retirar? ";
    cin >> retirar;

    verificaSaldoBancario(retirar);

    return 0;
}


//EXERCÍCIO 11
void classificaLeads(int leads){
    if(leads <= 5){
        cout << "Quantia baixa!" <<endl;
    } else if(leads >= 6 && leads <= 10) {
        cout << "Quantia espereada." <<endl;
    }else{
        cout << "Quantia alta!" <<endl;
    }
}

int condicionais11(){
    int leads;

    cout << "Leads recebidas: ";
    cin >> leads;

    classificaLeads(leads);

    return 0;
}

 
//EXERCÍCIO 12
void verificaSituacaoAcademica(double nota1, double nota2, double nota3, int presenca){
    
    double media = (nota1 + nota2 + nota3) /3;

    if(media >= 7 && presenca == 100){
       cout << "Aprovado. Parabéns!" <<endl;
    } else if(media >= 7 && presenca >= 75 && presenca < 100){
       cout << "Aprovado." <<endl;
    } else if(media < 7 && media >= 5 && presenca > 75){
       cout << "Recuperação!" <<endl;
    }else if(media < 7 && media >= 5 && presenca < 75){
       cout << "Reprovado!" <<endl;
    }else if(media < 5 && media <= 100){
       cout << "Reprovado!" <<endl;
    }
}

int condicionais12(){

    double nota1, nota2, nota3, media;
    int presenca;

    cout << ("Insira a 1° nota: ");
    cin >> nota1;

    cout << ("Insira a 2° nota: ");
    cin >> nota2;

    cout << ("Insira a 3° nota: ");
    cin >> nota3;

    cout << "Porcentagem de presença: ";
    cin >> presenca;

    verificaSituacaoAcademica(nota1, nota2, nota3, presenca);

    return 0;
}


//EXERCÍCIO 13
void calculaRecuperacao(double notaAtual, double notaRec, int presenca){
    double notaAprovacao = notaRec + notaAtual;

    if(notaAprovacao >= 10 && presenca >= 75){
        cout << "Aprovado!" <<endl;
    } else if(notaAprovacao < 10) {
        cout << "Reprovado!" <<endl;
    } else {
        cout << "Reprovado!" <<endl;
    }
}

int condicionais13(){

    double notaAtual, notaAprovacao, notaRec;
    int presenca;

    cout << "Insira a nota final do aluno: ";
    cin >> notaAtual;

    cout << "Insira a nota do aluno na recuperação: ";
    cin >> notaRec;

    cout << "Porcentagem da presença do aluno: ";
    cin >> presenca;

    calculaRecuperacao(notaAtual, notaRec, presenca);

    return 0;
}




//      EXERCÍCIOS LOOPS & ARRAYS EM C++      //


//EXERCÍCIO 01
void declaraImprimeArrayFor(int array[]){
    for(int i = 0; i < 5; i++){
        cout << array[i] <<std::endl;
    }
}

int arrayCpp01(){
    int array[5] = {1, 2, 3, 4, 5};

    declaraImprimeArrayFor(array);

    return 0;
}


//EXERCÍCIO 02
void declaracaoImpressaoWhile(char array[]){
    for(int i = 0; i < 6; i++){
        cout << array[i] <<std::endl;
    }
}

int arrayCpp02(){
    char array[6] = {'e', 'l', 'i', 's', 'a', '!'};
    declaracaoImpressaoWhile(array);

    return 0;
}


//EXERCÍCIO 03
void imprimeParArray(int array[]){
    for(int i = 1; i < 7; i++){
        cout << array[i] <<std::endl;
        i++;
    }
}

int arrayCpp03(){
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    imprimeParArray(array);

    return 0;
}


//EXERCÍCIO 04
void imprimeMaiorCinco(float array[], int size, int i = 0){
    while (i < size && array[i] < 5)
    {
        i++;
       }
    while (i < size) {
        cout << array[i] << endl;
        i++;
    }
}


int arrayCpp04(){
    float array[8] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5};
    int size = sizeof(array) / sizeof(array[0]);
    imprimeMaiorCinco(array, size);

    return 0;
}


//EXETRCÍCIO 05
void impressaoValoresAtribuidos(int array[]){
    for(int i = 0; i < 10; i++){
        cout << array[i] <<endl;
    }
}

int arrayCpp05(){
    int array[10];

    cout << "Digite 10 números inteiros para o array: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] >> array[6] >> array[7] >> array[8] >> array[9];
    impressaoValoresAtribuidos(array);

    return 0; 
}


//EXERCÍCIO 06
void imprimePropriedadeArray(char array[], int tamanho){
    cout << tamanho << endl;
}

int arrayCpp06(){
    char array[] = {'a', 'b', 'c', 'd', 'e'};
    int tamanho = sizeof(array) / sizeof(array[0]);
    imprimePropriedadeArray(array, tamanho);

    return 0;
}


//EXERCÍCIO 07
void elementosEspecificos(int array[]){
    cout << array[2] <<endl;
    cout << array[5] + array[7] <<endl;
    cout << array[1] - array[0] <<endl;
    if(array[3] > 6){
    cout << array[3] <<endl;
    }
    if(array[0] % 2 == 0){
        cout << array[7] <<endl;
    }
    if(array[3] + array[7] > 22){
        cout << array[0] <<endl;
    }
}

int arrayCpp07(){
   int array[8] = {3, 7, 9, 12, 4, 6, 8, 10};
   elementosEspecificos(array);

    return 0;
}


//EXERCÍCIO 08
void calculaMediaDeDados(float array[]){
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += array[i];
    }

    float media = soma / 10;
    cout << "A média é: " << media <<endl;
}

int arrayCpp08(){
    float array[10];

    cout << "Digite 10 número (inteiros ou não): ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] >> array[6] >> array[7] >> array[8] >> array[9];
    calculaMediaDeDados(array);

    return 0;
}


//EXERCÍCIO 09
void somaElementosArray(int array[]){
    float soma = 0;
    for(int i = 0; i < 10; i++){
        soma += array[i];
    }

    cout << "A soma é: " << soma <<endl;
} 

int arrayCpp09(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    somaElementosArray(array);

    return 0;
}


//EXERCÍCIO 10
void imprimeMultiploTresMaiorDez(int array[]){
    for(int i = 0; i < 8; i++){
        if(array[i] > 10 && array[i] %3 == 0){
            cout << array[i] <<endl;
        }
    }
}

int arrayCpp10(){
    int array[8] = {10, 20, 30, 40, 50, 60, 70 ,80};
    imprimeMultiploTresMaiorDez(array);

    return 0;
}


//EXERCÍCIO 11
void buscaMaxMin(int array[], int maximo, int minimo){
    for(int i = 0; i < 12; i++){
        if(array[i] > maximo){
            maximo = array[i];
        }

        if(array[i] < minimo){
            minimo = array[i];
        }
    }

    cout << "O valor máximo do array é: " << maximo <<endl;
    cout << "O valor mínimo do array é: " << minimo <<endl;
}

int arrayCpp11(){
    int array[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13};
    int maximo = INT_MIN;
    int minimo = INT_MAX;
    buscaMaxMin(array, maximo, minimo);

    return 0;
}


//EXERCÍCIO 12
void mediaPonderadaArray(float notas[], float pesos[]){
    float somaPesos = 0;
    float somaPontos = 0;

    for(int i = 0; i < 5; i++){
        somaPontos += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    float media_final;

    if(somaPesos == 0){
        cout << "Erro: divisão por 0!"<<endl;
    } else {
        media_final = somaPontos / somaPesos;
    }

    cout << "A média é: " << media_final << endl;
}

int arrayCpp12(){
    float notas[5], pesos[5];

    cout << "Digite as 5 notas: ";
    cin >> notas[0] >> notas[1] >> notas[2] >> notas[3] >> notas[4];

    cout << "Digite os 5 pesos: ";
    cin >> pesos[0] >> pesos[1] >> pesos[2] >> pesos[3] >> pesos[4];

    mediaPonderadaArray(notas, pesos);

    return 0;
}







int main(){
    //stringArray01();
    //stringArray02();
    //stringArray03();
    //stringArray04();
    //stringArray05();
    //stringArray06();
    //stringArray07();
    //stringArray08();
    //stringArray09();
    //stringArray10();
    //stringArray11();
    //stringArray12();
    //stringArray13();
    //stringArray14();
    //stringArray15();
    //stringArray16();
    //stringArray17();
    //stringArray18();
    //stringArray19();
    //stringArray20();

    //condicionais01();
    //condicionais02();
    //condicionais03();
    //condicionais04();
    //condicionais05();
    //condicionais06();
    //condicionais07();
    //condicionais08();
    //condicionais09();
    //condicionais10();
    //condicionais11();
    //condicionais12();
    //condicionais13();

    //arrayCpp01();
    //arrayCpp02();
    //arrayCpp03();
    //arrayCpp04();
    //arrayCpp05();
    //arrayCpp06();
    //arrayCpp07();
    //arrayCpp08();
    //arrayCpp09();
    //arrayCpp10();
    //arrayCpp11();
    arrayCpp12();
}