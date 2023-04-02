Test pour README.md

# Créer un nouveau fichier
rubilaxe@debian11:~/work/LabGreen # echo "Test pour README.md" > README.md

# git status : Ou en suis je
rubilaxe@debian11:~/work/LabGreen # git status
Sur la branche main
Votre branche est à jour avec 'origin/main'.

Fichiers non suivis:
  (utilisez "git add <fichier>..." pour inclure dans ce qui sera validé)
        README.md

aucune modification ajoutée à la validation mais des fichiers non suivis sont présents (utilisez "git add" pour les suivre)

# Rajouter un fichier "non suivi" au projet
rubilaxe@debian11:~/work/LabGreen # git add  README.md
rubilaxe@debian11:~/work/LabGreen # git status
Sur la branche main
Votre branche est à jour avec 'origin/main'.

Modifications qui seront validées :
  (utilisez "git restore --staged <fichier>..." pour désindexer)
        nouveau fichier : README.md

# git commit    : Commiter dans le Repo Git sur MA MACHINE  (pas sur GitHiub)
rubilaxe@debian11:~/work/LabGreen # git commit -m "Rajout de README.md"
[main 9f273b8] Rajout de README.md
 Committer: rubilaxe <rubilaxe@debian-BULLSEYE-live-builder-AMD64>
Votre nom et votre adresse courriel ont été configurés automatiquement en se
fondant sur votre nom d'utilisateur et le nom de votre machine. Veuillez
vérifier qu'ils sont corrects. Vous pouvez supprimer ce message en les
paramétrant explicitement. Lancez les commandes suivantes et suivez les
instructions dans votre éditeur pour éditer votre fichier de configuration :

    git config --global --edit

Après ceci, vous pouvez corriger l'identité utilisée pour cette validation avec :

    git commit --amend --reset-author

 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 README.md


# git push      : Envoyer dans pas sur GitHiub ( il faut saisir Username et Password )
rubilaxe@debian11:~/work/LabGreen # git push
Username for 'https://github.com': pehenry-github
Password for 'https://pehenry-github@github.com':
Énumération des objets: 4, fait.
Décompte des objets: 100% (4/4), fait.
Compression par delta en utilisant jusqu'à 2 fils d'exécution
Compression des objets: 100% (2/2), fait.
Écriture des objets: 100% (3/3), 302 octets | 302.00 Kio/s, fait.
Total 3 (delta 1), réutilisés 0 (delta 0), réutilisés du pack 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/pehenry-github/LabGreen.git
   b0686df..9f273b8  main -> main
   