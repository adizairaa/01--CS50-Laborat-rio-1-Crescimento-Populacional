
# 🦙 *Laboratório 1: Crescimento Populacional*

Este repositório contém a solução para o *Laboratório 1* do curso *CS50 de Harvard*, onde o desafio é calcular quantos anos serão necessários para que uma população de lhamas alcance um tamanho desejado, considerando uma taxa de natalidade e mortalidade.

---

## 📄 *Descrição do Problema*

A população inicial de lhamas, *n*, cresce anualmente seguindo estas regras:
- *Taxa de Natalidade*: A cada ano, nascem n/3 novas lhamas.
- *Taxa de Mortalidade*: A cada ano, n/4 lhamas morrem.

O programa deve:
1. Solicitar um tamanho inicial da população (maior ou igual a 9).
2. Solicitar um tamanho final (maior ou igual ao tamanho inicial).
3. Calcular o número de anos necessários para a população atingir o tamanho final.
4. Exibir o número de anos como saída.

### 🧮 *Exemplo de Execução*
plaintext
$ ./population
Start size: 100
End size: 200
Years: 9


---

## 🚀 *Como Rodar o Programa*

### *Pré-requisitos*
- Ter um compilador C instalado, como o gcc.
- Ter a biblioteca CS50 configurada no seu ambiente, disponível em [CS50 Library for C](https://cs50.readthedocs.io/).

### *Execução*

1. Clone o repositório:
   bash
   git clone https://github.com/seuusuario/population-lab.git
   cd population-lab
   

2. Compile o código:
   bash
   gcc -o population population.c -lcs50
   

3. Execute o programa:
   bash
   ./population
   

4. Insira os valores solicitados para o tamanho inicial e final da população.

---

## 📚 *Detalhes da Implementação*

1. *Validação de Entrada*:
   - O programa usa um loop do-while para garantir que o tamanho inicial seja maior ou igual a 9.
   - Outro do-while é usado para validar que o tamanho final seja maior ou igual ao inicial.

2. *Cálculo de Crescimento*:
   - A cada iteração, o programa calcula o crescimento da população considerando:
     - *Nascimentos*: n / 3 (parte inteira).
     - *Mortes*: n / 4 (parte inteira).
   - Atualiza o número de anos até que a população alcance o tamanho final.

3. *Saída*:
   - O número de anos necessário é exibido no formato: Years: x.

---

## 📊 *Casos de Teste*

Você pode usar os seguintes casos de teste para verificar o comportamento do programa:

plaintext
$ ./population
Start size: 1200
End size: 1300
Years: 1

$ ./population
Start size: 9
End size: 18
Years: 8

$ ./population
Start size: 20
End size: 100
Years: 20

$ ./population
Start size: 100
End size: 1000000
Years: 115


---

## 🛠️ *Ferramentas de Avaliação*

- *check50*: Avalia a exatidão do código.
   bash
   check50 cs50/labs/2021/x/population
   
- *style50*: Avalia o estilo do código.
   bash
   style50 population.c
   

---

## 🌟 *Conceitos Praticados*

- *Loops*: Uso de do-while para validação e cálculos iterativos.
- *Operações Matemáticas*: Cálculos de divisões inteiras para simular nascimentos e mortes.
- *Entrada e Saída*: Uso de get_int() e printf() para interação com o usuário.

---

## 📜 *Licença*

Este projeto está licenciado sob a [MIT License](LICENSE).
