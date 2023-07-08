#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	FragTrap duhan("duhan");

	duhan.takeDamage(20);
	duhan.beRepaired(10);
	duhan.attack("furkan");
	duhan.highFivesGuys();
}