#include "World.h"

World::World(const vector<vector<string>>& map_attributes) {
	int line_counter = 0;
	for (vector<string> attribute_line : map_attributes) {

		string nth_line;

		Drawable refinement_drawable;
		nth_line = attribute_line.at(6);
		//shader line
		if (nth_line.at(0) == 'B') {}
		nth_line = attribute_line.at(7);
		//obj line
		if (nth_line.at(0) == 'B') {}
		nth_line = attribute_line.at(8);
		//txture line
		if (nth_line.at(0) == 'B') {}



		nth_line = attribute_line.at(0);
		//sprite
		Drawable* local_drawable = nullptr;
		if (nth_line.at(0) == 'E') {
			if (nth_line.at(1) == 'A') {
				EnemyA enemy = EnemyA(refinement_drawable);
				local_drawable = &((Drawable)enemy);
				enemies.push_back(enemy);
			}
			else cout << "Eerr";
		}
		else if (nth_line.at(0) == 'F') {
			if (nth_line.at(1) == 'A') {
				BossA boss = BossA(refinement_drawable);
				local_drawable = &((Drawable)boss);
				bosses.push_back(boss);
			}
			else cout << "Ferr";
		}
		else if (nth_line.at(0) == 'P') {
			if (nth_line.at(1) == 'A') {
				PlayerA player = PlayerA(refinement_drawable);
				local_drawable = &((Drawable)player);
				players.push_back(player);
			}
			else cout << "Perr";
		}
		else cout << "1err " << nth_line << endl;

		if (local_drawable == nullptr) continue;

		nth_line = attribute_line.at(1);
		//card
		if (nth_line.at(0) == 'C') {
			Sprite* sprite = (Sprite*)local_drawable;
			if (nth_line.at(1) == 'A') {
				sprite->card = CardA();
			}
			else cout << "Cerr";
		}
		else cout << "2err";

		nth_line = attribute_line.at(2);
		//bullet type
		if (nth_line.at(0) == 'b') {
			Sprite* sprite = (Sprite*)local_drawable;
			if (nth_line.at(1) == 'A') {
				sprite->bullet_type = 'A';
			}
			else if (nth_line.at(1) == 'P') {
				sprite->bullet_type = 'P';
			}
			else cout << "berr";
		}
		else cout << "3err";

		int nth_line_x = stoi(attribute_line.at(3));
		int nth_line_z = stoi(attribute_line.at(4));
		//x and y pos
		if (nth_line_x > -1 && nth_line_z > -1) {
			Sprite* sprite = (Sprite*)local_drawable;
			sprite->x = (unsigned)nth_line_x;
			sprite->z = (unsigned)nth_line_z;
		}
		else cout << "45err";

		nth_line = attribute_line.at(5);
		//bomb type
		if (nth_line.at(0) == 'B') {
			Sprite* sprite = (Sprite*)local_drawable;
			if (nth_line.at(1) == 'A') {
				((Player*)sprite)->bomb = BombA();
			}
			else cout << "Berr";
		}
		else if (nth_line.at(0) == '-') {}
		else cout << "6err " << nth_line << endl;
	}
}


World::~World()
{
}
