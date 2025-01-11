# Projeto SOS Morse

Este projeto tem como objetivo a criação de um sistema para transmitir a mensagem de socorro "SOS" em código Morse utilizando um LED conectado a um microcontrolador (Raspberry Pi Pico) e programado em C. O sistema pisca o LED de acordo com o padrão do código Morse, onde três pontos (.) representam a letra "S" e três traços (-) representam a letra "O".

## Funcionalidades

- **Transmissão do código Morse**: O LED pisca a sequência "SOS" continuamente em código Morse.
  - Ponto (.) = 0,2 segundos
  - Traço (-) = 0,8 segundos
  - Intervalo entre pontos e traços dentro de uma letra = 0,125 segundos
  - Intervalo entre letras = 0,25 segundos
  - Intervalo após o ciclo completo = 3 segundos

## Componentes

- **Placa de Desenvolvimento**: Raspberry Pi Pico
- **LED**: Conectado ao pino GPIO 12 da placa.
- **Cabo USB**: Para alimentação e programação da placa.

## Estrutura do Projeto

- **main.c**: Código principal que controla a transmissão do código Morse.
- **wokwi.toml**: Arquivo de configuração para a simulação no Wokwi.
- **build/**: Diretório contendo os arquivos compilados (.hex e .elf) para carregar na placa.

## Como Executar

### 1. Configuração e Compilação

1. Clone este repositório para o seu computador:

   ```bash
   git clone https://github.com/queirozPatrick/sos_morse

   Navegue até o diretório do projeto:
   
cd seu-repositorio

Compile o código usando a ferramenta de sua escolha (por exemplo, usando o make no terminal ou um IDE como o VS Code com as extensões adequadas para Raspberry Pi Pico).

Gere o arquivo .hex ou .elf.

2. Simulação no Wokwi:
Abra o arquivo wokwi.toml e defina o caminho correto para os arquivos .hex ou .elf gerados pela compilação.

Carregue o arquivo de configuração no Wokwi:

Selecione a placa correta (Raspberry Pi Pico).
Inicie a simulação para ver o LED piscando em Morse.

3. Executando na Placa Física:
Conecte o Raspberry Pi Pico à sua máquina via USB.

Transfira o arquivo .uf2 gerado para o Raspberry Pi Pico, copiando-o para a unidade montada.
O LED começará a piscar automaticamente, transmitindo a mensagem "SOS".

Como Funciona:
O código foi escrito em C para Raspberry Pi Pico, utilizando a biblioteca pico/stdlib.h para controlar os pinos GPIO e as funções de tempo. A lógica de transmissão do código Morse é implementada nas funções que controlam o piscar do LED de acordo com os tempos e intervalos definidos.

Contribuições:
Sinta-se à vontade para contribuir com este projeto! Se você encontrar bugs, melhorias ou ideias novas, crie uma issue ou envie um pull request.
