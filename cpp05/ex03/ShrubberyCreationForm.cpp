#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = "wot";
	std::cout << GREEN "Shrubbery Construct" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	std::cout << GREEN "Shrubbery Target Construct" RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELO "Shrubbery Destruct" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &dup)
{
	*this = dup;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &dup)
{
	if (this != &dup) 
	{
		_target = dup._target;
	}
	return *this;
}


void	ShrubberyCreationForm::setTarget(std::string target)
{
	_target = target;
}

AForm*	ShrubberyCreationForm::clown()
{
	return (new ShrubberyCreationForm(*this));
}

void	ShrubberyCreationForm::doStuff() const
{
	std::string 	filename = _target + "_shrubbery";
	std::ofstream	outfile(filename.c_str());
	outfile << " ⢙⣿⣏⠸⣯⣿⣿⣿⡰⣿⡿⣼⣿⣿⣿⣛⣿⢭⡏⡵⢸⡏⣿⢜⡯⢹⡿⣽⢻⡿⡥⣟⣳⢏⡧⢻⣿⡏⣿⢯⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢈⣿⡧⣙⢟⣿⣿⣿⡷⢹⣇⢻⠅⠢⡏⠠⣿⡖⡉⢇⢿⡹⡘⢎⡽⣧⠗⣾⣰⠿⢲⡹⢛⣾⣥⡟⠞⣽⣏⢾⣸⣯⣿⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠐⢎⡇⠼⣛⠾⣿⣿⢿⣰⣏⠂⢀⡱⡄⠐⣼⠃⡜⢣⠎⡷⢀⢯⡘⠉⠂⣿⢩⠒⡽⢂⡉⡼⢩⡔⣌⠓⢎⡆⣿⡳⣏⣿⣻⣿⣿⣿⡟⣼⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⡜⣠⢉⡶⣹⢚⣿⠹⣷⢣⡿⣠⠼⣷⠣⠁⠬⠐⡘⡂⠜⡡⢂⡾⡅⢢⠰⡌⠰⣨⠇⢠⣞⡝⣢⢡⠄⣂⡬⣞⣱⣧⡟⣾⣗⣿⣿⡿⣽⢻⣜⣿⣙⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠈⠐⢨⢖⣽⣊⢎⡇⣾⠉⣖⡉⣿⣆⣿⠷⣇⠳⣀⠑⢂⡱⠂⠜⡰⠱⠈⣡⠁⡈⢃⠀⣯⠰⣥⡚⠰⢏⣿⡽⢻⣥⡟⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠀⠀⢢⣿⢻⣞⣆⠳⣹⣦⢸⣼⡐⣙⣿⣟⣧⡷⣽⣌⢳⠽⣁⢲⠡⢃⠄⣣⠀⢘⡄⢢⣜⠧⡐⡉⢜⡿⢳⣼⣫⢟⣷⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠀⠀⣼⣿⣺⣟⡮⣅⣸⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣾⣯⣶⣿⣼⡷⢨⡀⠆⢠⣈⡗⣀⠺⣅⡐⣈⠾⣿⣗⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠀⠂⢼⣿⡷⣿⡽⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⢡⡄⢰⡙⡎⠐⣯⢸⡓⣼⣫⢟⣹⡾⣽⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠀⠩⣜⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⡇⠰⡅⣂⢼⠢⡕⢣⡽⣾⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⠀⣡⢾⣿⣿⣿⣿⣿⢿⣁⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡝⠈⡥⡷⢎⢳⡝⣤⢾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢐⠡⣏⣿⣿⣿⣿⣿⣾⣿⣿⡟⣻⣿⣿⣿⣍⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠦⣘⡿⢙⡲⣌⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⡛⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢄⣳⣿⣿⣿⣿⣿⡿⢿⣽⣿⡆⠑⠫⠿⠿⡟⢢⣜⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⢹⠡⣧⢹⢚⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⢻⢻⢿⠛⡱⢚⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⡿⣿⣿⣿⣿⣿⣽⣿⣿⢿⣷⣦⣽⣾⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣛⠬⡓⡹⢀⠯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣧⣶⣦⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⠿⣽⣷⣿⠻⣿⣿⣿⣿⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣲⠍⢲⡐⠧⢈⠚⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢫⡿⣿" << std::endl;
	outfile << " ⣿⣽⡻⣿⣍⣿⣼⢿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢦⡙⠆⢠⠄⡉⢲⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⢿⣿" << std::endl;
	outfile << " ⣻⢏⣷⣿⡏⣿⢩⡞⣡⡿⣾⣭⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢻⠇⡙⢆⢈⡐⠂⡄⢢⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⣷⣿⣿⣿" << std::endl;
	outfile << " ⡟⠼⢸⡟⣤⠿⣿⣾⣷⣿⢻⣿⢿⠻⣟⣻⡿⢏⣿⣛⣯⡟⣏⡷⢻⡥⣏⠆⢰⠉⡄⠒⣠⠓⡄⢫⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣟⣇⣻⣷⣿⣿⠿⣷⢻⡐⣾⣿⣣⣘⣿⣿⢻⠼⣖⢫⠆⣽⢎⣛⠴⣛⣸⡆⠘⢄⠣⠁⠌⢷⡸⣘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡯⢽⣿⣵⣿⣾⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⡿⠿⣿⢻⡍⣾⢡⢿⣽⣻⣟⡶⢻⣿⠎⣼⡛⠤⢈⢧⣛⣦⣏⣿⣧⢽⣃⡿⢄⢃⡜⡬⢐⣷⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣛⠧⣿⡏⣿⣿⣹⣷⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢫⡕⡇⣌⠻⢄⡻⣸⠟⡜⡳⢎⡵⢫⡷⠈⣰⠹⡄⣹⢦⣱⣿⣿⣿⣷⣿⣏⡷⠈⣏⠛⡼⢌⡻⣘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢷⣯⣿⣏⣏⠿⣾⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣎⡐⠃⠹⢠⠘⣷⣧⢿⢿⣿⣹⢾⠳⣇⡴⢯⣷⢾⣽⣿⣾⣿⣿⣿⣯⣿⡾⡗⡸⢰⡿⣀⢿⣼⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⣷⣿⣿⣿⣽⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢧⡉⢇⠀⢡⢒⣼⢢⢿⣤⢻⣧⣰⣏⣷⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⡿⣯⢥⣳⡝⡂⢽⡯⢿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣷⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣷⢹⡞⠣⣽⠊⣽⢫⠼⣿⢳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢸⢱⢻⠞⣽⢳⡜⠣⠉⢰⠿⣿⠳⢾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⡙⢿⣏⠷⣽⢞⣿⣞⣦⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⡀⠎⣽⡿⣼⣿⠏⠱⠀⢃⣹⣶⣿⡓⡌⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⡔⢫⢞⣙⡞⣼⢦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣾⢓⣾⣾⣵⡻⣌⠃⠠⠁⠌⡽⡿⢿⣳⡜⡷⡽⣿⣿⡿⣿⣿⣿⣿⣿⢿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⡙⢦⣹⣆⢯⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⢸⡏⢿⣦⡙⡼⠁⣠⢏⠆⡐⣣⣍⢧⡜⣱⣏⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣜⡳⣟⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣷⣿⣿⣿⣷⣧⣶⣈⡜⡠⢼⣙⣎⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢾⣳⣯⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣟⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣻⢿⣿⣻⣿⣿⣿⣿⣿⣿⣿⢿⣿⣻⣿⣿⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣽⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣳⢿⣯⢿⣯⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣺⢿⡸⣷⢈⣿⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⢿⡧⢛⡜⢾⣟⣼⠽⣯⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣺⢿⡽⢡⣾⡃⣿⣺⠗⡼⣯⣿⢘⣿⠹⣟⣿⡿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣽⣏⢿⣟⠹⣷⣿⠊⣿⢣⣖⡿⢡⣭⡛⢼⣾⣿⣿⢏⢻⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⡿⣿⢿⣻⣯⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣾⣭⡲⣍⢽⡆⢹⡏⠯⠹⠘⡹⠇⠹⢿⡙⣿⢚⡱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣽⢻⡏⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣷⣾⣥⣾⣴⣵⣯⣤⣾⣽⣞⣧⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣏⣿⣸⡿⣟⣿⡯⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣛⣻⣟⣻⣿⣿⣷⣿⠿⣿⣿⣿⣿⣿⣿⣿⣟⣻⣿⣿⡿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣻⣥⣛⡹⢿⣿⣟⣻⣿⣏⣿⣿⣿⣿⡾⣽⣿⣿⣿⢼⡿⡍⢿⡽⢫⡿⢯⡙⣇⢿⡏⣿⢻⡁⣿⡹⣹⣿⡿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⢻⣿⣿⣿⣧⣿⣿⣽⣿⣷⣿⣰⣿⣿⣿⡷⣽⣿⣿⣿⣽⡺⣕⣳⠺⣧⣉⢇⠻⢡⠿⣸⡶⣭⢳⣇⡽⣟⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣯⣻⡿⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣯⣶⣦⣡⣿⣷⣿⣮⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣷⢿⣷⣿⣿⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣤⣀⣀⣀⣀⡀			" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠟⠉⠉⠉⠉⠉⠉⠉⠙⠻⢶⣄⠀⠀⠀⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣷⡀⠀⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡟⠀⣠⣶⠛⠛⠛⠛⠛⠛⠳⣦⡀⠀⠘⣿⡄⠀⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠁⠀⢹⣿⣦⣀⣀⣀⣀⣀⣠⣼⡇⠀⠀⠸⣷⠀⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠉⠛⠿⠿⠿⠿⠛⠋⠁⠀⠀⠀⠀⣿⡄⣠	" << std::endl;
	outfile << " 			⠀⠀⢀⣀⣀⣀⠀⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡇⠀	" << std::endl;
	outfile << " 			⠿⠿⠟⠛⠛⠉⠀⠀⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⠀⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⢸⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⠀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << " 			⠀⠀⠀⠀⠀⠀⢰⣿⠀⠀⠀⠀⣠⡶⠶⠿⠿⠿⠿⢷⣦⠀⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << " 			⠀⠀⣀⣀⣀⠀⣸⡇⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << " 			⣠⡿⠛⠛⠛⠛⠻⠀⠀⠀⠀⠀⢸⣇⠀⠀⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << " 			⢻⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡟⠀⠀⢀⣤⣤⣴⣿⠀⠀⠀⠀⠀⠀⠀⣿⠀	" << std::endl;
	outfile << "			⠈⠙⢷⣶⣦⣤⣤⣤⣴⣶⣾⠿⠛⠁⢀⣶⡟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡟⠀	" << std::endl;
	outfile << "			⢷⣶⣤⣀⠉⠉⠉⠉⠉⠄⠀⠀⠀⠀⠈⣿⣆⡀⠀⠀⠀⠀⠀⠀⢀⣠⣴⡾⠃⠀	" << std::endl;
	outfile << "			⠀⠈⠉⠛⠿⣶⣦⣄⣀⠀⠀⠀⠀⠀⠀⠈⠛⠻⢿⣿⣾⣿⡿⠿⠟⠋⠁⠀⠀⠀	" << std::endl;
	outfile << "					⢀⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆ " << std::endl;
	outfile << "					⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ " << std::endl;
	outfile << "					⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
	outfile << "					⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⠿⠿⠿⠛⠉			   " << std::endl;
	outfile << "                          ,@@@@@@@,							" << std::endl;
	outfile << "                  ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			" << std::endl;
	outfile << "              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	outfile << "              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "              `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	outfile << "                  |o|        | |         | |				" << std::endl;
	outfile << "                  |.|        | |         | |				" << std::endl;
	outfile << "               \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
	outfile << "                          ,@@@@@@@,							" << std::endl;
	outfile << "                  ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			" << std::endl;
	outfile << "              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	outfile << "              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "              `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	outfile << "                  |o|        | |         | |				" << std::endl;
	outfile << "                  |.|        | |         | |				" << std::endl;
	outfile << "               \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
	outfile << "                          ,@@@@@@@,							" << std::endl;
	outfile << "                  ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			" << std::endl;
	outfile << "              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	outfile << "              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "              `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	outfile << "                  |o|        | |         | |				" << std::endl;
	outfile << "                  |.|        | |         | |				" << std::endl;
	outfile << "               \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
	outfile << "                          ,@@@@@@@,							" << std::endl;
	outfile << "                  ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			" << std::endl;
	outfile << "              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	outfile << "              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "              `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	outfile << "                  |o|        | |         | |				" << std::endl;
	outfile << "                  |.|        | |         | |				" << std::endl;
	outfile << "               \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
	outfile << "                          ,@@@@@@@,							" << std::endl;
	outfile << "                  ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			" << std::endl;
	outfile << "              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	outfile << "              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "              `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	outfile << "                  |o|        | |         | |				" << std::endl;
	outfile << "                  |.|        | |         | |				" << std::endl;
	outfile << "               \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
	outfile << "" << std::endl;
	outfile.close();
}