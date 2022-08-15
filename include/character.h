#ifndef CHARACTER_H_
#define CHARACTER_H_
class Character {
	friend void modify(Character &p, int attack, int defense);
private:
	int attack_;
	int defense_;
public:
	Character(int attack, int defense);
	~Character();
	void showData();
};
#endif // CHARACTER_H_