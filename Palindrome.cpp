// Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Palindrome.h"


int main()
{
	Palindrome *pal = new Palindrome();
	pal->ReadIn();
	pal->Check();
	pal->Reverse();
	pal->Print();
    return 0;
}

