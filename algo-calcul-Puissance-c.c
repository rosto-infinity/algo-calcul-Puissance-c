Travaux dirigés
Objectifs Appliquer
la
démarche
de
programmation
modulaire
pour
construire
des
algorithmes structurés en procédures et fonctions
 Savoir le mode de passage de paramètre d'une procédure et une fonction
 Apprendre et distinguer l'appel d'une procédure et une fonction
Exercice 1
Ecrire une procédure puissance qui calcule c = a^b = a x a x a x …x a
(b fois); a et b étant des entiers positifs. Tester cette procédure

// Procédure pour calculer a^b
Procédure Puissance(a: Entier, b: Entier) -> Entier
    Déclarer c de Entier
    c <- 1 // Initialiser c à 1

    Pour i de 1 à b faire
        c <- c * a // Multiplier a par c, b fois
    Fin Pour

    Retourner c // Retourner le résultat
Fin Procédure

// Procédure principale pour tester la procédure Puissance
Procédure Main
    Déclarer a, b, resultat de Entier

    // Saisir les valeurs de a et b
    Afficher "Saisir la base (a) : "
    Lire a
    Afficher "Saisir l'exposant (b) : "
    Lire b

    // Appeler la procédure Puissance
    resultat <- Puissance(a, b)

    // Afficher le résultat
    Afficher "Le résultat de ", a, " élevé à ", b, " est : ", resultat
Fin Procédure
Explication
Procédure Puissance :

Prend deux paramètres : 
�
a et 
�
b.
Initialise une variable 
�
c à 1.
Utilise une boucle pour multiplier 
�
a par lui-même 
�
b fois.
Retourne le résultat 
�
c.
Procédure Main :

Demande à l'utilisateur de saisir les valeurs de 
�
a et 
�
b.
Appelle la procédure Puissance et stocke le résultat.
Affiche le résultat final.


