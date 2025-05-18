# Calculatrice en C

Ce projet est une application en ligne de commande écrite en langage C. Il s'agit d'une simple calculatrice permettant de réaliser les opérations de base.

## Fonctionnalités

- Addition (`+`)
- Soustraction (`-`)
- Multiplication (`*`)
- Division (`/`)

L'utilisateur saisit deux nombres et l'opérateur désiré, puis la calculatrice affiche le résultat. Le programme propose ensuite de refaire un calcul ou de quitter.

## Fichiers

- `main.c` : point d'entrée du programme, contient la boucle principale.
- `calculatrice.c` : définition de la fonction `calculatrice()` qui traite l'opération.
- `calculatrice.h` : déclaration de la fonction `calculatrice()`.
- `calculatrice.cbp` : fichier de projet Code::Blocks.
- `README.md` : ce fichier.

## Compilation

### Avec Code::Blocks

1. Ouvrir `calculatrice.cbp` avec Code::Blocks.
2. Cliquer sur **"Build and Run"** ou appuyer sur `F9`.

### Avec GCC (terminal)

Si vous utilisez un terminal (Linux/Mac ou Git Bash sous Windows) :

```bash
gcc -o calculatrice main.c calculatrice.c
./calculatrice
