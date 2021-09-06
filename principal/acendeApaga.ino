/*************************************************************************
 * Acende e apaga os leds de acordo com a letra atual.                   *
 * Chamada na funcao loop.                                              *
**************************************************************************/

void acendeLeds(char letra, short quant_pinos, short pinos[])
{
  short i;
  for(i=0; i<quant_pinos; i++) //percorre a lista de pinos correspondentes
    digitalWrite(pinos[i], HIGH);
}

void apagaLeds(char letra, short quant_pinos, short pinos[])
{
  short i;
  for(i=0; i<quant_pinos; i++) //percorre a lista de pinos correspondentes
    digitalWrite(pinos[i], LOW);
}
