# Commande et contrôle moteurs pour Groupe Électrogène Autoporté (GEA) avec orientation du panneau photovoltaïque

## Description
Le projet consiste à concevoir un système de **commande et de contrôle des moteurs** pour un **Groupe Électrogène Autoporté (GEA)**. L'objectif principal est de contrôler le déplacement du GEA et d'ajuster son orientation en fonction de la luminosité, afin de maximiser la production d'énergie à partir du **panneau photovoltaïque** intégré.

Le GEA fait un **tour sur lui-même toutes les 10 minutes**, s'orientant vers la zone où la luminosité est la plus élevée. Ce système permet au GEA d'optimiser la captation de l'énergie solaire de manière autonome et mobile.

## Objectifs du projet
1. **Contrôle de la motorisation du GEA** : Permettre au GEA de se déplacer et de s'orienter automatiquement vers la zone la plus lumineuse.
2. **Orientation automatique du panneau photovoltaïque** : Orienter le panneau photovoltaïque pour maximiser la production d'énergie en fonction de la luminosité détectée.

## Composants utilisés
- **Groupe Électrogène Autoporté (GEA)** : Source d'énergie mobile pour fournir de l'électricité temporaire.
- **Moteurs à courant continu (DC)** : Utilisés pour déplacer le GEA et ajuster l'orientation du panneau photovoltaïque.
- **Capteurs de luminosité** : Mesurent l'intensité lumineuse et permettent d'ajuster la position du GEA pour maximiser l'énergie captée.
- **Carte de contrôle Arduino** : Gère les moteurs et capteurs pour ajuster la position et la direction du GEA.
- **Batterie** : Alimente le système et les moteurs du GEA.

## Fonctionnement du système
Le système repose sur une stratégie de déplacement et d'orientation basée sur la luminosité :
1. **Mesure de la luminosité** : Des capteurs de luminosité placés autour du GEA mesurent l'intensité lumineuse dans différentes directions.
2. **Mouvement de rotation** : Le GEA effectue une rotation de 180° toutes les 10 minutes pour analyser la luminosité sur une plage de 180° autour de lui.
3. **Positionnement vers la zone la plus lumineuse** : Après chaque rotation, le GEA se positionne dans la direction où la luminosité est la plus élevée, assurant ainsi une orientation optimale du panneau photovoltaïque.

### Algorithme de commande
1. **Lecture de la luminosité** : Les capteurs mesurent l'intensité lumineuse dans plusieurs directions autour du GEA.
2. **Rotation du GEA** : Le GEA effectue une rotation de 180° sur lui-même pour mesurer la luminosité dans toute la plage.
3. **Calcul de la direction optimale** : Le GEA identifie la direction où la luminosité est la plus élevée.
4. **Positionnement du GEA** : Le GEA ajuste sa position pour s'orienter vers la zone la plus lumineuse.
5. **Répétition du cycle** : Le processus est répété toutes les 10 minutes pour maintenir une orientation optimale du panneau photovoltaïque.

## Résultats
Le système permet de contrôler de manière autonome le déplacement et l'orientation du GEA, assurant ainsi une captation optimale de l'énergie solaire. Ce projet démontre la capacité du GEA à s'ajuster de manière efficace et indépendante en fonction des conditions environnementales.

## Conclusion
Ce projet a permis de développer un système de commande et de contrôle pour un GEA, capable d'ajuster automatiquement l'orientation de son panneau photovoltaïque en fonction de la luminosité. Ce système est idéal pour des applications temporaires où l'approvisionnement en énergie est essentiel, comme les chantiers ou les événements en extérieur.

## Compte rendu détaillé
Pour une description plus détaillée du projet, y compris les schémas, calculs et explications techniques, veuillez consulter le [rapport complet en PDF](./Rapport.pdf).