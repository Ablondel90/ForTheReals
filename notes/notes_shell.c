COMMANDES SHELL


>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||cat - afficher le contenu d’un objet.

            [-e ‘ndf’] afficher les caractères non imprimables.

      |||CTRL+d pour quitter le mode de lecture.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||sort - trier les éléments par ordre lexicographique (ASCII).

            [-g]  trier par ordre numérique classique.

            [-b]  Ignorer les blancs en début de ligne pendant la recherche de la clé de tri sur chaque ligne.

            [-d]  Trier dans l'ordre des répertoires téléphoniques:
                  ignorer pour le tri tous les caractères autres que les lettres, les chiffres et les blancs.

            [-f]  Considérer les minuscules comme leur équivalent en majuscule pendant le tri.
                  Ainsi [-b] est trié de manière équivalente a [-B].
                  cela ne fonctionne pas avec les minuscules accentuées

            [-t ‘cr_sp’] Utiliser le caractère_séparateur afin de distinguer les champs pour
                  rechercher le paramètre sur chaque ligne.
                  Par défaut le  séparateur de champs est  une chaîne blanche entre chaînes non-blanches.
                  Ceci signifie qu'avec l'entrée « foo bar » sort distingue  deux champs «foo» et «bar».
                  Le sépara­teur n'appartient ni  au  champ précédent, ni au champ suivant.

            [-r]  Inverser  l'ordre  de tri, afin que les lignes avec la plus grande valeur de clé  apparaissent en premier

            [-n]  Comparer suivant la valeur arithmétique d'une chaîne numérique initiale composée d'espaces éventuels,
                  suivis optionnellement du signe ‘-‘, et de zéro ou plusieurs chiffres,
                  éventuellement suivi d'un point décimal et de zéro ou plusieurs chiffres.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||head - afficher les 10 premières lignes.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||tail - afficher les 10 dernières.

            [-n ‘num’] spécifier les ’n’ caractères.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||grep - spécifier les lignes pour grouper les lignes contenant un paramètre.

            [-A num] Afficher num lignes supplémentaires après la  ligne correspondante.

            [-B num] Afficher num lignes supplémentaires avant la ligne correspondante.

            [-c]  Ne pas afficher les résultats normaux. afficher un compte des lignes correspondantes pour chaque fichier d'entrée.

            [-v] Inverser la mise en correspondance, pour sélection­ner les lignes ne correspondant pas au motif +
                 afficher les nombres de lignes ne corre­spondant pas au motif.

            [-f ’ndf’] Lire le motif dans le fichier indiqué.

            [-i]  Ignorer les différences majuscules/minuscules aussi bien  dans le motif que dans les fichiers d'entrée.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||less - permet de se déplacer avec les flèches dans un man ou dans la sortie standard.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||cut - permet de couper chaque ligne en fonction d’un délimiteur.

            [-d ‘cr_sp’ -f nb, nb] spécifier indépendamment chaque champs a récupérer.
            ex ; cat file.c | sort | cut -d , -f 1,3 pour récupérer les champs 1 et 3 délimités par des virgules.

            [-d ‘cr_sp’  ’-f nb-nb] spécifier une fourchette de champs a récupérer.
            ex ; cat file.c | sort | cut -d , -f 1-4 pour récupérer les champs 1 à 4 délimités par des virgules.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||sed - permet de remplacer un élément dans le flux de données.
            (cat file.c | sort | cut -d , -f 1 | sed «s/dest/src» permet de remplacer le premier élément
            de chaque ligne par le 2e paramètre de sed. ’s’ signifie substitution).

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||tr - remplacer le paramètre 1 par le paramètre 2 (tr «1» «2»).

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||wc - calcule le nombre de lignes, de mots et de caractères dans un fichier. wc peut prendre plusieurs fichiers en paramètres.
            ((cat file.c | grep «recherche» | wc -l) permet d’afficher le nombre de lignes contenant le paramètre recherché).

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||file - donne des informations sur un fichier passé en paramètre.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||ifconfig - affiche les paramètres réseau. (IP, adresse mac etc…).

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||bc - calculatrice qui lit sur l’entrée standard les paramètres entrés par l’utilisateur.
            (echo «1 + 2» | bc renverra le résultat calculé par bc).

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||find - permet de lister les fichiers passés en paramètres en incluant les sous dossiers.

            [find /cheminversfichier -name «name*»] permet de filtrer par nom et renvoyer tout les résultats contenant «name*».

            [-iname]  identique à -name, mais sans  différencier les majuscules et les  minuscules.
                      Par exemple les motifs ‘fo*’ et ‘F??’ correspondent aux noms de fichiers ‘Foo’, ‘FOO’, ‘foo’, ‘fOo’, etc...

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

      |||awk -  est une commande qui permet une recherche de chaînes et l'exécution d'actions sur les lignes sélectionnées.
                Elle est utile pour récupérer de l'information ou transformer des données entre autres.

            awk [-F] [-v var=valeur] 'programme' fichier.

            awk [-F] [-v var=valeur] -f fichier-config fichier.

            L'argument -F doit être suivi du séparateur de champ (-F: pour un ":" comme séparateur de champ).

            L'argument -f suivi du nom du fichier de configuration de awk.

            L'argument -v définit une variable var dans l'exemple qui sera utilisée par la suite dans le programme.

            Un programme awk possède la structure suivante: critère de sélection d'une chaîne //{action}//,
            quand il n'y a pas de critère c'est que l'action s'applique à toutes les lignes du fichier.

            exemples:

            //awk -F":" '{print $NF}' /etc/passwd//
            Il n'y a pas de critères, donc l'action s'applique à toutes les lignes du fichier /etc/passwd.
            L'action consiste à afficher le nombre de champ du fichier. NF est une variable prédéfinie d'awk,
            elle est égale au nombre de champs dans une ligne.

            //awk -F ":" '{ $2 = "" ; print $0 }' /etc/passwd// imprime chaque ligne du fichier /etc/passwd.
            après avoir effacé le deuxième champs

            //awk 'END {print NR}' fichier//  imprime le nombre total de lignes du fichiers.

            //awk '{print $NF}' fichier// imprime le dernier champs de chaque ligne.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Les variables prédéfinies

Variable  -        Signification Valeur par défaut-
*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*
..............................................................................
VABIABLE     /-/   SIGNIFICATION                                            ||
______________________________________________________________________________
!!ARGC       /-/   Nombre d'arguments de la ligne de commande               ||
______________________________________________________________________________
!!ARGV       /-/   tableau des arguments de la ligne de commande            ||
______________________________________________________________________________
!!FILENAME   /-/   nom du fichier sur lequel on applique les commandes      ||
______________________________________________________________________________
!!FNR        /-/   Nombre d'enregistrements du fichier                      ||
______________________________________________________________________________
!!FS         /-/   séparateur de champs en entrée " "                       ||
______________________________________________________________________________
!!NF         /-/   nombre de champs de l'enregistrement courant             ||
______________________________________________________________________________
||NR         /-/   nombre d'enregistrements déjà lus                        ||
______________________________________________________________________________
||OFS        /-/   séparateur de champs pour la sortie " "                  ||
______________________________________________________________________________
||ORS        /-/   séparateur d'enregistrement pour la sortie  "\n"         ||
______________________________________________________________________________
||RLENGTH    /-/   longueur de la chaine trouvée                            ||
______________________________________________________________________________
||RS         /-/   séparateur d'enregistrement en entrée "\n"               ||
______________________________________________________________________________
||RSTART     /-/   début de la chaine trouvée                               ||
______________________________________________________________________________
..............................................................................
*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*

