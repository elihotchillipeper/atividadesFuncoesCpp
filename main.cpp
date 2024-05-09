#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
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
    condicionais09();
    //condicionais10();
    //condicionais11();
    //condicionais12();
    //condicionais13();
}