#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <deque>
#include <stack>
# include <list>

template <class Type, class Container = std::deque<Type> >
class MutantStack : public std::stack<Type>
{
	public:

		typedef size_t		size_type;
		typedef Type 		value_type;
		typedef Container	container_type;
		typedef Type& 		reference;
		typedef const Type& const_reference;
	protected:

		container_type	c;
	public:
		MutantStack( const container_type& c = container_type()) : c(c) {}
		MutantStack( MutantStack const & src ) : c(src.c) {}
		MutantStack & operator=(MutantStack const & src) { return this->c.operator=(src);}
		virtual ~MutantStack() {}

		typedef typename container_type::iterator iterator;

		iterator 			begin() { return this->c.begin(); }
		iterator 			end() { return this->c.end(); }
		bool				empty( void ) const { return this->c.empty(); }
		size_type			size() const { return this->c.size(); }
		reference			top() { return this->c.front(); }
		const_reference		top() const { return this->c.front(); }
		void				push(const value_type& val) { this->c.push_front(val); }
		void				pop() { this->c.pop_front(); }

};


#endif /* ***************************************************** MUTANTSTACK_H */
