# Análise Comparativa de Linguagens Imperativas

Este projeto apresenta uma avaliação técnica entre as linguagens **C**, **Java** e **Python**, focando no paradigma imperativo. A análise foi realizada através da implementação de algoritmos clássicos e da medição de métricas de desempenho e escrita.

## 🚀 Algoritmos Implementados
- **Fibonacci (Iterativo e Recursivo):** Avaliação de custo de chamadas de função.
- **Busca Binária:** Eficiência em manipulação de vetores.
- **Problema da Mochila (Knapsack 0/1):** Lógica de programação dinâmica.

## 📊 Resultados Coletados

Os testes foram realizados em ambiente Windows, utilizando instrumentação interna para isolar o tempo de processamento real dos algoritmos.

| Problema | Linguagem | LOC | Tamanho (KB) | Tempo (ms) | Legibilidade |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Fibonacci (Iter)** | C | 24 | 0.651 | 0.0014 | 3/5 |
| | Java | 18 | 0.660 | 0.0019 | 3/5 |
| | Python | 16 | 0.417 | 0.0062 | 5/5 |
| **Fibonacci (Rec)** | C | 24 | 0.651 | 7.9200 | 3/5 |
| | Java | 18 | 0.660 | 5.4000 | 3/5 |
| | Python | 16 | 0.417 | 137.92 | 5/5 |
| **Busca Binária** | C | 19 | 0.518 | 0.0014 | 2/5 |
| | Java | 16 | 0.589 | 0.0022 | 3/5 |
| | Python | 14 | 0.393 | 0.0045 | 5/5 |
| **Mochila** | C | 22 | 0.689 | 0.0026 | 2/5 |
| | Java | 18 | 0.750 | 0.0260 | 3/5 |
| | Python | 14 | 0.515 | 0.0450 | 5/5 |

## 🔍 Principais Conclusões

1. **Performance:** As linguagens compiladas (C) e híbridas (Java) dominaram os testes de tempo. O Java superou o C no teste recursivo, demonstrando a eficácia das otimizações JIT da JVM.
2. **Produtividade:** Python apresentou a menor quantidade de linhas de código (LOC) e a melhor legibilidade, sendo ideal para prototipagem rápida.
3. **Trade-off:** A escolha da linguagem depende do equilíbrio necessário entre eficiência computacional (C/Java) e eficiência de desenvolvimento (Python).

## 🛠️ Tecnologias
- C (GCC Compiler)
- Java (JDK 17+)
- Python 3.x
- VS Code & OnlineGDB

---
Projeto desenvolvido para a disciplina de Paradigmas de Linguagens de Programação - UPE Surubim.