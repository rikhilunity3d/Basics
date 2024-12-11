#include <iostream>
using namespace std;

class Player {
private:
  int health = 100;

  int score;
  string name;

  // Defines the behavoir which does some action. Action is reducing the health
  // of the player. Whenever the player takes damage, the health is reduced. So
  // I am using the health as a data member of the class Player into its
  // function TakeDamage. Hence, the data and behaviour are tightly combined
  // with each other.
public:
  void Takedamage(int damage) {

    if (IsAlive()) {
      health = health - damage;
      cout << "After Taking Damage of " << damage << " Points. "
           << "Player health is " << health << endl;
    } else {
      cout << "Player's Dead" << endl;
    }
  }

  int GetHealth() { return health; }

private:
  bool IsAlive() {
    if (health > 0)
      return true;

    return false;
  }
};

int main() {
  Player player;

  player.Takedamage(20);

  cout << "Current Health: " << player.GetHealth() << endl;

  player.Takedamage(60);
  player.Takedamage(20);
  player.Takedamage(10);
}