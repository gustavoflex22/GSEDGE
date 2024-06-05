# GSEDGE
WOKWI- projeto de edge
Descrição do Projeto
O projeto é baseado no controle de um servo motor com um joystick e o uso de um sensor ultrassônico para a determinação de distância. O LED indica a magnitude da distância medida pelo sensor, pois ele acendem, respectivamente, fornecendo feedback visual. O servo motor é controlado pela posição do joystick, e a distância dos objetos é medida pelo sensor ultrassônico.

Requisitos de Hardware:
Arduino Uno (ou equivalente)
Servo motor (SG90 ou equivalente)
Joystick analógico (2)
Sensor ultrassônico HC-SR04
LED (1)
Buzzer piezoelétrico (1)
Resistores (220Ω para o LED)
Protoboard e fios de conexão

Requisitos de Software:
Arduino IDE (última versão)
Conexões de Hardware
Joystick (Servo Motor)
VCC: Conectado ao pino 5V do Arduino
GND: Conectado ao pino GND do Arduino
VRX (Horizontal): Conectado ao pino A0 do Arduino

Sensor Ultrassônico:
TRIG: Conectado ao pino 4 do Arduino
ECHO: Conectado ao pino 5 do Arduino
VCC: Conectado ao pino 5V do Arduino
GND: Conectado ao pino GND do Arduino

Servo Motor:
SINAL (S): Conectado ao pino 9 do Arduino
VCC: Conectado ao pino 5V do Arduino
GND: Conectado ao pino GND do Arduino

Configuração de Hardware:
Conecte todos os dispositivos conforme indicado na seção de conexões de hardware.
Verifique todas as conexões se estão bem conectadas e apertadas.

Configuração do Software:
Baixe a versão mais recente do Arduino IDE do site oficial.
Inicie a IDE do Arduino e abra um novo sketch.
Copie e cole o código na janela do sketch.
Selecione a placa Arduino correta (Ferramentas> Placa) e a porta correta (Ferramentas> Porta).

Enviar Código:
Clique no botão Enviar (ícone de seta para a direita) para carregar o código no Arduino.

Monitoramento e Teste:
Abra o Monitor Serial no IDE do Arduino (Ferramentas > Monitor Serial) para testar e monitorar leituras de distância.
Use o joystick esquerdo para ajustar a posição do servo motor.
Observe a resposta do LED e do buzzer à distância medida pelo sensor ultrassônico.

Dependências da Biblioteca:
Servo: Para o uso do servo motor, vamos precisar da biblioteca Servo.h. Felizmente, ela é instalada automaticamente com o Arduino IDE.

Informações Muito Úteis sobre o Servo Motor:
O joystick esquerdo controla o servo motor. Ele move a posição do servo de 0 a 180 graus.

Sensor Ultrassônico:
O sensor ultrassônico percebe a distância de um objeto e aciona um LED e um buzzer com base na distância percebida.

LED:
Se a distância for menor que 60 cm, o LED acende.

Este projeto pode ser facilmente dimensionado ou expandido para adicionar mais complexidade, como o controle de muitas articulações, mais sensores, ou a capacidade de se comunicar com outras plataformas de hardware e software. Lembre-se de sempre seguir as regras gerais de segurança ao trabalhar com componentes eletrônicos.
