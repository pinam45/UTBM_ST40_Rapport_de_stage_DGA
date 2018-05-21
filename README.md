# Rapport de stage DGA

Ce repo contient les sources LaTeX de mon rapport de stage ST40 ainsi que des slides des deux présentations, en lien avec le stage, que j'ai réalisées.

Ce stage a eu lieu à la Direction Générale de l'armement Maîtrise de l'Information (DGA MI) sur le site de Bruz, près de Rennes du 1er août 2017 au 26 janvier 2018.

Pour plus d'informations voir le rapport en lui-même.

Une version déjà compilée en PDF des documents est disponible [ici](https://github.com/pinam45/UTBM_ST40_Rapport_de_stage_DGA/releases/latest).

*Ce rapport est public, son contenu a été validées par la DGA MI comme ne contenant aucune information sensible.*

# Documents

## Rapport de stage

*Nom de fichier: RAPPORT_A17_INFO_ST40_PINARD_MAXIME.tex*

Rapport de stage rendu a l'école ainsi qu'à la DGA MI, partie intégrante de l'évaluation du stage.

## Présentation DGA

*Nom de fichier: PRESENTATION_DGA.tex*

Slides de la présentation orale interne à la DGA MI sur le contenu de mon stage qui a eu lieu le 23 janvier 2018 qui a duré une quarantaine de minutes.

## Soutenance UTBM

*Nom de fichier: SOUTENANCE_UTBM.tex*

Slides de la soutenance orale réalisée à l'Université de Technologie de Belfort-Montbéliard (UTBM) le 1er mars 2018 qui a duré 25 minutes, partie intégrante de l'évaluation du stage.

# Compilation des documents

## Prérequis

- Une distribution LaTeX avec ``xelatex`` telle que [TeX Live](http://tug.org/texlive) ou [MiKTeX](https://miktex.org/)
- La police de caractères Tahoma installée sur votre système (par défaut sous Windows)

## Dépendances

Les packages suivant sont nécessaires pour compiler les documents:

```
amsmath amssymb array caption chngcntr fancyvrb float fontenc footmisc glossaries hyperref import listings lmodern mathrsfs multirow packages/MagicListings packages/StandardLibraryCDefinition pdflscape pgf pgf-umlsd pgfgantt scalerel stackengine standalone tabularx tikz tocbibind translator upmethodology-document xcolor
```
Disponibles sur [CTAN](https://ctan.org/), en général installés avec la distribution LaTeX.

```
utbmcovers
```
Disponible ici: [utbm-beamer-theme](https://github.com/pinam45/utbm-beamer-theme), installation manuelle nécessaire

```
beamercolorthemeutbm beamerinnerthemeutbm beamerouterthemeutbm beamerthemeutbm
```
Disponible ici: [utbm-latex-internship-report-covers](https://github.com/pinam45/utbm-latex-internship-report-covers), installation manuelle nécessaire

## Compilation

### Systèmes type Unix: makefile

Compilation:
```
$ make
```
Clean:
```
$ make clean
```

### Windows: make.cmd

#### cmd

Compilation:
```
> make
```
Clean:
```
> make clean
```

#### PowerShell

Compilation:
```
> ./make
```
Clean:
```
> ./make clean
```
