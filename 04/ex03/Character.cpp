
#include "Character.hpp"

//  ----------- CONSTRUCTORS & DESTRUCTOR -----------
 
Character::Character(): num_equiped(0), num_unequiped(0), name_("Randy")
{
}

Character::Character(std::string name): num_equiped(0), num_unequiped(0), name_(name)
{
}

Character::Character(const Character & copy): num_equiped(0), num_unequiped(0)
{
	*this = copy;
}

Character::~Character() 
{
	for (int i = 0; i < this->num_equiped; i++)
		delete this->materias[i];
	for (int i = 0; i < num_unequiped && unequiped_materias[i]; i++)
		delete unequiped_materias[i];
}

//  -------------- OPERATOR OVERLOAD ----------------

Character & Character::operator= (const Character & src)
{
	this->name_ = src.name_;
	for (int i = 0; i < this->num_equiped; i++)
		delete this->materias[i];

	for (int i = 0; i < src.num_equiped; i++)
		this->equip(src.materias[i]->clone());
	
	this->num_equiped = src.num_equiped;
	return (*this);
}

//  -------------- GETTERS --------------------------

std::string const & Character::getName() const
{
	return (name_);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < num_unequiped && unequiped_materias[i]; i++)
		delete unequiped_materias[i];
	if (this->num_equiped >= 4)
	{
		std::cout << name_ << " couldn't equip a " << m->getType() << " no more space" << std::endl;
		return ;
	}

	this->materias[this->num_equiped] = m;
	this->num_equiped++;
	std::cout << name_ << " equiped " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= this->num_equiped || idx < 0)
	{
		std::cout << name_ << " couldn't unequip" << std::endl;
		return ;
	}
	
	std::cout << name_ << " unequiped " << this->materias[idx]->getType() << std::endl;
	unequiped_materias[num_unequiped] = this->materias[idx];
	this->materias[idx] = NULL;
	this->num_equiped--;
	this->num_unequiped++;
	for (int i = idx; i < this->num_equiped; i++)
	{
		this->materias[i] = this->materias[i + 1];
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= this->num_equiped || idx < 0)
	{
		std::cout << name_ << " couldn't use Materia on " << target.getName() << std::endl;
		return ;
	}

	this->materias[idx]->use(target);
}

void Character::print_materias(void)
{
	std::cout << name_ << " has ";
	int i = 0;
	if (!materias[0])
		std::cout << " nothing ";
	while(i < 4 && materias[i])
	{
		std::cout << " " << materias[i]->getType() << ", ";
		i++;
	}
	std::cout << "equipped."<< std::endl;
}

