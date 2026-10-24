# Exercício 01 - Sistema de Estoque

## 📋 Descrição 
Aplicação para registro e armazenamento de produtos informados pelo usuário. Os dados de cada produto (nome, preço e quantidade em estoque) são organizados em `structs`, e a quantidade de produtos cadastrados é definida em tempo de execução por meio de alocação dinâmica de memória.

Esse programa visa agir como base para o estudo de tópicos como **estruturas de dados** e **alocação estática/dinâmica de memória** em C, conceitos que também se aplicam a outras linguagens. 

## 📑 Requisitos
- Solicitar ao usuário quantos produtos serão cadastrados (alocação com `malloc`);
- Cada produto deve ter: nome (string), preço (float), quantidade em estoque (int) — uso de struct;
- Menu com opções:
    1. Cadastrar produtos
    2. Listar todos os produtos
    3. Buscar um produto pelo nome
    4. Ordenar e exibir produtos por preço (do menor para o maior)
    5. Sair
- A busca (opção 3) deve comparar strings com `strcmp`;
- A ordenação (opção 4) pode ser feita com qualquer algoritmo de ordenação, como bubble sort.

## 🔍 Tópicos Abordados
- Uso de structs;
- Alocação dinâmica de memória (`malloc`/`free`);
- Comparação de strings;
- Ordenação de dados e listas.

## 🗂️ Arquivos
- [`main.c`](main.c): fluxo principal da aplicação;
- [`estoque.h`](estoque.h): definições da biblioteca própria;
- [`estoque.c`](estoque.c): funções da biblioteca própria;
- [`Makefile`](Makefile): arquivo de compilação e execução.

## ⚙️ Método de Execução

### Execução por Makefile
Para essa alternativa, é necessário que o make esteja instalado, por meio do `MSYS2`.

1. Abra o terminal integrado na pasta `pratica-avancada/estoque`;
2. Com o terminal aberto, execute o seguinte comando:

 ```bash
 make run
 ```

3. Caso deseje apagar o executável criado após a compilação, execute no terminal: 

 ```bash
 make clean
 ```

### Execução por GCC
Caso não tenha instalado o `make`, utilize o compilador `gcc`.

- Com o terminal aberto, execute os seguintes comandos:

*Compila e cria o executável:*

```bash
gcc main.c estoque.c -o estoque
```
*Executa o programa:*

```bash
./estoque.exe
```

ou

```bash
estoque.exe
```

---