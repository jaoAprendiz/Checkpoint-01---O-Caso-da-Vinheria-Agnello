// PROGRAMA CONTROLE LUMINOSIDADE COM LDR

int buzzer = 8; // Atribui a porta 8 a variável buzzer
int ledVermelho = 9; // Atribui a porta 9 à variável ledVermelho
int ledAmarelo = 10; // Atribui a porta 10 à variável ledAmarelo
int ledVerde = 11; // Atribui a porta 11 à var
int ldr = A0; // Atribui A0 a variável ldr
int valorLdr = 0; // Leitura inicial do LDR

void setup() {
  Serial.begin(9600); //Inicialização da comunicação serial, com taxa de transferência em 9600 bits por segundo
  pinMode(ldr, INPUT); //Define ldr (pino analógico A0) como saída
  pinMode(buzzer, OUTPUT); // Define buzzer (pino digital 8) como saída
  pinMode(ledVermelho, OUTPUT); // Define ledVermelho (pino digital 9) como entrada
  pinMode(ledAmarelo, OUTPUT); // Define ledAmarelo (pino digital 10) como entrada
  pinMode(ledVerde, OUTPUT); // Define ledVerde (pino digital/analógico 11) como entrada
}

void loop() {
  valorLdr = analogRead(ldr); //Lê o valor do sensor LDR e armazena na variável valorLdr

  if (valorLdr < 100) { // Luminosidade baixa (OK < 100 lux)
    apagarLeds(); // Executa a função apagarLeds
    digitalWrite(ledVerde, HIGH); // Acende o LED verde
  } 
  else if (valorLdr > 100 && valorLdr < 150) { // Luminosidade média (alerta entre 100 e 150 lux)
    apagarLeds(); // Executa a função apagarLeds
    digitalWrite(ledAmarelo, HIGH); // Acende o LED amarelo
  } 
  else { // Luminosidade alta (problema acima de 150 lux)
  	apagarLeds(); // Executa a função apagarLeds
    digitalWrite(ledVermelho, HIGH); // Acende o LED vermelho
    tone(buzzer, 1000); // Toca o buzzer a uma frequencia de 1000Hz
    delay(3000); // Define o tempo de duração do som do buzzer para 3 segundos
    noTone(buzzer); // Desliga o som do buzzer
    delay(2000); // Define o silêncio entre um toque e outro
  }
  
  Serial.print("Valor do LDR: "); // Imprime uma mensagem
  Serial.println(valorLdr); // Imprime a variável valorLdr
}

void apagarLeds() { // Função para apagar todos os leds
  digitalWrite(ledVermelho, LOW); // Desliga o LED vermelho
  digitalWrite(ledAmarelo, LOW); // Desliga o LED amarelo
  digitalWrite(ledVerde, LOW); // Desliga o LED verde
}