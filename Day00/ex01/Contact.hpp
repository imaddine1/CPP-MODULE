#ifndef CONTACT_HPP
#define CONTACT_HPP

class	Contact
{
	int			index_m;
	std::string	fn_m;
	std::string	ln_m;
	std::string	nk_m;
	std::string	nb_m;
	public:
	/*Default constructor*/
	Contact();
	void	set_info(std::string fn, std::string ln, std::string nk, std::string nb,
		int index);
	void	get_display();
	int		get_index();
};

#endif