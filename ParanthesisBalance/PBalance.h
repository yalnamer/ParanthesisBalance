#pragma once
#include <iostream>

class PBalance
{
	/*
			Paranthesis Balanace, This class will look
		and check if any paranthesis, bracket or curly brackets 
		close properly.

	
		**Will refer to curly brackets, brackets and paranthesis all as paranthesis.
		
		Balance Condition:
			The last opened paranthesis opened must be closed before a new closed brackets
			gets added
	*/

public:

	//Checks if the parantheses in a string are balanced
	bool check(std::string exp);
};

