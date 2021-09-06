/*************************************************************************
 * Inicializa o "alfabeto" (vetor de structs com os dados de cada letra).*
 * Chamada na funcao loop.                                               *
**************************************************************************/

void InicializaAlfabeto() {
  short i, j, aux=0; //contadores
  short letra_ascii=65, dezena=0; //codigo da letra na tabela ascii, variavel auxiliar
  short pinosA_J[26][6] = {{pt1}, {pt1, pt2}, {pt1, pt4}, {pt1, pt4, pt5}, {pt1, pt5}, {pt1, pt2, pt4},
                      {pt1, pt2, pt4, pt5}, {pt1, pt2, pt5}, {pt2, pt4}, {pt2, pt4, pt5}}; //pinos usados para as 10 primeiras letras

  for(i=0; i<26; i++) //percorre o "alfabeto"
  {
    //nome da letra
    alfabeto[i].letra = letra_ascii; //inicializa a letra (tabela ascii)

    //inicializa a quantidade de pontos de cada letra
    //letras A, K, U, a, k, u
    if(letra_ascii == 65+dezena || letra_ascii == 97+dezena)
          alfabeto[i].quant_pontos = 1+dezena/10;

    //letras B, C, E, I, L, M, O, S, V, W, Y
    if(letra_ascii == 66+dezena || letra_ascii == 67+dezena || letra_ascii == 69+dezena || letra_ascii == 73+dezena ||
      letra_ascii == 98+dezena || letra_ascii == 99+dezena || letra_ascii == 101+dezena || letra_ascii == 105+dezena)
            alfabeto[i].quant_pontos = 2+dezena/10;

    //D, F, H, J, N, P, R, T, X, Z
    if(letra_ascii == 68+dezena || letra_ascii == 70+dezena || letra_ascii == 72+dezena || letra_ascii == 74+dezena ||
      letra_ascii == 100+dezena || letra_ascii == 102+dezena || letra_ascii == 104+dezena || letra_ascii == 106+dezena)
            alfabeto[i].quant_pontos = 3+dezena/10;

    //G, Q
    if(letra_ascii == 71+dezena || letra_ascii == 103+dezena)
          alfabeto[i].quant_pontos = 4+dezena/10;

    //inicializa pinos de cada letra


    //para todas as letras
    for(j=0; j<alfabeto[i].quant_pontos; j++)
      alfabeto[i].pinos[j] = pinosA_J[i-dezena-aux][j];

    //para letras K-Z
    if(dezena > 0)
      alfabeto[i].pinos[j] = pt3;
    //para letras U-Z
    if(dezena == 20 || dezena == 46)
      alfabeto[i].pinos[j+1] = pt6;

    //"atualiza" a dezena
    if(i == 9 || i == 19 || i == 35 || i == 45)
      dezena += 10;

    //passa para a próxima letra
    letra_ascii++;
  }
}
