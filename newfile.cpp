#include<bits/stdc++.h>
#include <iostream>
#include <array>
#include <set>
#include <unordered_map>
#include <queue>
#include <utility>
#include <fstream>
#include <string>

using namespace std;

int rgw = 0, flu = 0;
int gwr = 1, luf = 1;
int wrg = 2, ufl = 2;

int rwb = 3, fur = 3;
int wbr = 4, urf = 4;
int brw = 5, rfu = 5;

int ryg = 6, fdl = 6;
int ygr = 7, dlf = 7;
int gry = 8, lfd = 8;

int rby = 9, frd = 9;
int byr = 10, rdf = 10;
int yrb = 11, dfr = 11;

int owg = 12, bul = 12;
int wgo = 13, ulb = 13;
int gow = 14, lbu = 14;

int obw = 15, bru = 15;
int bwo = 16, rub = 16;
int wob = 17, ubr = 17;

int ogy = 18, bld = 18;
int gyo = 19, ldb = 19;
int yog = 20, dbl = 20;

int oyb = 21, bdr = 21;
int ybo = 22, drb = 22;
int boy = 23, rbd = 23;

array<int, 3> numbers;

array<int, 24> narra;

void chtint(char color_three[3])
{
	if (strcmp(color_three ,"rgw")==0)
	{
		numbers[0] = 0;
		numbers[1] = 1;
		numbers[2] = 2;
	}
	else if (strcmp(color_three ,"gwr")==0)
	{
		numbers[0] = 1;
		numbers[1] = 2;
		numbers[2] = 0;
	}
	else if (strcmp(color_three ,"wrg")==0)
	{
		numbers[0] = 2;
		numbers[1] = 0;
		numbers[2] = 1;
	}
	else if (strcmp(color_three ,"rwb")==0)
	{
		numbers[0] = 3;
		numbers[1] = 4;
		numbers[2] = 5;
	}
	else if (strcmp(color_three ,"wbr")==0)
	{
		numbers[0] = 4;
		numbers[1] = 5;
		numbers[2] = 3;
	}
	else if (strcmp(color_three ,"brw")==0)
	{
		numbers[0] = 5;
		numbers[1] = 3;
		numbers[2] = 4;
	}
	else if (strcmp(color_three ,"ryg")==0)
	{
		numbers[0] = 6;
		numbers[1] = 7;
		numbers[2] = 8;
	}
	else if (strcmp(color_three , "ygr")==0)
	{
		numbers[0] = 7;
		numbers[1] = 8;
		numbers[2] = 6;
	}
	else if (strcmp(color_three ,"gry")==0)
	{
		numbers[0] = 8;
		numbers[1] = 7;
		numbers[2] = 6;
	}
	else if (strcmp(color_three , "rby")==0)
	{
		numbers[0] = 9;
		numbers[1] = 10;
		numbers[2] = 11;
	}
	else if (strcmp(color_three ,"byr")==0)
	{
		numbers[0] = 10;
		numbers[1] = 11;
		numbers[2] = 9;
	}
	else if (strcmp(color_three ,"yrb")==0)
	{
		numbers[0] = 11;
		numbers[1] = 9;
		numbers[2] = 10;
	}
	else if (strcmp(color_three, "owg")==0)
	{
		numbers[0] = 12;
		numbers[1] = 13;
		numbers[2] = 14;
	}
	else if (strcmp(color_three ,"wgo")==0)
	{
		numbers[0] = 13;
		numbers[1] = 14;
		numbers[2] = 12;
	}
	else if (strcmp(color_three ,"gow")==0)
	{
		numbers[0] = 14;
		numbers[1] = 12;
		numbers[2] = 13;
	}
	else if (strcmp(color_three , "obw")==0)
	{
		numbers[0] = 15;
		numbers[1] = 16;
		numbers[2] = 17;
	}
	else if (strcmp(color_three ,"bwo")==0)
	{
		numbers[0] = 16;
		numbers[1] = 17;
		numbers[2] = 15;
	}
	else if (strcmp(color_three ,"wob")==0)
	{
		numbers[0] = 17;
		numbers[1] = 15;
		numbers[2] = 16;
	}
	else if (strcmp(color_three , "ogy")==0)
	{
		numbers[0] = 18;
		numbers[1] = 19;
		numbers[2] = 20;
	}
	else if (strcmp(color_three , "gyo")==0)
	{
		numbers[0] = 19;
		numbers[1] = 20;
		numbers[2] = 18;
	}
	else if (strcmp(color_three ,"yog")==0)
	{
		numbers[0] = 20;
		numbers[1] = 18;
		numbers[2] = 19;
	}
	else if (strcmp(color_three ,"oyb")==0)
	{
		numbers[0] = 21;
		numbers[1] = 22;
		numbers[2] = 23;
	}
	else if (strcmp(color_three ,"ybo")==0)
	{
		numbers[0] = 22;
		numbers[1] = 23;
		numbers[2] = 21;
	}
	else if (strcmp(color_three , "boy")==0)
	{
		numbers[0] = 23;
		numbers[1] = 21;
		numbers[2] = 22;
	}
	else {
		cout<<"You entered wrong inputs";
		exit(0);
	}
}

void string_to_integer(char color_eight[8][3])
{
	int indexo=0,index=0;
	char narri[3];
	for(int i=0;i<8;i++)
	{
		indexo=0;
		for(int j=0;j<3;j++)
		{
			narri[indexo]=color_eight[i][j];
			indexo++;
		}
		chtint(narri);
		for (int j = 0; j < 3; j++)
		{
			narra[index] = numbers[j];
			index++;
		}
		
	}
}

array<int, 24> perm_inverse(array<int, 24> p)
{
	array<int, 24> inv;
	for (int i = 0; i < 24; i++)
	{
		inv[p[i]] = i;
	}
	return inv;
}

array<int, 24> I = {flu, luf, ufl, fur, urf, rfu, fdl, dlf, lfd, frd, rdf, dfr, bul, ulb, lbu, bru, rub, ubr, bld, ldb, dbl, bdr, drb, rbd};

array<int, 24> F = {fdl, dlf, lfd, flu, luf, ufl, frd, rdf, dfr, fur, urf, rfu, bul, ulb, lbu, bru, rub, ubr, bld, ldb, dbl, bdr, drb, rbd};

array<int, 24> Fi = perm_inverse(F);

array<int, 24> L = {ulb, lbu, bul, fur, urf, rfu, ufl, flu, luf, frd, rdf, dfr,
					dbl, bld, ldb, bru, rub, ubr, dlf, lfd, fdl, bdr, drb, rbd};

array<int, 24> Li = perm_inverse(L);

array<int, 24> U = {rfu, fur, urf, rub, ubr, bru, fdl, dlf, lfd, frd, rdf, dfr,
					luf, ufl, flu, lbu, bul, ulb, bld, ldb, dbl, bdr, drb, rbd};

array<int, 24> Ui = perm_inverse(U);

set<array<int, 24>> quarter_twists = {F, Fi, L, Li, U, Ui};

array<int, 24> perm_apply(array<int, 24> position, array<int, 24> perm)
{
	array<int, 24> new_position;
	for (int i = 0; i < 24; i++)
	{
		new_position[i] = position[perm[i]];
	}
	return new_position;
}

inline char permToChar(array<int, 24> p)
{
	if (p == F)
		return 'F';
	else if (p == Fi)
		return 'f';
	else if (p == L)
		return 'L';
	else if (p == Li)
		return 'l';
	else if (p == U)
		return 'U';
	else if (p == Ui)
		return 'u';
	else
		return 'n';
}

inline array<int, 24> charToPerm(char p)
{
	if (p == 'F')
		return F;
	else if (p == 'f')
		return Fi;
	else if (p == 'L')
		return L;
	else if (p == 'l')
		return Li;
	else if (p == 'U')
		return U;
	else if (p == 'u')
		return Ui;
}

inline string charToMove(char c)
{
	if (c == 'F')
		return "F ";
	else if (c == 'f')
		return "Fi ";
	else if (c == 'L')
		return "L ";
	else if (c == 'l')
		return "Li ";
	else if (c == 'U')
		return "U ";
	else if (c == 'u')
		return "Ui ";
}

inline string invCharToMove(char c)
{
	if (c == 'F')
		return "Fi ";
	else if (c == 'f')
		return "F ";
	else if (c == 'L')
		return "Li ";
	else if (c == 'l')
		return "L ";
	else if (c == 'U')
		return "Ui ";
	else if (c == 'u')
		return "U ";
}

//Hashing functions used to hash the fixed size array containers
void hash_combine(std::size_t &seed, std::size_t value)
{
	seed ^= value + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

struct container_hasher
{
	template <class T>
	std::size_t operator()(const T &c) const
	{
		std::size_t seed = 0;
		for (const auto &elem : c)
		{
			hash_combine(seed, std::hash<typename T::value_type>()(elem));
		}
		return seed;
	}
};

string shortest_path(array<int, 24> start, array<int, 24> end)
{
	if (start == end)
		return "Already Solved!";
	unordered_map<array<int, 24>, char, container_hasher> forward_parents;
	forward_parents[start] = 'N';
	unordered_map<array<int, 24>, char, container_hasher> backward_parents;
	backward_parents[end] = 'N';
	queue<pair<array<int, 24>, bool>> Q;
	Q.push(make_pair(start, true));
	Q.push(make_pair(end, false));

	while (true)
	{
		if (Q.empty())
			return "No Solution!";
		pair<array<int, 24>, bool> vertex = Q.front();
		array<int, 24> position = vertex.first;
		Q.pop();
		if (vertex.second == true)
		{
			set<array<int, 24>>::iterator move;
			for (move = quarter_twists.begin(); move != quarter_twists.end(); ++move)
			{
				array<int, 24> next_postition = perm_apply(position, *move);
				if (forward_parents.find(next_postition) != forward_parents.end())
				{
					continue;
				}
				forward_parents[next_postition] = permToChar(*move);
				Q.push(make_pair(next_postition, true));
				if (backward_parents.find(next_postition) != backward_parents.end())
				{
					string solution;
					array<int, 24> temp = next_postition;
					char x = forward_parents[temp];
					while (x != 'N')
					{
						solution = charToMove(x) + solution;
						temp = perm_apply(temp, perm_inverse(charToPerm(x)));
						x = forward_parents[temp];
					}
					temp = next_postition;
					x = backward_parents[temp];
					while (x != 'N')
					{
						solution = solution + invCharToMove(x);
						temp = perm_apply(temp, perm_inverse(charToPerm(x)));
						x = backward_parents[temp];
					}
					return solution;
				}
			}
		}
		else
		{
			set<array<int, 24>>::iterator move;
			for (move = quarter_twists.begin(); move != quarter_twists.end(); ++move)
			{
				array<int, 24> next_postition = perm_apply(position, *move);
				if (backward_parents.find(next_postition) != backward_parents.end())
				{
					continue;
				}
				backward_parents[next_postition] = permToChar(*move);
				Q.push(make_pair(next_postition, false));
				if (forward_parents.find(next_postition) != forward_parents.end())
				{
					string solution;
					array<int, 24> temp = next_postition;
					char x = forward_parents[temp];
					while (x != 'N')
					{
						solution = charToMove(x) + solution;
						temp = perm_apply(temp, perm_inverse(charToPerm(x)));
						x = forward_parents[temp];
					}
					temp = next_postition;
					x = backward_parents[temp];
					while (x != 'N')
					{
						solution = solution + invCharToMove(x);
						temp = perm_apply(temp, perm_inverse(charToPerm(x)));
						x = backward_parents[temp];
					}
					return solution;
				}
			}
		}
	}
}

int main()
{
	//14 Length: {6, 7, 8, 20, 18, 19, 3, 4, 5, 16, 17, 15, 0, 1, 2, 14, 12, 13, 10, 11, 9, 21, 22, 23};
	//No Solution: {7, 8, 6, 20, 18, 19, 3, 4, 5, 16, 17, 15, 0, 1, 2, 14, 12, 13, 10, 11, 9, 21, 22, 23};
	
	array<int, 24> start;
	char input[8][3];
	for (int i = 0; i < 8; i++)
	{
		cout << "Enter String " << i <<":";
		for(int j=0;j<3; j++)
		{
			cin>>input[i][j];
		}
	}
	
	string_to_integer(input);
	
	string solution = shortest_path(narra, I);
	
	ofstream fout;
	fout.open("answer1.txt");
	fout << solution << endl;
	fout.close();

	return 0;
}