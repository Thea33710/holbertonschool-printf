# Projet \_printf

---

### Description du projet :

Le _projet \_printf_ a pour but de reproduire le comportement de la fonction standard **printf** en langage C avec l'utilisation de _chaines de caracteres_, de _pointeurs_, de _fonctions variadiques_, et de _write_.

**La fonction printf :** permet d'afficher du texte a l'ecran en integrant dynamiquement des valeurs.

---

### Commande de compilation :

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \*.c -o printf

---

### Exigences :

__Fonctions et macros autorisés :__

* write *(man 2 write)*
* malloc *(man 3 malloc)*
* free *(man 3 free)*
* va_start *(man 3 va_start)*
* va_end *(man 3 va_end)*
* va_copy *(man 3 va_copy)*
* va_arg *(man 3 va_arg)*  
  

- Tous les fichiers seront compiles sur **Ubuntu 20.04 LTS** à l'aide de **gcc**, avec les options : _-Wall -Werror -Wextra -pedantic -std=gnu89_
- Tous les fichiers doivent se terminer par une nouvelle ligne.
- Fichier __README.md__ à la racine du projet.
- Le code doit respecter le style **Betty**.
- Non autorise a utiliser les variables globales.
- Limite a __5 fonctions__ par fichier.
- Tout les fichiers d'en-tete doivent etre inclus et gardes.

---

### Commande d'execution man page :

* man ./man_3_printf

---

### Organigramme :

<img width="456" height="678" alt="flowchart" src="https://github.com/user-attachments/assets/7347ec67-d2bd-4f7e-89f1-832c830fe023" />

---

### Exemples d'utilisation \_printf :

<img width="550" height="212" alt="image" src="https://github.com/user-attachments/assets/7dbdae7c-0a49-49e7-82b4-f39d045dc1d9" />  
<img width="138" height="73" alt="image (1)" src="https://github.com/user-attachments/assets/db7b2316-f3d1-4821-b719-f947322be4dc" />  
<img width="568" height="445" alt="image (2)" src="https://github.com/user-attachments/assets/d184db2e-6e5a-4994-872b-6e67ebec9529" />  
<img width="290" height="278" alt="image (3)" src="https://github.com/user-attachments/assets/15a13279-d2dd-4be3-b088-191eb6014869" />  

---

### Utilisation de valgrind :  

<img width="539" height="155" alt="image" src="https://github.com/user-attachments/assets/d89e5018-07e5-42b8-bf25-d251ff954e0b" />

