# Lista de Exercícios I — Estrutura Sequencial

**Disciplina:** Programação e Algoritmos  
**Turma:** 1DS3  
**Aluno:** Igor de Santana Bernardino da Silva  

---

## Sobre o Projeto

Resolução da Lista de Exercícios I de Programação e Algoritmos, com foco em **estrutura sequencial**. Cada exercício apresenta:

- Enunciado completo
- Fluxograma (diagrama de blocos) em SVG
- Pseudocódigo em Portugol
- Código em C++
- Espaço para print do programa funcionando no VS Code

---

## Estrutura de Arquivos

```
lista01/
├── lista01.html       # Página principal com todos os exercícios
├── lista01.css        # Estilização (CSS Grid + Flexbox, tema Lakers)
├── README.md          # Este arquivo
└── img/               # Pasta sugerida para os prints do VS Code
    ├── exe01.png
    ├── exe02.png
    └── ...
```

---

## Exercícios

| # | Título | Variável com nome |
|---|--------|-------------------|
| EXE01 | Área de uma Sala | `AREAIgor` |
| EXE02 | Área e Perímetro de uma Sala | `PIgor` |
| EXE03 | Valor do Desconto (5%) | `DIgor` |
| EXE04 | Valor a Pagar com Desconto | `PAGIgor` |
| EXE05 | Porcentagem de Desconto | `DESCIgor` |
| EXE06 | Volume de uma Esfera | `VOLIgor` |
| EXE07 | Valor do Estacionamento | `PAGIgor` |
| EXE08 | Conversão de Dólares para Reais | `VAL_REALIgor` |
| EXE09 | Troca de Valores entre Variáveis | `AUXIgor` |
| EXE10 | Quantidade de Tijolos | `QTDIgor` |

---

## Como Abrir

1. Baixe os arquivos `lista01.html` e `lista01.css` na **mesma pasta**
2. Abra o `lista01.html` em qualquer navegador moderno (Chrome, Firefox, Edge)
3. Não é necessário servidor — funciona diretamente como arquivo local

---

## Como Inserir os Prints do VS Code

Dentro do `lista01.html`, cada exercício tem uma tag `<img>` esperando o arquivo:

```html
<div class="screenshot-placeholder">
  <img src="sua-imagem.png" alt="Print do VS Code" />
</div>
```

Substitua `"sua-imagem.png"` pelo caminho da imagem correspondente. Exemplo:

```html
<img src="img/exe01.png" alt="Print do VS Code - EXE01" />
```

A imagem se ajusta automaticamente ao container com `object-fit: contain`, sem distorcer.

---

## Tecnologias Utilizadas

| Tecnologia | Uso |
|---|---|
| HTML5 | Estrutura semântica da página |
| CSS3 | Layout com **CSS Grid** e **Flexbox** |
| SVG | Fluxogramas embutidos na página |
| C++ | Linguagem dos códigos resolvidos |
| Google Fonts | Syne (display) + JetBrains Mono (código) |

---

## Design

Tema visual inspirado no **Los Angeles Lakers**:

- Fundo preto `#000000`
- Roxo Lakers `#552583` — bordas, números dos exercícios, pseudocódigo
- Dourado Lakers `#FDB927` — labels, destaques, entrada/saída nos fluxogramas

---

## Observações da Lista

- Utilizados somente os operadores aritméticos básicos: `+  −  ×  ÷`
- As fórmulas dos enunciados estão na forma matemática
- Ao menos uma variável em cada exercício contém o nome do aluno (`Igor`)
