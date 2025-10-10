
class Span {

	public:
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& other);
		~Span();
	
		void addNumber();
		int shortestSpan();
		int longestSpan();

	private:

}