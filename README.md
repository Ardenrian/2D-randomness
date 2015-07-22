# 2D-randomness

Tools that will be used: C++, Qt, on a Linux distro. Violet used for the diagrams.

So the whole idea is building a world where everything follows very simple physics laws. Elastic law, maybe gravitation law. We might add drag.

Different kinds of particles:
- first off, the ones that can be moved by other particles around them. They have a mass m, a certain shape.
- second, the ones that can't be moved. They basically are of the type 1 with an infinite mass.
- and third, the ones that are moved by the program itself (whether by the user through controls, or a pre defined function)
It is interesting to see that we can rather classify those particles by, say, shape, or really anything else. This is merely one way to do it.

Different kinds of interactions between particles:
- gravitational
- collision
- elastic
- a special kind of elastic, where k is infinite.

We can try to think of how we will build the classes so that the process of making everything interact will be smooth. The problem is that, if say, particle A impacts both particles B and C, and B and C also interact... It can become pretty messy, pretty quickly.

Notes: alors déjà je me rends compte que j'écris ça en anglais, mais c'est un peu con, juste une habitude de code j'imagine. Français ça me convient tout à fait ^^
Et aussi, je suis en train de faire u npetit schéma pour essayer de voir ce que je disais dans le dernier paragraphe. Il va falloir roxer la physique pour s'en sortir. Entre gérer les liaisons élastiques et les interactions multiples on risque d'en prendre un peu pour notre grade. Mais ça m'intéresse. Simplement, on avancera effectivement beaucou pmoins rapidement sans moteur physique. T'as déjà fait ce genre de simulation toi? Je vais fureter un peu sur internet voir quel est l'état de l'art là-dedans :)
Gros bisous!
