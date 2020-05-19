#include "PBalance.h"
#include <stack>

bool PBalance::check(std::string exp)
{
	
	//Stack will be empty by the end if all parantheses were closed
	//Everytime a open paranthesis is closed, that set of paranthesis is removed
	std::stack<char> s;

	//Iterate through all the characters of the string
	for (int i = 0; i < exp.size(); i++)
	{

		//Check for {} Pairs
		//If the current character being explored is a closing paranthesis
		if (exp[i] == '}')
		{
			//If the stack is empty, we already know
			//the paranthesis isn't balanced
			// A expression like so }.... isn't balanced
			// There is not opening bracket to complete it
			if (s.empty())
				return false;

			if (s.top() == '{')
				s.pop();
			else
				s.push(exp[i]);
			
	

		}
		
		//Same step as before for for ')' 
		if (exp[i] == ')')
		{
			if (s.empty())
				return false;

			if (s.top() == '(')
				s.pop();
			else 
				s.push(exp[i]);
			
		}

		//Same step as before for for ']' 
		if (exp[i] == ']')
		{
			if (s.empty())
				return false;

			if (s.top() == '[')
				s.pop();
			else 
				s.push(exp[i]);
			
		}

		//If a closing paranthesis is being explored, then add it into the stack
		if (exp[i] == '{')
			s.push(exp[i]);

		if (exp[i] == '(' )
			s.push(exp[i]);

		if (exp[i] == '[')
			s.push(exp[i]);

			
		

	
	}

	//If the stack is empty the expression's 
	//parantheses are balanced
	//else that means the parantheses aren't balanced
	//since all the parantheses haven't canceled each other out
	if (s.empty())
		return true;
	else
		return false;
}
