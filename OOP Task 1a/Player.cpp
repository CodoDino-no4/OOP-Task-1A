#include "Player.h"
Player::Player()
{

}

string Player::get_name() const
{
	return name;
}

int Player::get_score() const
{
	return score.get_amount();
}

void Player::update_score(int amount)
{
	score.update_amount(amount);
}
