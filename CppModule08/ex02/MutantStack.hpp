#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>

template <class Type, class Container=std::vector<Type>>
class MutantStack
{
	public:

		typedef size_t size_type;
		typedef Type value_type;
		typedef Container container_type;
		typedef Type& reference;
		typedef const Type& const_reference;
	protected:

		container_type	c;
	public:
		MutantStack( const container_type& c = container_type()) : c(c) {}
		MutantStack( MutantStack const & src ) : c(src.c) {}
		virtual ~MutantStack() {}

		typedef typename container_type::iterator iterator;

		iterator 			begin() { return this->c.begin(); }
		iterator 			end() { return this->c.end(); }
		bool				empty( void ) const { return this->c.empty(); }
		size_type			size() const { return this->c.size(); }
		reference			top() { return this->c.back(); }
		const_reference		top() const { return this->c.back(); }
		void				push(const value_type& val) { this->c.push_back(val); }
		void				pop() { this->c.pop_back(); }

};


#endif /* ***************************************************** MUTANTSTACK_H */
