# Super Trunfo - Comparação de Cartas de Cidades
Este é um jogo de Super Trunfo implementado em C, onde o jogador pode comparar duas cartas com base em diversos atributos de cidades ou países, como população, PIB, área, entre outros.
O jogo permite escolher dois atributos diferentes para comparação e exibe o resultado baseado nesses atributos.

## Funcionalidades

O jogo possui as seguintes funcionalidades:
  - Cadastro das Cartas: O jogador fornece os dados de duas cartas (como o nome da cidade, população, PIB, etc.).
  - Comparação de Atributos: O jogador escolhe os atributos para comparar, como população, PIB, área, pontos turísticos ou densidade populacional.
  - Soma dos Atributos: Após a comparação de dois atributos, é calculada a soma dos valores desses atributos para determinar a carta vencedora.
  - Empate: Caso a soma dos atributos das duas cartas seja igual, o jogo declara empate.

## Atributos Disponíveis

Os seguintes atributos podem ser escolhidos para a comparação entre as cartas:
   - População: A população da cidade.
   - Área: A área da cidade em km².
   - PIB: O PIB da cidade em bilhões de reais.
   - Pontos Turísticos: O número de pontos turísticos na cidade.
   - Densidade Populacional: Calculada como a população dividida pela área da cidade.

## Observação:
   - Para a Densidade Populacional, menor é melhor (ou seja, a carta com menor densidade vence).

## Como Compilar e Executar

1. **Clone o repositório**:

    ```bash
    git clone https://github.com/seu-usuario/super-trunfo.git
    cd super-trunfo
    ```

2. **Compile o código**:

    Se você estiver usando um compilador GCC, compile o código com o seguinte comando:

    ```bash
    gcc -o supertrunfo supertrunfo.c
    ```

    Isso gerará um executável chamado `supertrunfo`.

3. **Execute o programa**:

    Para rodar o programa compilado, use o seguinte comando:

    ```bash
    ./supertrunfo
    ```

    





