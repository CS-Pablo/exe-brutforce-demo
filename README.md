# Brute Force Password Cracking Simulation

## Description

Ce projet simule une attaque par brute force pour découvrir un mot de passe. Il teste toutes les combinaisons possibles d'un ensemble de caractères jusqu'à ce qu'il trouve le mot de passe correct.

### Fonctionnalités

- Utilise un ensemble de caractères prédéfinis (`a-z`) pour essayer de découvrir un mot de passe cible.
- Teste les mots de passe de longueur 1 à 4 pour la démonstration.
- Affiche le mot de passe découvert lorsqu'il est trouvé.

## Compilation

Pour compiler le projet, assurez-vous d'avoir `gcc` installé sur votre machine. Utilisez ensuite la commande `make` pour compiler le programme.


Cela créera un exécutable nommé bruteforce.

### Utilisation

Une fois le programme compilé, lancez-le avec la commande suivante :

`./bruteforce`

Entrez ensuite le mot de passe cible que le programme devra découvrir. Le programme essayera toutes les combinaisons possibles et affichera le mot de passe trouvé.

### Limites

Le projet est limité à des mots de passe de longueur 4 pour cette démonstration, mais vous pouvez facilement augmenter cette limite en modifiant la valeur de MAX_PASSWORD_LENGTH dans bruteforce.c.

L'ensemble de caractères utilisé est limité à a-z, mais il peut être étendu à d'autres ensembles de caractères (chiffres, symboles, etc.).