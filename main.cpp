#include <iostream>
#include <string>
#include <cstring>
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
void comparaPalavras(char palavra1[10], char palavra2[10], int comparar){
      int comparar = strcmp(palavra1, palavra2);
      if(comparar < 0){
        cout << "A palavra " << palavra1 << " vem antes de " << palavra2 << " na ordem alfabética." <<std::endl;
    } else if(comparar > 0){
        cout << "A palavra " << palavra2 << " vem antes de " << palavra1 << " na ordem alfabética." <<std::endl;
    } else {
        cout << "As palavras " << palavra1 << " e " << palavra2 << " são iguais" <<std::endl;
     
    }
}

int stringArray11(){

    char palavra1[10], palavra2[10];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra1;

    cout << "Digite outra palavra (máx 10 caracteres): ";
    cin >> palavra2;

    comparaPalavras(palavra1, palavra2);
    
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
    stringArray11();
    //stringArray12();
}