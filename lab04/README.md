# Labo 4: Pointeurs et tests fonctionnels avec Bats

## 1 - Pointeurs, structures et tableaux (60 minutes)

Récupérez le fichier [`chess.c`](chess.c) disponible dans ce répertoire.
Complétez les fonctions suivantes:

* `ajouter_piece`: ajoute une pièce à un échiquier
* `initialiser_echiquier`: initialise un échiquier
* `afficher_type_piece`: affiche un type de pièce (`P` pour pion, `T` pour
  tour, `C` pour cavalier, `F` pour fou, `D` pour dame et `R` pour roi)
* `afficher_couleur`: affiche une couleur (`B` ou `N`)
* `afficher_piece`: affiche une pièce
* `afficher_echiquier`: affiche un échiquier

À la fin, on souhaite avoir le comportement suivant:

```sh
$ gcc chess.c -o chess
$ ./chess
+--+--+--+--+--+--+--+--+
|TN|CN|FN|DN|RN|FN|CN|TN|
+--+--+--+--+--+--+--+--+
|PN|PN|PN|PN|PN|PN|PN|PN|
+--+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+--+
|  |  |  |  |  |  |  |  |
+--+--+--+--+--+--+--+--+
|PB|PB|PB|PB|PB|PB|PB|PB|
+--+--+--+--+--+--+--+--+
|TB|CB|FB|DB|RB|FB|CB|TB|
+--+--+--+--+--+--+--+--+
Le trait aux blancs
```

## 2 - Chaînes de caractères (30 minutes)

* Récupérez le fichier [`string.c`](string.c) disponible dans ce répertoire.
* Complétez la fonction `first_repeated` de telle sorte qu'on ait le
  comportement suivant:

```sh
$ gcc string.c -o string
$ ./string fr
The first repeated character in "abracadabra" is 'a'
The first repeated character in "Linux Mint" is 'i'
The first repeated character in "Ubuntu" is 'u'
```

* Complétez la fonction `num_occurrences` de telle sorte qu'on ait le
  comportement suivant:

```sh
$ gcc string.c -o string
$ ./string no
"abr" occurs 2 times in "abracadabra"
"a" occurs 5 times in "abracadabra"
"ana" occurs 2 times in "ananas"
```

## 3 - Bats (30 minutes)

* Installez les sous-modules `bats-core`, ` bats-support` et
  `bats-assert`:

```sh
$ git submodule update --init
# Vérifiez que l'installation a bien fonctionné
$ bats-core/bin/bats --version
```

* Ensuite, copiez le fichier [`words.c`](words.c) disponible dans ce dépôt dans
  votre dossier `words`.
* Ajoutez un `Makefile` qui vous permet de compiler le programme `words.c` pour
  qu'il produise un exécutable nommé `words`
* Testez-le en ligne de commande pour comprendre son fonctionnement
* Complétez le fichier nommé `test.bats` qui teste le programme `words.c` avec
  les arguments suivants: chaîne vide (`""`), la lettre `a`, le mot
  `ressasser`, le mot `aller` et le mot `AA`. Vous pouvez vous inspirer du test
  déjà présent dans `test.bats` et consulter la documentation de
  [`bats-assert`](https://github.com/ztombol/bats-assert).
* Ajoutez une cible `test` dans votre `Makefile` qui permet d'invoquer `bats`
  sur le fichier `test.bats` (rappel: le chemin de l'exécutable est
  `bats-core/bin/bats`).
* Avec ces tests, est-ce que vous avez l'impression que le programme est
  fonctionnel ou il contient des bogues?
* Ajoutez l'option `--tap` dans l'invocation de `bats` et vérifiez le résultat.
