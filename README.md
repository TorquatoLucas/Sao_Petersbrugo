# Algoritmo de Filtragem de Grafo por Grau Mínimo

Este repositório contém um algoritmo em C++ que filtra vértices de um grafo com base no grau mínimo (`k`). O programa lê um grafo não direcionado e remove iterativamente os vértices cujo grau é menor que `k`, até que não haja mais vértices para remover. Ao final, ele imprime os vértices que permanecem no grafo com grau maior ou igual a `k`.

## Funcionalidades

O programa realiza as seguintes etapas:
1. **Leitura do Grafo**: Lê o número de vértices (`pessoas`), o número de arestas (`ligacoes`) e o grau mínimo (`k`).
2. **Construção da Lista de Adjacência**: Armazena o grafo em uma lista de adjacência.
3. **Cálculo do Grau dos Vértices**: Calcula o grau de cada vértice.
4. **Filtragem Iterativa**: Remove vértices com grau menor que `k` e atualiza os graus dos vértices adjacentes.
5. **Saída**: Imprime os vértices que permanecem no grafo com grau maior ou igual a `k`. Se nenhum vértice atender ao critério, imprime `0`.
