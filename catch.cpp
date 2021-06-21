#include<iostream>
#include<vector>

using namespace std;

int main()
{
	try 
	{  
	  std::vector<int> v(N);    // do something 
	} 
	catch (const std::bad_alloc&) 
	{    
		std::cout << "failed to allocate memory for vector!" << std::endl; 
	} 
	catch (const std::runtime_error& e) 
	{    
		std::cout << "runtime error: " << e.what() << std::endl; 
	} 
	catch (...) //catch all from throw;
	{    
		std::cout << "unexpected exception!" << std::endl;   
		throw; 
	} 

	return 0;
}
