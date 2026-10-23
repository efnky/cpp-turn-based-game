# Turn-Based Combat (C++)

A small console game where a player and an enemy fight in alternating turns until one of them runs out of HP.

I wrote it to practise modern C++ (classes, inheritance, `virtual` functions, references, `enum class`) and to get comfortable with CMake and a feature-branch Git workflow. It is a **learning project and a work in progress**, not a finished game.

## Example output

```
Ladies and gentlemen, welcome to the arena. Let the fight begins!!!
...
Enemy: Champion HP: 500
Player: Gladiator HP: 100
Gladiator's turn to attack
Player: Gladiator HP: 100
Enemy: Champion HP: 480
Champion's turn to attack
Player: Gladiator HP: 80
Enemy: Champion HP: 480
...
Champion's turn to attack
And the winner is: Champion
```

With the default values in `main.cpp` (player 100 HP, enemy 500 HP, 20 damage per hit) the player always loses. The stats are hard-coded for now.

## Build and run

Requirements: a C++20 compiler and CMake 4.1 or newer.

```bash
cmake -S . -B build
cmake --build build
./build/turn_based_game
```

## Structure

| File | Role |
| --- | --- |
| `Character` | Base class: name, HP, `takeDamage` (HP never goes below 0), `isDead`, virtual `attack` and `toString` |
| `Player`, `Enemy` | Derived from `Character`; set default names and HP and override `toString` |
| `CombatController` | Runs the fight. Holds references to two characters and a `TurnState` (`CharacterATurn`, `CharacterBTurn`, `CombatEnded`) and loops until the fight is over |
| `main.cpp` | Creates the two characters and starts the combat |

## Concepts practised

- Inheritance with a virtual destructor and `override`
- `const` correctness and `[[nodiscard]]` on getters
- Passing objects by reference instead of copying them
- A small state machine with `enum class` and `switch`
- Separating declarations (`.h`) from definitions (`.cpp`)
- A CMake build; feature branches and pull requests (see the Git history)

## Known limitations / ideas

- Damage is a fixed 20 and the characters' stats are hard-coded
- No player input yet: both sides attack automatically
- No automated tests
- Ideas: random damage, player choices (attack / defend), a second enemy type, unit tests

## AI usage

The code was written by me. This README was drafted with the help of an AI assistant from my source code and a real build, and then reviewed by me.

## License

See [LICENSE](LICENSE).
