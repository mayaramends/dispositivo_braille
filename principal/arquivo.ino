void leArquivo(char nome_arquivo[]){
  if (SD.begin()) { // Inicializa o SD Card
    Serial.println("SD Card pronto para uso."); // Imprime na tela
  }

  else {
    Serial.println("Falha na inicialização do SD Card.");
    return;
  }

  myFile = SD.open("arquivo.txt"); // Abre o Arquivo

  if (myFile) {
    Serial.println("Conteúdo do Arquivo:"); // Imprime na tela

    while (myFile.available()) { // Exibe o conteúdo do Arquivo
      short caracter = myFile.read();
      Serial.write(caracter);
//      short pos_caracter = identificaCaracter(caracter);
//      Serial.println(pos_caracter);
    }

    myFile.close(); // Fecha o Arquivo após ler
  }

  else {
    Serial.println("Erro ao Abrir Arquivo .txt"); // Imprime na tela
  }
}
