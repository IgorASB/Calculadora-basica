# 🧮 Calculadora Básica em C

<div align="center">

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compilador](https://img.shields.io/badge/Compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Plataforma](https://img.shields.io/badge/Plataforma-Linux%20%7C%20Windows%20%7C%20macOS-0078D6?style=for-the-badge&logo=linux&logoColor=white)]()
[![Status](https://img.shields.io/badge/Status-Concluído-28a745?style=for-the-badge)]()

</div>

> Calculadora de terminal desenvolvida em C com menu interativo para as quatro operações básicas, validação de divisão por zero e opção de repetir operações.

---

## ⚙️ Funcionalidades

- Menu com as quatro operações matemáticas:
  - `1` — Adição
  - `2` — Subtração
  - `3` — Multiplicação
  - `4` — Divisão
- Leitura de dois números reais (`float`)
- Exibição do resultado com duas casas decimais
- Tratamento de erro para **divisão por zero**
- Opção de realizar outra operação ou encerrar

---

## 💻 Exemplo de Saída

```
=== CALCULADORA ===
1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
Escolha uma opção: 4

Digite o primeiro número: 10
Digite o segundo número: 0
Erro: divisão por zero!

Deseja realizar outra operação? (S/N): N
```

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado — verifique com `gcc --version`

### Passos

```bash
# 1. Clone o repositório
git clone https://github.com/IgorASB/Calculadora-basica.git
cd Calculadora-basica

# 2. Compile
gcc calculadorabasica.c -o calculadora

# 3. Execute
./calculadora       # Linux/macOS
calculadora.exe     # Windows
```

---

## 🧠 Conceitos de C Aplicados

| Conceito | Aplicação no Projeto |
|---|---|
| Variáveis `float` | Armazenamento dos operandos e resultado |
| `scanf` / `printf` | Entrada do usuário e exibição formatada (`%.2f`) |
| `switch...case` | Controle do menu de operações |
| Estrutura `do...while` | Loop para repetir operações |
| Condicional `if` | Validação da divisão por zero |

---

## 📁 Estrutura do Projeto

```
Calculadora-basica/
├── calculadorabasica.c   # Código-fonte principal
└── README.md
```

---

## 👤 Autor

Feito por **Igor Amaral** — Estudante de Ciência da Computação

[![GitHub](https://img.shields.io/badge/GitHub-IgorASB-181717?style=flat&logo=github)](https://github.com/IgorASB)
