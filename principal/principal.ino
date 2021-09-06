/*************************************************************************
 * Principal. Contem o setup e o loop.                                   *
*************************************************************************/

//declaracao das funcoes usadas
void InicializaAlfabeto(); //inicializa os dados do vetor de structs
void acendeLeds(); //acende os leds da letra atual
void apagaLeds(); //apaga os leds da letra atual
//short leArquivo(short indContFile[], char nome_arquivo[]);
void leArquivo(char nome_arquivo[]);
short identificaCaracter(short caracter);

#include <SD.h>

struct DadosCelulas { // contem os dados de uma letra
  char letra; //ex: A, B, ...
  short quant_pontos; //ex: 1, 2, ...
  short pinos[6]; //ex: {8}, {8, 9} ...
};
DadosCelulas alfabeto[26]; //vetor de structs, armazena os dados de todas as letras do alfabeto

short pt1 = 2;
short pt2 = 3;
short pt3 = 4;
short pt4 = 5;
short pt5 = 6;
short pt6 = 7;
short pinoSS = 10;
File myFile;

void setup() {

  short indContFile[100]; // Contem os indices dos caracteres presentes no arquivo lido.
  pinMode(pt1, OUTPUT); // Ponto 1 (led verde)
  pinMode(pt2, OUTPUT); // Ponto 2 (led vermelho)
  pinMode(pt3, OUTPUT); // Ponto 3 (led azul)
  pinMode(pt4, OUTPUT); // Ponto 4 (led verde)
  pinMode(pt5, OUTPUT); // Ponto 5 (led vermelho)
  pinMode(pt6, OUTPUT); // Ponto 6 (led azul)
  pinMode(pinoSS, OUTPUT);

  Serial.begin(9600); //Enviar e receber dados em 9600 baud

  InicializaAlfabeto();

  short i, tamanho, indCarac; //contador, auxiliar

  tamanho = 0;
//  leArquivo(indContFile, "arquivo.txt");
  leArquivo("arquivo.txt");
//  Serial.print(tamanho);

//  for(i=0; i<tamanho; i++) //percorre
//  {
//    indCarac = indContFile[i];
//
//    Serial.print(indCarac);
//
//    if(indCarac == 32) // verifica se e espaco
//      delay(3000);
//
//    else if(indCarac == -1)
//      delay(3000);
//
////    else
////    {
////      acendeLeds(alfabeto[indCarac].letra, alfabeto[indCarac].quant_pontos, alfabeto[indCarac].pinos); //acende os leds correspondentes a celula atual
////      delay(3000); //espera
////
////      apagaLeds(alfabeto[indCarac].letra, alfabeto[indCarac].quant_pontos, alfabeto[indCarac].pinos); //acende os leds correspondentes a celula atual
////      delay(1000); //espera
////    }
//  }
}

void loop() {

}
