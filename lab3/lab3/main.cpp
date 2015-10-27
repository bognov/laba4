#include <iostream>
#include "stdafx.h"
#include "class.h"

using namespace std;

void vehicle::setsize(int a, int b, int c)
{
	length = a;
	width = b;
	hight = c;
}

void vehicle::setspeed(int a)
{
	maxspeed = a;
}

void vehicle::setweight(int a)
{
	weight = a;
}

void vehicle::getinfo()
{
	cout << length << endl;
	cout << width << endl;
	cout << hight << endl;
	cout << maxspeed << endl;
	cout << weight << endl;
}

/*===========================================================
=============================================================*/

void car::setplaces(int a)
{
	numplaces = a;
}

void car::getinfo(engine& m)
{
	cout << endl;
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "places " << numplaces << endl;
	cout << "max speed " << maxspeed << endl;
	m.getinfo1();
	cout << endl << "===========================" << endl << endl;
}

/*===========================================================
=============================================================*/

void train::setwagons(int a)
{
	numwagons = a;
}

void train::getinfo(wagon& m)
{
	cout << endl;
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "max speed " << maxspeed << endl;
	m.getinfo1();
	cout << endl << "===========================" << endl << endl;
}


/*==============================================================
================================================================*/

void express::setplaces(int a)
{
	numplaces = a;
}

void express::getinfo()
{
	cout << endl;
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "places " << numplaces << endl;
	cout << "max speed " << maxspeed << endl;
	cout << endl << "===========================" << endl << endl;
}


/*====================================================================
======================================================================*/

void train::wagon::setnumber(int a)
{
	number = a;
}

void train::wagon::setplaces(int a)
{
	numplaces = a;
}

void train::wagon::getinfo1()
{
	cout << "wagon number " << number << endl; 
	cout << "number of places " << numplaces << endl;
}

/*===================================================================
=====================================================================*/

void car::engine::sethp(int a)
{
	hp = a;
}

void car::engine::setvolume(int a)
{
	volume = a;
}

void car::engine::getinfo1()
{
	cout << "hp " << hp << endl;
	cout << "volume " << volume << endl;
}

/*===================================================================
=====================================================================*/

List::~List()
{
	vehicle *r;
	while (head)
	{
		r = head;
		head = head->next;
		delete r;
	}
}
void List::Insert(vehicle *p)
{

	vehicle *r;
	r = head;
	head = p;
	p->next = r;
}
void List::Show(void)
{
	vehicle *r;
	r = head;
	while (r)
	{
		r->getinfo();
		r = r->next;
	}
}