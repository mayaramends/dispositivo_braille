/*************************************************************************
 * Essa funcao ainda nao esta pronta. O objetivo dela e verificar se o   *
 * caracter lido e um numero, letra ou outro.                            *
 * Chamada na funcao leArquivo.                                          *
**************************************************************************/


short identificaCaracter(short caracter) {
  short i=0;

  if(caracter >= 65 && caracter <= 90) // Letras maiusculas
  {
    i = caracter - 65; // Calcula indice do caracter no vetor de letras
    
    Serial.write(" Caracter encontrado, posicao: ");
    Serial.println(i);
    return i;
  }

  else if(caracter >= 97 && caracter <= 122) // Letras minusculas
  {
    i = caracter - 65 - 32; // Calcula indice do caracter no vetor de letras
    Serial.write(" Caracter encontrado, posicao: ");
    Serial.println(i);

    Serial.write(" Quantidade de pontos: ");
    Serial.println(alfabeto[i].quant_pontos);

    Serial.write(" Caracter: ");
    Serial.println(alfabeto[i].quant_pontos);

    Serial.write(" Quantidade de pontos: ");
    Serial.println(alfabeto[i].letra);
    
    return i;
  }

  else
  {
//    Serial.write("Caracter nao identificado!");
    return -1;
  }
}
