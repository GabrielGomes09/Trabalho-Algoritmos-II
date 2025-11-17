# Trabalho-Algoritmos-II

Descrição

- Programa em C que lê uma matriz NxN de inteiros (cada valor em [-127, 127]) e calcula a maior soma possível de qualquer sub-retângulo da matriz.
- Implementação principal em [`main`](Trabalho-Algoritmos-II/main.c).

Arquivos do workspace

- [`Trabalho-Algoritmos-II/main.c`](Trabalho-Algoritmos-II/main.c)
- [`Trabalho-Algoritmos-II/pseudocódigo`](Trabalho-Algoritmos-II/pseudocódigo)
- [`Trabalho-Algoritmos-II/README.md`](Trabalho-Algoritmos-II/README.md)
- [`Trabalho-Algoritmos-II/Artigo.pdf`](Trabalho-Algoritmos-II/Artigo.pdf)

O programa:

- Lê um inteiro N (tamanho da matriz).
- Lê N×N inteiros (espera-se valores no intervalo [-127, 127]).
- Calcula, por enumeração completa de todos os sub-retângulos, a maior soma possível e imprime o resultado e o tempo gasto na busca.
- Essa enumeração funciona por meio do cálculo de uma submatriz definida por i1 e j1 no começo e por i2 e j2 no final.
- Após a identificação dessa submatriz é calculado o valor da soma de cada um de seus itens. Caso seja compativel é atualizado a variável 'resposta'.

Dependências externas

- Não há bibliotecas externas além da biblioteca padrão C (inclui <stdio.h>, <stdlib.h>, <time.h> usadas em [`main`](Trabalho-Algoritmos-II/main.c)).
- Ferramentas de compilação recomendadas: GCC ou Clang.
- Ferramentas opcionais: make, valgrind (para checagem de memória).

Compilação (recomendado para testes rápidos)

- Linux / macOS / MinGW:

```sh
gcc -std=c11 -O2 -Wall -Wextra -pedantic -o main main.c
```

- Clang:

```sh
clang -std=c11 -O2 -Wall -Wextra -pedantic -o main main.c
```

- Windows (MSVC, prompt "Developer Command Prompt"):

```sh
cl /Fe:main.exe /std:c11 /O2 main.c
```
