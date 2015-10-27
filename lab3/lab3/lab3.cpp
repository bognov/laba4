// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "class.h"
using namespace std;

int setabc(int a[3])
{
	cout << "a ";
	cin >> a[0];
	cout << "b ";
	cin >> a[1];
	cout << "c ";
	cin >> a[2];
	return *a;
}

int setsm(int m[2])
{
	cout << "s ";
	cin >> m[0];
	cout << "m ";
	cin >> m[1];
	return *m;
}

vehicle * List::head = NULL;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[3] , hp, n, m[2], v, w, p, i;
	setabc(a);
	setsm(m);
	List L;
	cout << "set places ";
	cin >> n;
	cout << "hp ";
	cin >> hp;
	cout << "volume ";
	cin >> v;
	car *A = new car(a, m, n);
	car::engine *E = new car::engine(hp, v);

	(*A).getinfo(*E);
	L.Insert(A);

	setabc(a);
	setsm(m);
	cout << "set wagons(<10) ";
	cin >> w;
	cout << "set places ";
	cin >> p;
	train *T = new train(a, m, w);

	train::wagon W[10];
	for (i = 0; i < w; i++)
	{
		W[i].setnumber(i+1);
		W[i].setplaces(p);
	}

	cout << "number of wagon ";
	cin >> i;

	L.Insert(T);
	(*T).getinfo(W[i-1]);

	setabc(a);
	setsm(m);
	cout << "set places ";
	cin >> n;
	express *EX = new express(a, m, n);

	(*EX).getinfo();
	L.Insert(EX);

	L.Show();

	return 0;
}

